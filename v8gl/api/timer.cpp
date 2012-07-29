
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
	v8::Handle<v8::Value> Timer::handleNew(const v8::Arguments& args) {

		v8::HandleScope scope;

		v8::Local<v8::ObjectTemplate> instanceTemplate = v8::ObjectTemplate::New();
		instanceTemplate->SetInternalFieldCount(0);

		// instanceTemplate->Set(v8::String::New("load"), v8::FunctionTemplate::New(handleLoad));

		instanceTemplate->Set(v8::String::New("toString"), v8::FunctionTemplate::New(handleToString));

		v8::Local<v8::Object> instance = instanceTemplate->NewInstance();


		// return the timer;
		return scope.Close(instance);

	}

	v8::Handle<v8::Value> Timer::handleToString(const v8::Arguments& args) {
		return v8::String::New("[object Timer]");
	}

}

