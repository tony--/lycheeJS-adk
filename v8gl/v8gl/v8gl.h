
#ifndef V8GL_V8GL_H_
#define V8GL_V8GL_H_

#include <v8.h>


namespace v8gl {

	static v8::Persistent<v8::Context> context;

	class V8GL {

		private:

		public:

			V8GL(int* pargc, char** argv);

			static v8::Handle<v8::Value> execute(v8::Handle<v8::String> source, v8::Handle<v8::String> filename);
			static v8::Handle<v8::Value> handleExportADK(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleExportJSON(const v8::Arguments& args);

			static char* read(char* filename);
			static void logException(v8::TryCatch* try_catch);

	};

}


#endif

