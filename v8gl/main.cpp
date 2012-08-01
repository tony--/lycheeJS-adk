
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include "v8gl/v8gl.h"

int main(int argc, char* argv[]) {

	if (argc < 2) {

		fprintf(stderr, "No JavaScript file was specified to run.\n");
		fprintf(stdout, "Usage: %s <path/to/file.js>\n\n", (char*) argv[0]);

		return 1;

	}



	char buf[PATH_MAX + 1];
	char *filepath = realpath(argv[1], buf);

	char* rawsource = v8gl::V8GL::read(filepath);


	v8::HandleScope scope;
	v8::Persistent<v8::Context> context = v8gl::V8GL::initialize(&argc, argv);



	if (argc > 2 && strcmp(argv[2], "--export-json") == 0) {
		v8gl::V8GL::dispatch(context, (char*) "export-json");
	} else if (argc > 2 && strcmp(argv[2], "--export-adk") == 0) {
		v8gl::V8GL::dispatch(context, (char*) "export-adk");
	} else {
		v8gl::V8GL::dispatch(context, (char*) "lycheeJS");
	}



	v8::Local<v8::String> source = v8::String::New(rawsource);
	if (source.IsEmpty()) {
		v8::ThrowException(v8::String::New("Error reading initialization script file."));
	} else {
		v8gl::V8GL::execute(context, source, v8::String::New(filepath));
	}

	context.Dispose();

	return 0;

}

