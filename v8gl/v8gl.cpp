
#include "v8gl.h"

// Advanced @built-in JavaScript headers
#include "jsapi/interval.h"
#include "jsapi/timeout.h"
#include "jsapi/lychee_core_js.h"
#include "jsapi/lychee_Builder_js.h"
#include "jsapi/lychee_Preloader_js.h"



using namespace std;

v8::Persistent<v8::Context> V8GL::context_;

V8GL::V8GL(int* pargc, char** argv) {

	int argc = *pargc;

	v8::HandleScope scope;

	v8::Local<v8::ObjectTemplate> global = v8::ObjectTemplate::New();


	// GL/GLU/GLUT Bindings
	v8::Handle<v8::ObjectTemplate> Gl = GlFactory::createGl();
	global->Set(v8::String::New("gl"), Gl);
	global->Set(v8::String::New("glu"), GluFactory::createGlu());
	global->Set(v8::String::New("glut"), GlutFactory::createGlut(pargc, argv));


	// Console API
	global->Set(v8::String::New("console"), api::Console::generate());


	// V8GL API
//	global->Set(v8::String::New("Timer"), api::Timer::generate());


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


	// Context Stuff
	v8::Handle<v8::Context> context = v8::Context::New(NULL, global);

	V8GL::context_ = v8::Persistent<v8::Context>::New(context);
	GlutFactory::context_ = V8GL::context_;

	v8::Context::Scope context_scope(context);

	// This needs to stay here, due to Context::New() requiring an ObjectTemplate.
	GlFactory::self_ = v8::Persistent<v8::Object>::New(Gl->NewInstance());


	char buf[PATH_MAX + 1];
	char *filepath = realpath(argv[1], buf);

	v8::Handle<v8::String> source = V8GL::read(filepath);

	// EXPORT: v8gl /path/to/init.js --export-json
	if (argc > 2 && strcmp(argv[2], "--export-json") == 0) {

		execute(v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));
		v8::Handle<v8::Object> lychee = V8GL::context_->Global()->Get(v8::String::New("lychee"))->ToObject();
		lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::exportjson)->GetFunction());


	// EXPORT: v8gl /path/to/init.js --export-adk
	} else if (argc > 2 && strcmp(argv[2], "--export-adk") == 0) {

		execute(v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));
		v8::Handle<v8::Object> lychee = V8GL::context_->Global()->Get(v8::String::New("lychee"))->ToObject();
		lychee->Set(v8::String::New("build"), v8::FunctionTemplate::New(V8GL::exportadk)->GetFunction());


	// EXECUTE: v8gl /path/to/init.js
	} else {

		// @built-in Polyfills for BOM/DOM like behaviours
		execute(v8::String::New((char*) jsapi_interval_js), v8::String::New("@built-in/interval.js"));
		execute(v8::String::New((char*) jsapi_timeout_js), v8::String::New("@built-in/timeout.js"));

		// @built-in lycheeJS libraries for communication between Engine & ADK and/or V8GL
		execute(v8::String::New((char*) lychee_core_js), v8::String::New("@built-in/lychee/core.js"));
		execute(v8::String::New((char*) lychee_Builder_js), v8::String::New("@built-in/lychee/Builder.js"));
		execute(v8::String::New((char*) lychee_platform_v8gl_Preloader_js), v8::String::New("@built-in/lychee/platform/v8gl/Preloader.js"));

	}


	if (source.IsEmpty()) {

		v8::ThrowException(v8::String::New("Error reading initialization script file."));

	} else {
		V8GL::execute(source, v8::String::New(filepath));
	}

}



v8::Handle<v8::String> V8GL::read(char* filename) {

	FILE* file = fopen(filename, "rb");
	if (file == NULL) {
		return v8::String::Empty();
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


	v8::Handle<v8::String> result = v8::String::New(chars, size);

	delete[] chars;

	return result;

}

v8::Handle<v8::Value> V8GL::execute(v8::Handle<v8::String> source, v8::Handle<v8::String> filename) {

	v8::HandleScope scope;
	v8::TryCatch try_catch;

	v8::Handle<v8::Script> script = v8::Script::Compile(source, filename);
	if (script.IsEmpty()) {

		V8GL::reportException(&try_catch);
		return v8::False();

	} else {

		v8::Handle<v8::Value> result = script->Run();
		if (result.IsEmpty()) {

			// assert(try_catch.HasCaught());
			V8GL::reportException(&try_catch);
			return v8::False();

		} else if (!result->IsUndefined()) {

			//assert(!try_catch.HasCaught());
			v8::String::Utf8Value str(result);
			const char* cstr = *str;
			printf("%s\n", cstr);

			return v8::True();

		}

	}

	return v8::False();

}

v8::Handle<v8::Value> V8GL::exportjson(const v8::Arguments& args) {

	v8::Local<v8::Script> script = v8::Script::Compile(v8::String::New("JSON.stringify(lychee.getEnvironment())"), v8::String::New("@runtime"));
	v8::Handle<v8::Value> result = script->Run();

	fprintf(stdout, "%s", (char*) *(v8::String::Utf8Value(result)));


	return v8::String::New("");

}


v8::Handle<v8::Value> V8GL::exportadk(const v8::Arguments& args) {

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
	v8::Handle<v8::Value> result = script->Run();


	return v8::String::New("");

}
 



void V8GL::reportException(v8::TryCatch* try_catch) {

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

