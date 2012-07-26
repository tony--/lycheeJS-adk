
#ifndef API_H_
#define API_H_

#include <v8.h>
#include "../v8gl.h"

namespace api {

	class Console {

		public:
			static v8::Handle<v8::Value> log(const v8::Arguments& args);
			static v8::Handle<v8::Value> warn(const v8::Arguments& args);
			static v8::Handle<v8::Value> error(const v8::Arguments& args);
			static v8::Handle<v8::Value> group(const v8::Arguments& args);
			static v8::Handle<v8::Value> groupEnd(const v8::Arguments& args);

			static v8::Handle<v8::ObjectTemplate> generate(void);

	};

	class Script {

		private:

		public:

			// Disallowing copy constructor
			Script(const api::Script &cpy);

			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleLoad(const v8::Arguments& args);
			static char* load(char* filename);
			static v8::Handle<v8::Value> handleExecute(const v8::Arguments& args);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

	class Text {

		private:

		public:

			// Disallowing copy constructor
			Text(const api::Text &cpy);

			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleLoad(const v8::Arguments& args);
			static char* load(char* filename);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

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

