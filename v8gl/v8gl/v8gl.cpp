
#include <limits.h>
#include <string.h>
#include <fstream>

#include "v8gl.h"

// These are excluded from V8ADK builds
#ifndef V8ADK
	#include "../binding/gl/glbind.h"
	#include "../binding/glu.h"
	#include "../binding/glut.h"
#endif

#include "../api/console.h"
#include "../api/script.h"
#include "../api/text.h"
#include "../api/texture.h"


// Advanced @built-in JavaScript headers
#include "../jsapi/interval.h"
#include "../jsapi/timeout.h"
#include "../jsapi/lychee_core_js.h"
#include "../jsapi/lychee_Builder_js.h"
#include "../jsapi/lychee_Preloader_js.h"


namespace v8gl {

	v8::Persistent<v8::Context> V8GL::initialize(int* pargc, char** argv) {

		v8::Local<v8::ObjectTemplate> global = v8::ObjectTemplate::New();

#ifndef V8ADK
		// GL/GLU/GLUT Bindings
		v8::Handle<v8::ObjectTemplate> Gl = GlFactory::createGl();
		global->Set(v8::String::New("gl"), Gl);
		global->Set(v8::String::New("glu"), binding::GLU::generate());
		global->Set(v8::String::New("glut"), binding::GLUT::generate(pargc, argv));
#endif

		// Console API
		global->Set(v8::String::New("console"), api::Console::generate());


		// Advanced Data Types
		global->Set(v8::String::New("Script"), api::Script::generate(), v8::ReadOnly);
		global->Set(v8::String::New("Text"), api::Text::generate(), v8::ReadOnly);
		global->Set(v8::String::New("Texture"), api::Texture::generate(), v8::ReadOnly);


		// Navigator API
		v8::Handle<v8::ObjectTemplate> navigator = v8::ObjectTemplate::New();
		navigator->Set(v8::String::New("appName"), v8::String::New("V8GL"));
		navigator->Set(v8::String::New("userAgent"), v8::String::New("V8GL"));
		navigator->Set(v8::String::New("platform"), v8::String::New("Linux i686"));
		navigator->Set(v8::String::New("vendor"), v8::String::New("lycheeJS"));
		navigator->Set(v8::String::New("product"), v8::String::New("v8gl"));
		global->Set(v8::String::New("navigator"), navigator);


		v8::Persistent<v8::Context> context = v8::Context::New(NULL, global);

		context->AllowCodeGenerationFromStrings(false);


#ifndef V8ADK
// FIXME: This crap needs to be all removed.

		v8::HandleScope scope;
		context->Enter();
		GlFactory::self_ = v8::Persistent<v8::Object>::New(Gl->NewInstance());
		context->Exit();

// END of removal
#endif

		return context;

	}


	bool V8GL::dispatch(v8::Handle<v8::Context> context, char* what) {

		// @built-in Polyfills for BOM/DOM like behaviours
		execute(context, v8::String::New((char*) jsapi_interval_js), v8::String::New("@built-in/interval.js"));
		execute(context, v8::String::New((char*) jsapi_timeout_js), v8::String::New("@built-in/timeout.js"));

		// @built-in lycheeJS libraries for communication between Engine & ADK and/or V8GL
		execute(context, v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));
		execute(context, v8::String::New((char*) lychee_Builder_js), v8::String::New("@built-in/lychee/Builder.js"));
		execute(context, v8::String::New((char*) lychee_platform_v8gl_Preloader_js), v8::String::New("@built-in/lychee/platform/v8gl/Preloader.js"));


#ifdef V8ADK

		if (strcmp(what, "export-bash") == 0) {

			context->Enter();

			v8::Handle<v8::Object> lychee = context->Global()->Get(v8::String::New("lychee"))->ToObject();
			lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::handleBuildExportBash)->GetFunction());

			context->Exit();

			return true;

		} else if (strcmp(what, "export-json") == 0) {

			context->Enter();

			v8::Handle<v8::Object> lychee = context->Global()->Get(v8::String::New("lychee"))->ToObject();
			lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::handleBuildExportJSON)->GetFunction());

			context->Exit();

			return true;

		} else if (strcmp(what, "rewrite") == 0) {

			context->Enter();

			v8::Handle<v8::Object> lychee = context->Global()->Get(v8::String::New("lychee"))->ToObject();
			lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::handleBuildRewrite)->GetFunction());

			context->Exit();

			return true;

		}

