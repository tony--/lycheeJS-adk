
#include <limits.h>
#include <string.h>
#include <fstream>

#include "v8gl.h"

#include "../binding/gl/glbind.h"
#include "../binding/glu/glubind.h"
#include "../binding/glut.h"

#include "../api/console.h"
#include "../api/script.h"
#include "../api/text.h"
#include "../api/texture.h"
#include "../api/timer.h"


// Advanced @built-in JavaScript headers
#include "../jsapi/interval.h"
#include "../jsapi/timeout.h"
#include "../jsapi/lychee_core_js.h"
#include "../jsapi/lychee_Builder_js.h"
#include "../jsapi/lychee_Preloader_js.h"


namespace v8gl {

	v8::Persistent<v8::Context> V8GL::initialize(int* pargc, char** argv) {

		v8::Local<v8::ObjectTemplate> global = v8::ObjectTemplate::New();

		// GL/GLU/GLUT Bindings
		v8::Handle<v8::ObjectTemplate> Gl = GlFactory::createGl();
		global->Set(v8::String::New("gl"), Gl);
		global->Set(v8::String::New("glu"), GluFactory::createGlu());
		global->Set(v8::String::New("glut"), binding::GLUT::generate(pargc, argv));


		// Console API
		global->Set(v8::String::New("console"), api::Console::generate());


		// Advanced Data Types
		global->Set(v8::String::New("Script"), api::Script::generate(), v8::ReadOnly);
		global->Set(v8::String::New("Text"), api::Text::generate(), v8::ReadOnly);
		global->Set(v8::String::New("Texture"), api::Texture::generate(), v8::ReadOnly);


		// Navigator API
		v8::Handle<v8::ObjectTemplate> navigator = v8::ObjectTemplate::New();
		navigator->Set(v8::String::New("appName"), v8::String::New("V8GL"));
		navigator->Set(v8::String::New("platform"), v8::String::New("Linux i686"));
		navigator->Set(v8::String::New("vendor"), v8::String::New("lycheeJS"));
		navigator->Set(v8::String::New("product"), v8::String::New("v8gl"));
		global->Set(v8::String::New("navigator"), navigator);


		v8::Persistent<v8::Context> context = v8::Context::New(NULL, global);

// FIXME: This crap needs to be all removed.

		v8::HandleScope scope;
		context->Enter();
		GlFactory::self_ = v8::Persistent<v8::Object>::New(Gl->NewInstance());
		context->Exit();

// END of removal


		return context;

	}


