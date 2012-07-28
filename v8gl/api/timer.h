
#ifndef API_TIMER_H_
#define API_TIMER_H_

#include <v8.h>
#include "../v8gl.h"

namespace api {

	class Timer {

		private:

		public:

			// Disallowing copy constructor
			Timer(const api::Timer &cpy);

			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

};

#endif

