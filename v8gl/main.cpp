/*
 * main.cpp
 */

#include "v8gl.h"

int main(int argc, char* argv[]) {

	if (argc < 2) {

		fprintf(stderr, "No JavaScript file was specified to run.\n");
		fprintf(stdout, "Usage: %s <path/to/file.js>\n\n", argv[0]);

		return 1;

	}


	char* filename = argv[1];
	fprintf(stdout, "initializing with: %s\n\n", filename);

	new V8GL(&argc, argv, filename);

	return 0;

}

