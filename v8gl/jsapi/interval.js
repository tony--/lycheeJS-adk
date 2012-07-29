
(function(global) {

	global.setInterval = function(callback, delay) {

		callback = callback instanceof Function ? callback : null;
		delay = typeof delay === 'number' ? delay : 0;

		if (callback !== null) {
			return new Timer(callback, delay, 'interval');
		}

		return null;

	};


	global.clearInterval = function(timer) {

		timer = timer instanceof Timer ? timer : null;

		if (timer !== null && timer.type === 'interval') {
			return timer.clear();
		}

		return false;

	};

})(this);