#endif


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

            } else if (result->IsUndefined()) {

				value = v8::True();

			} else {

				value = result;

			}

		}


		context->Exit();
		return scope.Close(value);

	}



#ifdef V8ADK

	v8::Handle<v8::Value> V8GL::handleBuildExportJSON(const v8::Arguments& args) {

		v8::HandleScope scope;
		v8::Local<v8::Object> self = args.Holder();
		v8::Persistent<v8::Context> context(self->CreationContext());


		v8::Handle<v8::Value> result = V8GL::execute(context, v8::String::New("JSON.stringify(lychee.getEnvironment())"), v8::String::New("@runtime"));

		fprintf(stdout, "%s", (char*) *(v8::String::Utf8Value(result)));


		return scope.Close(v8::String::New(""));

	}

	v8::Handle<v8::Value> V8GL::handleBuildRewrite(const v8::Arguments& args) {

		v8::HandleScope scope;
		v8::Persistent<v8::Context> context(args.Holder()->CreationContext());


		v8::Handle<v8::Object> env = V8GL::execute(context, v8::String::New("lychee.getEnvironment()"), v8::String::New("@runtime"))->ToObject();


		context->Enter();

		v8::Local<v8::Object> env_bases_old = env->Get(v8::String::New("bases"))->ToObject();
		v8::Local<v8::Object> env_tags = env->Get(v8::String::New("tags"))->ToObject();

		v8::Local<v8::Object> env_bases = v8::Object::New();


		v8::Local<v8::Array> env_bases_old_props = env_bases_old->GetPropertyNames();
		for (uint32_t i = 0; i < env_bases_old_props->Length(); i++) {

			v8::Local<v8::Value> key = env_bases_old_props->Get(i);
			v8::String::Utf8Value key_value(key);

			char value[] = "./";
			strcat(value, *key_value);

			env_bases->Set(v8::String::New(*key_value), v8::String::New(value));

		}



		v8::Handle<v8::Object> JSON = context->Global()->Get(v8::String::New("JSON"))->ToObject();
		v8::Handle<v8::Function> JSON_stringify = v8::Handle<v8::Function>::Cast(JSON->Get(v8::String::New("stringify")));


		v8::Handle<v8::Value> args_0[1];
		args_0[0] = env_bases;

		v8::String::Utf8Value str_env_bases(JSON_stringify->Call(JSON, 1, args_0));


		v8::Handle<v8::Value> args_1[1];
		args_1[0] = env_tags;

		v8::String::Utf8Value str_env_tags(JSON_stringify->Call(JSON, 1, args_1));

		v8::Handle<v8::Function> callback = v8::Handle<v8::Function>::Cast(args[0]);
		v8::String::Utf8Value str_callback(callback->ToString());

		// api::Console::debug(args.Holder()->CreationContext(), env_bases);


		context->Exit();


		char code[300] = "\n";

		strcat(code, "// This is automatically generated by the lycheeJS-ADK.\n");
		strcat(code, "lychee.debug = true;");

		strcat(code, "\nlychee.rebase(");
		strcat(code, *str_env_bases);
		strcat(code, ");");

		strcat(code, "\nlychee.tag(");
		strcat(code, *str_env_tags);
		strcat(code, ");\n");

		strcat(code, "\nlychee.build(");
		strcat(code, *str_callback);
		strcat(code, ");\n");

		fprintf(stdout, "%s\n", code);


		return scope.Close(v8::True());

	}

	v8::Handle<v8::Value> V8GL::handleBuildExportBash(const v8::Arguments& args) {

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


		v8::HandleScope scope;
		v8::Persistent<v8::Context> context(args.Holder()->CreationContext());

		v8::Handle<v8::Value> value = V8GL::execute(context, v8::String::New(code), v8::String::New("@runtime"));

		return scope.Close(v8::String::New(""));

	}

#endif

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
