
#include <fstream>

#include "timer.h"
#include "../v8gl.h"


namespace api {


	Timer::Timer(const Timer &cpy) {
	}



	v8::Handle<v8::FunctionTemplate> Timer::generate() {

		v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(handleNew);
		tpl->SetClassName(v8::String::New("Timer"));

		return tpl;

	}

	// new Timer(callback, delay, repeated);
	v8::Handle<v8::Value> Text::handleNew(const v8::Arguments& args) {

		v8::HandleScope scope;

		// return the timer;
		return scope.Close(instance);

	}

	v8::Handle<v8::Value> Timer::handleToString(const v8::Arguments& args) {
		return v8::String::New("[object Timer]");
	}

}

