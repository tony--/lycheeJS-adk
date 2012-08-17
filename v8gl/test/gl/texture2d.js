
(function(global) {

	var texture;

	var render = function() {

		gl.clearColor(0, 0, 0, 0);
		gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);

		// END CLEAR

		var x1 = 100, x2 = 100 + texture.width,
			y1 = 50, y2 = 50 + texture.height;


		gl.matrixMode(gl.MODELVIEW);
		gl.loadIdentity();

		gl.color3f(0.5, 0.5, 1.0);

		gl.bindTexture(gl.TEXTURE_2D, texture.id);
		gl.enable(gl.TEXTURE_2D);
		gl.begin(gl.QUADS);


		gl.texCoord2d(0, 0);
		gl.vertex2f(x1, y1);

		gl.texCoord2d(1, 0);
		gl.vertex2f(x2, y1);

		gl.texCoord2d(1, 1);
		gl.vertex2f(x2, y2);

		gl.texCoord2d(0, 1);
		gl.vertex2f(x1, y2);


		gl.end();
		gl.disable(gl.TEXTURE_2D);



		gl.flush();
		glut.swapBuffers();

	};


	glut.initDisplayMode(glut.DOUBLE | glut.RGBA | glut.DEPTH);

	glut.initWindowSize(640, 480);
	glut.createWindow("Texture drawing example");
	gl.shadeModel(gl.SMOOTH);


	gl.matrixMode(gl.PROJECTION);
	gl.loadIdentity();
	gl.ortho(0, 640, 480, 0, 0, 1);

	gl.disable(gl.DEPTH_TEST);


	texture = new Texture('../asset/texture.png');

	texture.onload = function() {

		console.log('texture loaded: ' + this.id + ' (' + this.width +'x' + this.height + ')');

		glut.displayFunc(render);

	};

	texture.load();

})(this);