	bool V8GL::dispatch(v8::Handle<v8::Context> context, char* what) {

		if (strcmp(what, "export-adk") == 0) {

			execute(context, v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));

			context->Enter();

			v8::Handle<v8::Object> lychee = context->Global()->Get(v8::String::New("lychee"))->ToObject();
			lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::handleExportADK)->GetFunction());

			context->Exit();

			return true;

		} else if (strcmp(what, "export-json") == 0) {

			execute(context, v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));

			context->Enter();

			v8::Handle<v8::Object> lychee = context->Global()->Get(v8::String::New("lychee"))->ToObject();
			lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::handleExportJSON)->GetFunction());

			context->Exit();

			return true;

		} else if (strcmp(what, "lycheeJS") == 0) {

			// @built-in Polyfills for BOM/DOM like behaviours
			execute(context, v8::String::New((char*) jsapi_interval_js), v8::String::New("@built-in/interval.js"));
			execute(context, v8::String::New((char*) jsapi_timeout_js), v8::String::New("@built-in/timeout.js"));

			// @built-in lycheeJS libraries for communication between Engine & ADK and/or V8GL
			execute(context, v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));
			execute(context, v8::String::New((char*) lychee_Builder_js), v8::String::New("@built-in/lychee/Builder.js"));
			execute(context, v8::String::New((char*) lychee_platform_v8gl_Preloader_js), v8::String::New("@built-in/lychee/platform/v8gl/Preloader.js"));

			return true;

		}

		return false;

	}



	v8::Handle<v8::Value> V8GL::execute(v8::Handle<v8::Context> context, v8::Handle<v8::String> source, v8::Handle<v8::String> filename) {

		context->Enter();

		v8::HandleScope scope;
		v8::TryCatch try_catch;

		v8::Local<v8::Script> script = v8::Script::Compile(source, filename);
		v8::Handle<v8::Value> value;
		if (script.IsEmpty()) {

			V8GL::logException(&try_catch);
			value = v8::False();

		} else {

			v8::Handle<v8::Value> result = script->Run();
			if (result.IsEmpty()) {

				// assert(try_catch.HasCaught());
				V8GL::logException(&try_catch);
				value = v8::False();

			} else if (!result->IsUndefined()) {

				//assert(!try_catch.HasCaught());
				v8::String::Utf8Value str(result);
				const char* cstr = *str;
				printf("%s\n", cstr);

				value = v8::True();

			}

		}


		context->Exit();
		scope.Close(value);

		return value;

	}


	v8::Handle<v8::Value> V8GL::handleExportJSON(const v8::Arguments& args) {

		v8::HandleScope scope;

		v8::Local<v8::Script> script = v8::Script::Compile(v8::String::New("JSON.stringify(lychee.getEnvironment())"), v8::String::New("@runtime"));
		v8::Handle<v8::Value> result = script->Run();

		fprintf(stdout, "%s", (char*) *(v8::String::Utf8Value(result)));


		return scope.Close(v8::String::New(""));

	}
	 

	v8::Handle<v8::Value> V8GL::handleExportADK(const v8::Arguments& args) {

		const char *code = "\
			var env = lychee.getEnvironment();\
			\
			console.log(\"declare -A env_bases;\");\
			for (var base in env.bases) {\
				console.log(\"env_bases[\\\"\" + base + \"\\\"]=\\\"\" + env.bases[base] + \"\\\";\");\
			}\
			\
			console.log(\"declare -A env_tags;\");\
			for (var tag in env.tags) {\
				console.log(\"env_tags[\\\"\" + tag + \"\\\"]=\\\"\" + env.tags[tag] + \"\\\";\");\
			}\
		";

		v8::Local<v8::Script> script = v8::Script::Compile(v8::String::New(code), v8::String::New("@runtime"));

		script->Run();

		return v8::String::New("");

	}

	void V8GL::logException(v8::TryCatch* try_catch) {

		v8::HandleScope scope;

		v8::String::Utf8Value exception(try_catch->Exception());

		const char* exception_string = *exception;
		v8::Handle<v8::Message> message = try_catch->Message();

		fprintf(stderr, "\n");

		if (message.IsEmpty()) {

			fprintf(stderr, "%s\n", exception_string);

		} else {

			// Print (filename):(line number): (message).
			v8::String::Utf8Value filename(message->GetScriptResourceName());
			const char* filename_string = *filename;
			int linenum = message->GetLineNumber();
			fprintf(stderr, "%s:%i: %s\n", filename_string, linenum, exception_string);

			// Print line of source code.
			v8::String::Utf8Value sourceline(message->GetSourceLine());
			const char* sourceline_string = *sourceline;
			fprintf(stderr, "%s\n", sourceline_string);

			// Print wavy underline (GetUnderline is deprecated).
			int start = message->GetStartColumn();
			for (int i = 0; i < start; i++) {
				fprintf(stderr, "~");
			}

			int end = message->GetEndColumn();
			for (int i = start; i < end; i++) {
				fprintf(stderr, "^");
			}

			fprintf(stderr, "\n");


			v8::String::Utf8Value stack_trace(try_catch->StackTrace());
			if (stack_trace.length() > 0) {
				const char* stack_trace_string = *stack_trace;
				fprintf(stderr, "%s\n", stack_trace_string);
			}

		}

	}


	char* V8GL::read(char* filename) {

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