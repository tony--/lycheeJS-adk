
(function(global) {

	var texture;

	var render = function() {

		gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
		gl.matrixMode(gl.MODELVIEW);
		gl.loadIdentity();

		gl.bindTexture(gl.TEXTURE_2D, texture.id);

		gl.pushAttrib(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);

			gl.enable(gl.TEXTURE_2D);

			gl.begin(gl.QUADS);
			gl.normal3f(0.0, 0.0, 1.0);
			gl.texCoord2d(1, 1); gl.vertex3f(0.0, 0.0, 0.0);
			gl.texCoord2d(1, 0); gl.vertex3f(0.0, 1.0, 0.0);
			gl.texCoord2d(0, 0); gl.vertex3f(1.0, 1.0, 0.0);
			gl.texCoord2d(0, 1); gl.vertex3f(1.0, 0.0, 0.0);
			gl.end();

			gl.disable(gl.TEXTURE_2D);

		gl.popAttrib();

		gl.flush();

		glut.swapBuffers();

	};

	var reshape = function(width, height) {

		gl.viewport(0, 0, width, height);
		gl.matrixMode(gl.PROJECTION);
		gl.loadIdentity();

		// fov, aspect, near, far
		glu.perspective(60.0, width / height, 0.0, 1.0)

		glu.lookAt(
			0,  0, -2, // eye
			0,  0,  2, // center
			0,  1,  0  // up
		);

	};


	glut.init();
	glut.initDisplayMode(glut.DOUBLE | glut.RGBA | glut.DEPTH);

	glut.initWindowSize(640, 480);
	glut.createWindow("Texture drawing example");


	gl.clearColor(0.0, 0.0, 0.0, 0.0);
	gl.shadeModel(gl.SMOOTH);



	texture = new Texture('/var/www/lycheeJS-adk/v8gl/test/asset/texture.png');

	texture.onload = function() {

		console.log('texture loaded: ' + this.id + ' (' + this.width +'x' + this.height + ')');

		glut.displayFunc(render);
		glut.reshapeFunc(reshape);

		glut.mainLoop();

	};

	texture.load();

})(this);

