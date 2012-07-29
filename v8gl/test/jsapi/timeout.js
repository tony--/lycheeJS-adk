
(function(global) {

	console.group("Starting test...");

	console.log("typeof setTimeout: " + typeof setTimeout);
	console.log("setTimeout.toString(): " + setTimeout.toString());

	var callbackId = 0;
	var callback = function() {
		callbackId++;
		console.log('callback fired. (#' + callbackId + ')');
	};

	console.group("var handle = setTimeout(callback, delay)");

		var setAt = Date.now();
		var delay = (Math.random() * 1337) | 0;

		console.log('setTimeout(callback, ' + delay + ')');

		var timer = setTimeout(function() {

			if (Date.now() - setAt === delay) {
				console.log('success.');
			} else {
				console.log('fail. (difference: ' + ((Date.now() - setAt - delay) | 0) + ')');
			}


			// END all the test stuff.
			console.groupEnd();
			console.groupEnd();

		}, delay);




})(this);

