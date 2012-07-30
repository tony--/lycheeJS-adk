
#include "v8gl/v8gl.h"

int main(int argc, char* argv[]) {

	if (argc < 2) {

		fprintf(stderr, "No JavaScript file was specified to run.\n");
		fprintf(stdout, "Usage: %s <path/to/file.js>\n\n", (char*) argv[0]);

		return 1;

	}

	new v8gl::V8GL(&argc, argv);

	return 0;

}

