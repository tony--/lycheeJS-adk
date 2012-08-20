
#ifndef API_TEXTURE_H_
#define API_TEXTURE_H_

#include <v8.h>
#include <png.h>

#ifdef __APPLE__
	#include <OpenGL/OpenGL.h>
#else
	#define GL_GLEXT_PROTOTYPES
	#include <GL/gl.h>
#endif


namespace api {

	class Texture {

		private:

		public:

			// Disallowing copy constructor
			Texture(const api::Texture &cpy);

			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleLoad(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleGenerate(const v8::Arguments& args);
			static png_byte *load(char* filename, int &width, int &height);
			static GLuint generate(int width, int height, GLvoid* data);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

};

#endif

