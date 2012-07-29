
#include "console.h"


namespace api {

	int consoleMargin = 0;

	v8::Handle<v8::ObjectTemplate> Console::generate() {

		v8::Handle<v8::ObjectTemplate> tpl = v8::ObjectTemplate::New();

		tpl->Set(v8::String::New("log"),      v8::FunctionTemplate::New(Console::log));
		tpl->Set(v8::String::New("warn"),     v8::FunctionTemplate::New(Console::warn));
		tpl->Set(v8::String::New("error"),    v8::FunctionTemplate::New(Console::error));
		tpl->Set(v8::String::New("group"),    v8::FunctionTemplate::New(Console::group));
		tpl->Set(v8::String::New("groupEnd"), v8::FunctionTemplate::New(Console::groupEnd));

		return tpl;

	}


	v8::Handle<v8::Value> Console::log(const v8::Arguments& args) {

		if (args.Length() < 1) {
			return v8::Undefined();
		}


		for (signed a = 0; a < args.Length(); a++) {

			for (int m = 0; m < consoleMargin; m++) {
				fprintf(stdout, "\t");
			}

			v8::String::Utf8Value value(args[a]);
			char* message = *value;

			fprintf(stdout, "%s\n", message);

		}


		return v8::Undefined();
	 
	}



	v8::Handle<v8::Value> Console::warn(const v8::Arguments& args) {

		fprintf(stdout, "(w)");
		log(args);
		return v8::Undefined();

	}

	v8::Handle<v8::Value> Console::error(const v8::Arguments& args) {

		fprintf(stdout, "(e)");
		log(args);
		return v8::Undefined();

	}

	v8::Handle<v8::Value> Console::group(const v8::Arguments& args) {

		fprintf(stdout, "\n");

		v8::String::Utf8Value value(args[0]);
		char* label = *value;


		for (int m = 0; m < consoleMargin; m++) {
			fprintf(stdout, "\t");
		}


		fprintf(stdout, "~ %s ~\n", label);

		consoleMargin++;


		return v8::Undefined();

	}

	v8::Handle<v8::Value> Console::groupEnd(const v8::Arguments& args) {

		consoleMargin--;

		for (int m = 0; m < consoleMargin; m++) {
			fprintf(stdout, "\t");
		}

		fprintf(stdout, "~ (end) ~\n\n");


		return v8::Undefined();

	}

}

