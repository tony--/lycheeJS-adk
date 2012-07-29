
(function(global) {

	global.setTimeout = function(callback, delay) {

		callback = callback instanceof Function ? callback : null;
		delay = typeof delay === 'number' ? delay : 0;

		if (callback !== null) {
			return new Timer(callback, delay, 'timeout');
		}

		return null;

	};

	global.clearTimeout = function(timer) {

		timer = timer instanceof Timer ? timer : null;

		if (timer !== null && timer.type === 'timeout') {
			return timer.clear();
		}

		return false;

	};

})(this);

