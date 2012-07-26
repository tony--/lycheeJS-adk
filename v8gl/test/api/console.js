
(function(global) {

	console.log('This is a Log!');

	console.group('top level group');

		console.log(global.navigator.appName);
		console.warn('This is a warning!');

		console.group('second level group');
			console.log('log in 2nd lvl group');
			console.warn('warn in 2nd lvl group');
			console.error('error in 2nd lvl group');
		console.groupEnd();

	console.groupEnd();

	console.log('This is the last Log!');

})(this);

