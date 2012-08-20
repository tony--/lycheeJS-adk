
#include <limits.h>
#include <string.h>
#include <stdlib.h>
#include "v8gl/v8gl.h"
#include "v8gl/path.h"


#ifdef V8ADK

int main(int argc, char* argv[]) {

	char usage[] = "\n\
lycheeJS V8ADK runtime\n\
\n\
Recommended development environment: Ubuntu 12.04 64Bit\n\
\n\
The V8ADK runtime allows parsing the game, its environment and its\n\
behaviours and exports the parsed data to the lycheeJS ADK.\n\
\n\
\n\
Usage: %s <task> <path/to/init.js>\n\
\n\
\n\
Tasks:\n\
	export-bash      Exports the environment to a via-bash includable format.\n\
	export-json      Exports the environment to a JSON format.\n\
	rewrite          Rewrites and prepares your init.js to fit into the V8GL runtime.\n\
\n\
\n\
Examples:\n\
\n\
v8adk export-bash ./external/lycheeJS/game/boilerplate/init.js > game_env.sh\n\
v8adk export-json ./external/lycheeJS/game/boilerplate/init.js > game_env.json\n\
v8adk rewrite ./external/lycheeJS/game/boilerplate/init.js > v8gl_init.js\n\
\n\
";

	if (argc == 3) {

		char buf[PATH_MAX + 1];
		char *filepath = realpath(argv[2], buf);

		if (filepath) {

			char* rawsource = v8gl::V8GL::read(filepath);


			v8::HandleScope scope;
			v8::Persistent<v8::Context> context = v8gl::V8GL::initialize(&argc, argv);


			if (strcmp(argv[1], "export-bash") == 0) {
				v8gl::V8GL::dispatch(context, (char*) "export-bash");
			} else if (strcmp(argv[1], "export-json") == 0) {
				v8gl::V8GL::dispatch(context, (char*) "export-json");
			} else if (strcmp(argv[1], "rewrite") == 0) {
				v8gl::V8GL::dispatch(context, (char*) "rewrite");
			} else {

				fprintf(stderr, usage, argv[0]);
				return 1;

			}


			v8::Local<v8::String> source = v8::String::New(rawsource);
			if (source.IsEmpty()) {
				v8::ThrowException(v8::String::New("Error reading initialization script file."));
			} else {

				v8gl::Path::setRoot(argv[0], argv[2]);

				char *old_path = v8gl::Path::pushRoot(filepath);
				v8gl::V8GL::execute(context, source, v8::String::New(filepath));
				v8gl::Path::popRoot(old_path);

				delete old_path;

			}


			delete rawsource;

			context.Dispose();

			return 0;

		} else {

			fprintf(stderr, usage, argv[0]);
			return 1;

		}

	} else {

		fprintf(stderr, usage, argv[0]);
		return 1;

	}

}

#else

int main(int argc, char* argv[]) {

	char buf0[PATH_MAX + 1];
	char buf1[PATH_MAX + 1];
	char *root_prog = realpath(argv[0], buf0);
	char *root_file;

	if (argc == 1) {

		argc = 3;
		argv[1] = (char*) "./game/Main.js";
		argv[2] = (char*) "./init.js";

		root_file = realpath(argv[2], buf1);

	} else {

		root_file = realpath(argv[0], buf1);

	}


	v8::HandleScope scope;
	v8::Persistent<v8::Context> context = v8gl::V8GL::initialize(&argc, argv);


	v8gl::Path::setRoot((char*) root_prog, (char*) root_file);

	v8gl::V8GL::dispatch(context, (char*) "lycheeJS");

	v8gl::V8GL::execute(context, v8::String::New("glut.init()"), v8::String::New("@built-in/main.js"));
	v8gl::V8GL::execute(context, v8::String::New("glut.createWindow(\"V8GL runtime\");"), v8::String::New("@built-in/main.js"));

	for (int i = 1; i < argc; i++) {

		char buf[PATH_MAX + 1];
		char *path = realpath(argv[i], buf);

		if (path) {

			char* _source = v8gl::V8GL::read(path);
			v8::Local<v8::String> source = v8::String::New(_source);


			if (source.IsEmpty()) {

				fprintf(stderr, "Error reading file %s", path);

			} else {

				char *old_path = v8gl::Path::pushRoot(path);
				v8gl::V8GL::execute(context, source, v8::String::New(path));
				v8gl::Path::popRoot(old_path);

			}

		} else {

			fprintf(stderr, "Error reading file %s", path);

		}

	}

	v8gl::V8GL::execute(context, v8::String::New("glut.mainLoop()"), v8::String::New("@built-in/main.js"));

	context.Dispose();

	return 0;

}
 
#endif

