
#ifndef V8GL_V8GL_H_
#define V8GL_V8GL_H_

#include <v8.h>


namespace v8gl {

	class V8GL {

		private:

		public:

			static v8::Persistent<v8::Context> initialize(int* pargc, char** argv);
			static bool dispatch(v8::Handle<v8::Context>, char* what);

			static v8::Handle<v8::Value> execute(v8::Handle<v8::Context> context, v8::Handle<v8::String> source, v8::Handle<v8::String> filename);

#ifdef V8ADK
			static v8::Handle<v8::Value> handleBuildExportBash(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleBuildExportJSON(const v8::Arguments& args);
			static v8::Handle<v8::Value> handleBuildRewrite(const v8::Arguments& args);
#endif

			static char* read(char* filename);
			static void logException(v8::TryCatch* try_catch);

	};

}


#endif

