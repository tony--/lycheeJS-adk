
#ifndef API_TEXTURE_H_
#define API_TEXTURE_H_

#include <v8.h>
#include "../v8gl.h"

namespace api {

	class Texture {

		private:

		public:

			// Disallowing copy constructor
			Texture(const api::Texture &cpy);

			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleLoad(const v8::Arguments& args);
			static GLuint load(char* filename, int &width, int &height);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

};

#endif

