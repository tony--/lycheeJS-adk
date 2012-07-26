
#include <fstream>
#include <stdio.h>
#include <png.h>

#include "api.h"

#define TEXTURE_LOAD_ERROR 0

namespace api {


	Texture::Texture(const Texture &cpy) {
	}



	v8::Handle<v8::FunctionTemplate> Texture::generate() {

		v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(handleNew);
		tpl->SetClassName(v8::String::New("Texture"));

		return tpl;

	}

	v8::Handle<v8::Value> Texture::handleNew(const v8::Arguments& args) {

		v8::HandleScope scope;

		v8::String::Utf8Value value(args[0]);
		char* url = *value;


		v8::Local<v8::ObjectTemplate> instanceTemplate = v8::ObjectTemplate::New();
		instanceTemplate->SetInternalFieldCount(1);

		instanceTemplate->Set(v8::String::New("url"), v8::String::New(url));
		instanceTemplate->Set(v8::String::New("id"), v8::Null());
		instanceTemplate->Set(v8::String::New("width"), v8::Null());
		instanceTemplate->Set(v8::String::New("height"), v8::Null());

		instanceTemplate->Set(v8::String::New("load"), v8::FunctionTemplate::New(handleLoad));
		instanceTemplate->Set(v8::String::New("onload"), v8::FunctionTemplate::New());

		instanceTemplate->Set(v8::String::New("toString"), v8::FunctionTemplate::New(handleToString));

		v8::Local<v8::Object> instance = instanceTemplate->NewInstance();

		return scope.Close(instance);

	}

	v8::Handle<v8::Value> Texture::handleToString(const v8::Arguments& args) {
		return v8::String::New("[object Texture]");
	}

	v8::Handle<v8::Value> Texture::handleLoad(const v8::Arguments& args) {

		v8::HandleScope scope;
		v8::Local<v8::Object> thisObj = args.This();

		if (thisObj.IsEmpty()) {
			return scope.Close(v8::Null());
		}


		v8::Local<v8::String> property = v8::String::New("id");
		if (thisObj->Has(property)) {

			v8::String::Utf8Value value(thisObj->Get(v8::String::New("url")));
			char* url = *value;

			int width;
			int height;

			GLuint id = api::Texture::load(url, width, height);

			thisObj->Set(property, v8::Integer::New(id));
			thisObj->Set(v8::String::New("width"), v8::Integer::New(width));
			thisObj->Set(v8::String::New("height"), v8::Integer::New(height));


//			thisObj->SetPointerInInternalField(0, &texture);

			v8::Local<v8::Function> callback = v8::Function::Cast(*thisObj->Get(v8::String::New("onload")));
			if (!callback.IsEmpty()) {
				callback->Call(thisObj, 0, NULL);
			}

		}


		return scope.Close(v8::Null());

	}

	GLuint Texture::load(char* filename, int &width, int &height) {

		png_byte header[8];

		//open file as binary
		FILE *fp = fopen(filename, "rb");
		if (!fp) {
			return TEXTURE_LOAD_ERROR;
		}


		//read the header
		fread(header, 1, 8, fp);


		//test if png
		int is_png = !png_sig_cmp(header, 0, 8);
		if (!is_png) {
			fclose(fp);
			return TEXTURE_LOAD_ERROR;
		}


		png_structp png_ptr = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
		if (!png_ptr) {
			fclose(fp);
			return TEXTURE_LOAD_ERROR;
		}


		png_infop info_ptr = png_create_info_struct(png_ptr);
		if (!info_ptr) {
			png_destroy_read_struct(&png_ptr, (png_infopp) NULL, (png_infopp) NULL);
			fclose(fp);
			return TEXTURE_LOAD_ERROR;
		}

		png_infop end_info = png_create_info_struct(png_ptr);
		if (!end_info) {
			png_destroy_read_struct(&png_ptr, &info_ptr, (png_infopp) NULL);
			fclose(fp);
			return (TEXTURE_LOAD_ERROR);
		}
	 
		if (setjmp(png_jmpbuf(png_ptr))) {
			png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
			fclose(fp);
			return (TEXTURE_LOAD_ERROR);
		}
	 

		png_init_io(png_ptr, fp);
		png_set_sig_bytes(png_ptr, 8);
		png_read_info(png_ptr, info_ptr);


		int bit_depth, color_type;
		png_uint_32 twidth, theight;
		png_get_IHDR(png_ptr, info_ptr, &twidth, &theight, &bit_depth, &color_type, NULL, NULL, NULL);

		width = twidth;
		height = theight;

		png_read_update_info(png_ptr, info_ptr);
	 
		int rowbytes = png_get_rowbytes(png_ptr, info_ptr);
	 

		png_byte *image_data = new png_byte[rowbytes * height];
		if (!image_data) {
			png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
			fclose(fp);
			return TEXTURE_LOAD_ERROR;
		}
	 

		png_bytep *row_pointers = new png_bytep[height];
		if (!row_pointers) {
			png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
			delete[] image_data;
			fclose(fp);
			return TEXTURE_LOAD_ERROR;
		}


		// Does OpenGL really need the inverted row-based format?
		// Seems as it doesn't, maybe myth or rumor?
		// row_pointers[height - 1 - i] = image_data + i * rowbytes;

		for (int i = 0; i < height; ++i) {
			row_pointers[i] = image_data + i * rowbytes;
		}


		png_read_image(png_ptr, row_pointers);


		GLuint texture;
		glGenTextures(1, &texture);
		glBindTexture(GL_TEXTURE_2D, texture);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, (GLvoid*) image_data);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);


		png_destroy_read_struct(&png_ptr, &info_ptr, &end_info);
		delete[] image_data;
		delete[] row_pointers;
		fclose(fp);


		return texture;

	}

}

