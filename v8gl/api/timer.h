
#ifndef API_TIMER_H_
#define API_TIMER_H_

#include <vector>
#include <ev.h>
#include <time.h>

#include <v8.h>

namespace api {

	class V8GLTimer {

		public:
			int _id;
			time_t _start;
			int _delay;
			bool _repeat;
			v8::Local<v8::Object> _instance;

			V8GLTimer(int delay, bool repeat, v8::Local<v8::Object> instance);
			~V8GLTimer();

			static void Loop(EV_P_ struct ev_timer *w, int revents);

	};


	class Timer {

		private:

		public:

			Timer(const api::Timer &cpy);

			static v8::Handle<v8::Value> handleNew(const v8::Arguments& args);

			static v8::Handle<v8::Value> handleToString(const v8::Arguments& args);

			static v8::Handle<v8::FunctionTemplate> generate(void);

	};

};

#endif

