
#ifndef API_TIMER_H_
#define API_TIMER_H_

#include <vector>
#include <time.h>

#include <v8.h>

namespace api {

	class Timer {

		private:

		public:

			int _id;
			time_t _start;
			int _delay;
			bool _repeat;
			v8::Local<v8::Object> _instance;

			Timer(int delay, bool repeat, v8::Local<v8::Object> instance);
			~Timer();


			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

	std::vector<api::Timer *> activeTimers_;

};

#endif

