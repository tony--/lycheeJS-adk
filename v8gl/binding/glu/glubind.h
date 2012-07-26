
#ifndef GLUBIND_H_
#define GLUBIND_H_


#include <v8.h>

#ifdef __APPLE__
	#include <OpenGL/OpenGL.h>
	#include <GLUT/glu.h>
#else
	#include <GL/glu.h>
#endif

#include <stdio.h>


class GluFactory {

	public:
		static v8::Handle<v8::ObjectTemplate> createGlu(void);

};


#endif /* GLUBIND_H_ */

