
#include "timer.h"


namespace api {

	Timer::Timer(int delay, bool repeat, v8::Local<v8::Object> instance) {

		_id = activeTimers_.size();

		_start = time(NULL);
		_delay = (int) delay;
		_repeat = (bool) repeat;
		_instance = instance;

		activeTimers_.push_back(this);

	}

	Timer::~Timer() {

		api::Timer *_self = activeTimers_.at(_id);

		_self._instance.Dispose();

		activeTimers_.erase(activeTimers_.begin() + _id);

	}



	v8::Handle<v8::FunctionTemplate> Timer::generate() {

		v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(handleNew);
		tpl->SetClassName(v8::String::New("Timer"));

		return tpl;

	}

	// new Timer(callback, delay, 'timeout' || 'interval');
	v8::Handle<v8::Value> Timer::handleNew(const v8::Arguments& args) {

		v8::HandleScope scope;

		v8::Local<v8::ObjectTemplate> instanceTemplate = v8::ObjectTemplate::New();
		instanceTemplate->SetInternalFieldCount(0);

		// instanceTemplate->Set(v8::String::New("load"), v8::FunctionTemplate::New(handleLoad));

		instanceTemplate->Set(v8::String::New("toString"), v8::FunctionTemplate::New(handleToString));

		v8::Local<v8::Object> instance = instanceTemplate->NewInstance();

		api::Timer timer = new api::Timer(delay, repeat, instance);

		instance->Set(v8::String::New("id"), v8::Number::New(timer.id));


		// return the timer;
		return scope.Close(instance);

	}

	v8::Handle<v8::Value> Timer::handleToString(const v8::Arguments& args) {
		return v8::String::New("[object Timer]");
	}

}

