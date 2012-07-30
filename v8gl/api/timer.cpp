
#include "timer.h"


namespace api {

	std::vector<api::V8GLTimer> activeV8GLTimers_;

	V8GLTimer::V8GLTimer(int delay, bool repeat, v8::Local<v8::Object> instance) {

		_id = activeV8GLTimers_.size();

		_start = time(NULL);
		_delay = delay;
		_repeat = repeat;

		activeV8GLTimers_.push_back(*this);

	}

	V8GLTimer::~V8GLTimer() {
		activeV8GLTimers_.erase(activeV8GLTimers_.begin() + _id);
	}






	v8::Handle<v8::FunctionTemplate> Timer::generate() {

		v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(handleNew);
		tpl->SetClassName(v8::String::New("Timer"));

		return tpl;

	}

	// new Timer(callback, int delay, bool repeat);
	v8::Handle<v8::Value> Timer::handleNew(const v8::Arguments& args) {

		v8::HandleScope scope;

		v8::Local<v8::Function> callback = v8::Function::Cast(*args[0]);
		int delay = args[1]->IntegerValue();
		bool repeat = args[2]->BooleanValue();

		if (callback.IsEmpty()) {
			callback = v8::FunctionTemplate::New()->GetFunction();
		}

		

		v8::Local<v8::ObjectTemplate> instanceTemplate = v8::ObjectTemplate::New();
		instanceTemplate->SetInternalFieldCount(0);

		// instanceTemplate->Set(v8::String::New("load"), v8::FunctionTemplate::New(handleLoad));

		instanceTemplate->Set(v8::String::New("toString"), v8::FunctionTemplate::New(handleToString));

		v8::Local<v8::Object> instance = instanceTemplate->NewInstance();

		api::V8GLTimer* timer = new api::V8GLTimer(delay, repeat, instance);

		instance->Set(v8::String::New("id"), v8::Number::New(timer->_id));
		instance->Set(v8::String::New("oncall"), callback);


		// return the timer;
		return scope.Close(instance);

	}

	v8::Handle<v8::Value> Timer::handleToString(const v8::Arguments& args) {
		return v8::String::New("[object Timer]");
	}

}

