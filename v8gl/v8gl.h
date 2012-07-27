/*
 * v8gl.h
 */

#ifndef V8GL_H_
#define V8GL_H_


#include <limits.h>
#include <string.h>
#include <fstream>
#include <v8.h>

#include "binding/gl/glbind.h"
#include "binding/glu/glubind.h"
#include "binding/glut/glutbind.h"

#include "api/api.h"


class V8GL {

	private:

	public:
		static v8::Persistent<v8::Context> context_;

		V8GL(int* pargc, char** argv);

		static v8::Handle<v8::String> read(char* filename);
		static v8::Handle<v8::Value> execute(v8::Handle<v8::String> source, v8::Handle<v8::String> filename);
		static v8::Handle<v8::Value> exportjson(const v8::Arguments& args);
		static v8::Handle<v8::Value> exportadk(const v8::Arguments& args);
		static void reportException(v8::TryCatch* try_catch);

};

#endif

