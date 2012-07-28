
#ifndef API_CONSOLE_H_
#define API_CONSOLE_H_

#include <v8.h>
#include "../v8gl.h"

namespace api {

	class Console {

		public:
			static v8::Handle<v8::Value> log(const v8::Arguments& args);
			static v8::Handle<v8::Value> warn(const v8::Arguments& args);
			static v8::Handle<v8::Value> error(const v8::Arguments& args);
			static v8::Handle<v8::Value> group(const v8::Arguments& args);
			static v8::Handle<v8::Value> groupEnd(const v8::Arguments& args);

			static v8::Handle<v8::ObjectTemplate> generate(void);

	};

};

#endif

