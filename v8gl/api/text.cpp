
#include <fstream>

#include "text.h"
#include "../v8gl.h"


namespace api {


	Text::Text(const Text &cpy) {
	}



	v8::Handle<v8::FunctionTemplate> Text::generate() {

		v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(handleNew);
		tpl->SetClassName(v8::String::New("Text"));

		return tpl;

	}

	v8::Handle<v8::Value> Text::handleNew(const v8::Arguments& args) {

		v8::HandleScope scope;

		v8::String::Utf8Value value(args[0]);
		char* url = *value;


		v8::Local<v8::ObjectTemplate> instanceTemplate = v8::ObjectTemplate::New();
		instanceTemplate->SetInternalFieldCount(0);

		instanceTemplate->Set(v8::String::New("url"), v8::String::New(url));
		instanceTemplate->Set(v8::String::New("data"), v8::Null());

		instanceTemplate->Set(v8::String::New("load"), v8::FunctionTemplate::New(handleLoad));
		instanceTemplate->Set(v8::String::New("onload"), v8::FunctionTemplate::New());

		instanceTemplate->Set(v8::String::New("toString"), v8::FunctionTemplate::New(handleToString));

		v8::Local<v8::Object> instance = instanceTemplate->NewInstance();


		return scope.Close(instance);

	}

	v8::Handle<v8::Value> Text::handleToString(const v8::Arguments& args) {
		return v8::String::New("[object Text]");
	}

	v8::Handle<v8::Value> Text::handleLoad(const v8::Arguments& args) {

		v8::HandleScope scope;
		v8::Local<v8::Object> thisObj = args.This();

		if (thisObj.IsEmpty()) {
			return scope.Close(v8::Null());
		}


		v8::Local<v8::String> property = v8::String::New("data");
		if (thisObj->Has(property)) {

			v8::String::Utf8Value value(thisObj->Get(v8::String::New("url")));
			char* url = *value;

			char* data = api::Text::load(url);
			if (data == NULL) {
				thisObj->Set(property, v8::Null());
				v8::ThrowException(v8::Exception::Error(v8::String::New("Could not read file.")));
			} else {
				thisObj->Set(property, v8::String::New(data));
			}

			v8::Local<v8::Function> callback = v8::Function::Cast(*thisObj->Get(v8::String::New("onload")));
			if (!callback.IsEmpty()) {
				callback->Call(thisObj, 0, NULL);
			}

		}


		return scope.Close(v8::Null());

	}

	char* Text::load(char* filename) {

		FILE* file = fopen(filename, "rb");
		if (file == NULL) {
			return NULL;
		}


		fseek(file, 0, SEEK_END);
		int size = ftell(file);
		rewind(file);


		char* chars = new char[size + 1];
		chars[size] = '\0';

		for (int i = 0; i < size; ) {
			int read = static_cast<int>(fread(&chars[i], 1, size - i, file));
			i += read;
		}

		fclose(file);


		return chars;

	}

}

