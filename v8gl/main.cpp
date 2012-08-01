
#include <limits.h>
#include <stdlib.h>
#include "v8gl/v8gl.h"

int main(int argc, char* argv[]) {

	if (argc < 2) {

		fprintf(stderr, "No JavaScript file was specified to run.\n");
		fprintf(stdout, "Usage: %s <path/to/file.js>\n\n", (char*) argv[0]);

		return 1;

	}

	v8gl::V8GL::initialize(&argc, argv);


	char buf[PATH_MAX + 1];
	char *filepath = realpath(argv[1], buf);

	char* rawsource = v8gl::V8GL::read(filepath);


	v8::HandleScope scope;
	v8::Local<v8::String> source = v8::String::New(rawsource);
	if (source.IsEmpty()) {
		v8::ThrowException(v8::String::New("Error reading initialization script file."));
	} else {
		v8gl::V8GL::execute(source, v8::String::New(filepath));
	}


	return 0;

}

