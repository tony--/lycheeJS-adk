
#include "glubind.h"

#ifdef __APPLE__
	#include <OpenGL/OpenGL.h>
	#include <GLUT/glu.h>
#else
	#include <GL/glu.h>
#endif

#include <stdio.h>


v8::Handle<v8::Value> GetGLU_EXT_object_space_tess(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_EXT_object_space_tess);
}

v8::Handle<v8::Value> GetGLU_EXT_nurbs_tessellator(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_EXT_nurbs_tessellator);
}

v8::Handle<v8::Value> GetGLU_FALSE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_FALSE);
}

v8::Handle<v8::Value> GetGLU_TRUE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TRUE);
}

v8::Handle<v8::Value> GetGLU_VERSION_1_1(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_VERSION_1_1);
}

v8::Handle<v8::Value> GetGLU_VERSION_1_2(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_VERSION_1_2);
}

v8::Handle<v8::Value> GetGLU_VERSION_1_3(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_VERSION_1_3);
}

v8::Handle<v8::Value> GetGLU_VERSION(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_VERSION);
}

v8::Handle<v8::Value> GetGLU_EXTENSIONS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_EXTENSIONS);
}

v8::Handle<v8::Value> GetGLU_INVALID_ENUM(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_INVALID_ENUM);
}

v8::Handle<v8::Value> GetGLU_INVALID_VALUE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_INVALID_VALUE);
}

v8::Handle<v8::Value> GetGLU_OUT_OF_MEMORY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OUT_OF_MEMORY);
}

v8::Handle<v8::Value> GetGLU_INCOMPATIBLE_GL_VERSION(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_INCOMPATIBLE_GL_VERSION);
}

v8::Handle<v8::Value> GetGLU_INVALID_OPERATION(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_INVALID_OPERATION);
}

v8::Handle<v8::Value> GetGLU_OUTLINE_POLYGON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OUTLINE_POLYGON);
}

v8::Handle<v8::Value> GetGLU_OUTLINE_PATCH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OUTLINE_PATCH);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR);
}

v8::Handle<v8::Value> GetGLU_ERROR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_ERROR);
}

v8::Handle<v8::Value> GetGLU_NURBS_BEGIN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_BEGIN);
}

v8::Handle<v8::Value> GetGLU_NURBS_BEGIN_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_BEGIN_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_VERTEX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_VERTEX);
}

v8::Handle<v8::Value> GetGLU_NURBS_VERTEX_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_VERTEX_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_NORMAL(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_NORMAL);
}

v8::Handle<v8::Value> GetGLU_NURBS_NORMAL_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_NORMAL_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_COLOR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_COLOR);
}

v8::Handle<v8::Value> GetGLU_NURBS_COLOR_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_COLOR_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_TEXTURE_COORD(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_TEXTURE_COORD);
}

v8::Handle<v8::Value> GetGLU_NURBS_TEX_COORD_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_TEX_COORD_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_END(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_END);
}

v8::Handle<v8::Value> GetGLU_NURBS_END_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_END_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_BEGIN_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_BEGIN_DATA);
}

v8::Handle<v8::Value> GetGLU_NURBS_BEGIN_DATA_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_BEGIN_DATA_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_VERTEX_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_VERTEX_DATA);
}

v8::Handle<v8::Value> GetGLU_NURBS_VERTEX_DATA_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_VERTEX_DATA_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_NORMAL_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_NORMAL_DATA);
}

v8::Handle<v8::Value> GetGLU_NURBS_NORMAL_DATA_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_NORMAL_DATA_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_COLOR_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_COLOR_DATA);
}

v8::Handle<v8::Value> GetGLU_NURBS_COLOR_DATA_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_COLOR_DATA_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_TEXTURE_COORD_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_TEXTURE_COORD_DATA);
}

v8::Handle<v8::Value> GetGLU_NURBS_TEX_COORD_DATA_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_TEX_COORD_DATA_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_END_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_END_DATA);
}

v8::Handle<v8::Value> GetGLU_NURBS_END_DATA_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_END_DATA_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR1(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR1);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR2(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR2);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR3(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR3);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR4(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR4);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR5(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR5);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR6(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR6);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR7(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR7);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR8(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR8);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR9(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR9);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR10(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR10);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR11(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR11);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR12(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR12);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR13(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR13);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR14(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR14);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR15(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR15);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR16(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR16);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR17(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR17);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR18(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR18);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR19(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR19);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR20(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR20);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR21(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR21);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR22(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR22);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR23(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR23);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR24(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR24);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR25(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR25);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR26(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR26);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR27(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR27);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR28(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR28);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR29(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR29);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR30(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR30);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR31(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR31);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR32(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR32);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR33(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR33);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR34(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR34);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR35(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR35);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR36(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR36);
}

v8::Handle<v8::Value> GetGLU_NURBS_ERROR37(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_ERROR37);
}

v8::Handle<v8::Value> GetGLU_AUTO_LOAD_MATRIX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_AUTO_LOAD_MATRIX);
}

v8::Handle<v8::Value> GetGLU_CULLING(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_CULLING);
}

v8::Handle<v8::Value> GetGLU_SAMPLING_TOLERANCE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_SAMPLING_TOLERANCE);
}

v8::Handle<v8::Value> GetGLU_DISPLAY_MODE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_DISPLAY_MODE);
}

v8::Handle<v8::Value> GetGLU_PARAMETRIC_TOLERANCE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_PARAMETRIC_TOLERANCE);
}

v8::Handle<v8::Value> GetGLU_SAMPLING_METHOD(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_SAMPLING_METHOD);
}

v8::Handle<v8::Value> GetGLU_U_STEP(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_U_STEP);
}

v8::Handle<v8::Value> GetGLU_V_STEP(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_V_STEP);
}

v8::Handle<v8::Value> GetGLU_NURBS_MODE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_MODE);
}

v8::Handle<v8::Value> GetGLU_NURBS_MODE_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_MODE_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_TESSELLATOR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_TESSELLATOR);
}

v8::Handle<v8::Value> GetGLU_NURBS_TESSELLATOR_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_TESSELLATOR_EXT);
}

v8::Handle<v8::Value> GetGLU_NURBS_RENDERER(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_RENDERER);
}

v8::Handle<v8::Value> GetGLU_NURBS_RENDERER_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NURBS_RENDERER_EXT);
}

v8::Handle<v8::Value> GetGLU_OBJECT_PARAMETRIC_ERROR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OBJECT_PARAMETRIC_ERROR);
}

v8::Handle<v8::Value> GetGLU_OBJECT_PARAMETRIC_ERROR_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OBJECT_PARAMETRIC_ERROR_EXT);
}

v8::Handle<v8::Value> GetGLU_OBJECT_PATH_LENGTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OBJECT_PATH_LENGTH);
}

v8::Handle<v8::Value> GetGLU_OBJECT_PATH_LENGTH_EXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OBJECT_PATH_LENGTH_EXT);
}

v8::Handle<v8::Value> GetGLU_PATH_LENGTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_PATH_LENGTH);
}

v8::Handle<v8::Value> GetGLU_PARAMETRIC_ERROR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_PARAMETRIC_ERROR);
}

v8::Handle<v8::Value> GetGLU_DOMAIN_DISTANCE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_DOMAIN_DISTANCE);
}

v8::Handle<v8::Value> GetGLU_MAP1_TRIM_2(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_MAP1_TRIM_2);
}

v8::Handle<v8::Value> GetGLU_MAP1_TRIM_3(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_MAP1_TRIM_3);
}

v8::Handle<v8::Value> GetGLU_POINT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_POINT);
}

v8::Handle<v8::Value> GetGLU_LINE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_LINE);
}

v8::Handle<v8::Value> GetGLU_FILL(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_FILL);
}

v8::Handle<v8::Value> GetGLU_SILHOUETTE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_SILHOUETTE);
}

v8::Handle<v8::Value> GetGLU_SMOOTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_SMOOTH);
}

v8::Handle<v8::Value> GetGLU_FLAT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_FLAT);
}

v8::Handle<v8::Value> GetGLU_NONE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_NONE);
}

v8::Handle<v8::Value> GetGLU_OUTSIDE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_OUTSIDE);
}

v8::Handle<v8::Value> GetGLU_INSIDE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_INSIDE);
}

v8::Handle<v8::Value> GetGLU_TESS_BEGIN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_BEGIN);
}

v8::Handle<v8::Value> GetGLU_BEGIN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_BEGIN);
}

v8::Handle<v8::Value> GetGLU_TESS_VERTEX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_VERTEX);
}

v8::Handle<v8::Value> GetGLU_VERTEX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_VERTEX);
}

v8::Handle<v8::Value> GetGLU_TESS_END(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_END);
}

v8::Handle<v8::Value> GetGLU_END(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_END);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR);
}

v8::Handle<v8::Value> GetGLU_TESS_EDGE_FLAG(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_EDGE_FLAG);
}

v8::Handle<v8::Value> GetGLU_EDGE_FLAG(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_EDGE_FLAG);
}

v8::Handle<v8::Value> GetGLU_TESS_COMBINE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_COMBINE);
}

v8::Handle<v8::Value> GetGLU_TESS_BEGIN_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_BEGIN_DATA);
}

v8::Handle<v8::Value> GetGLU_TESS_VERTEX_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_VERTEX_DATA);
}

v8::Handle<v8::Value> GetGLU_TESS_END_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_END_DATA);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR_DATA);
}

v8::Handle<v8::Value> GetGLU_TESS_EDGE_FLAG_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_EDGE_FLAG_DATA);
}

v8::Handle<v8::Value> GetGLU_TESS_COMBINE_DATA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_COMBINE_DATA);
}

v8::Handle<v8::Value> GetGLU_CW(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_CW);
}

v8::Handle<v8::Value> GetGLU_CCW(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_CCW);
}

v8::Handle<v8::Value> GetGLU_INTERIOR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_INTERIOR);
}

v8::Handle<v8::Value> GetGLU_EXTERIOR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_EXTERIOR);
}

v8::Handle<v8::Value> GetGLU_UNKNOWN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_UNKNOWN);
}

v8::Handle<v8::Value> GetGLU_TESS_WINDING_RULE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_WINDING_RULE);
}

v8::Handle<v8::Value> GetGLU_TESS_BOUNDARY_ONLY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_BOUNDARY_ONLY);
}

v8::Handle<v8::Value> GetGLU_TESS_TOLERANCE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_TOLERANCE);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR1(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR1);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR2(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR2);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR3(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR3);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR4(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR4);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR5(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR5);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR6(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR6);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR7(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR7);
}

v8::Handle<v8::Value> GetGLU_TESS_ERROR8(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_ERROR8);
}

v8::Handle<v8::Value> GetGLU_TESS_MISSING_BEGIN_POLYGON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_MISSING_BEGIN_POLYGON);
}

v8::Handle<v8::Value> GetGLU_TESS_MISSING_BEGIN_CONTOUR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_MISSING_BEGIN_CONTOUR);
}

v8::Handle<v8::Value> GetGLU_TESS_MISSING_END_POLYGON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_MISSING_END_POLYGON);
}

v8::Handle<v8::Value> GetGLU_TESS_MISSING_END_CONTOUR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_MISSING_END_CONTOUR);
}

v8::Handle<v8::Value> GetGLU_TESS_COORD_TOO_LARGE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_COORD_TOO_LARGE);
}

v8::Handle<v8::Value> GetGLU_TESS_NEED_COMBINE_CALLBACK(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_NEED_COMBINE_CALLBACK);
}

v8::Handle<v8::Value> GetGLU_TESS_WINDING_ODD(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_WINDING_ODD);
}

v8::Handle<v8::Value> GetGLU_TESS_WINDING_NONZERO(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_WINDING_NONZERO);
}

v8::Handle<v8::Value> GetGLU_TESS_WINDING_POSITIVE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_WINDING_POSITIVE);
}

v8::Handle<v8::Value> GetGLU_TESS_WINDING_NEGATIVE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_WINDING_NEGATIVE);
}

v8::Handle<v8::Value> GetGLU_TESS_WINDING_ABS_GEQ_TWO(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_WINDING_ABS_GEQ_TWO);
}

v8::Handle<v8::Value> GetGLU_TESS_MAX_COORD(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLU_TESS_MAX_COORD);
}



v8::Handle<v8::Value> GLUCheckExtensionCallback(const v8::Arguments& args) {

	if (args.Length() < 2) {
		return v8::Undefined();
	}

	v8::Handle<v8::Array> arrHandle0 = v8::Handle<v8::Array>::Cast(args[0]);
	GLubyte*   arg0 = new   GLubyte  [arrHandle0->Length()];

	for (unsigned j = 0; j < arrHandle0->Length(); j++) {

		v8::Handle<v8::Value> arg(arrHandle0->Get(v8::Integer::New(j)));
		GLubyte   aux = (  GLubyte  )arg->Uint32Value();
		arg0[j] = aux; 

	}
    
    
	v8::Handle<v8::Array> arrHandle1 = v8::Handle<v8::Array>::Cast(args[1]);
	GLubyte*   arg1 = new   GLubyte  [arrHandle1->Length()];

	for (unsigned j = 0; j < arrHandle1->Length(); j++) {

		v8::Handle<v8::Value> arg(arrHandle1->Get(v8::Integer::New(j)));
		GLubyte   aux = (  GLubyte  )arg->Uint32Value();
		arg1[j] = aux; 

	}
    
    
	gluCheckExtension(( const GLubyte* ) arg0, ( const GLubyte* ) arg1);

	return v8::Undefined();

}



v8::Handle<v8::Value> GLULookAtCallback(const v8::Arguments& args) {

	if (args.Length() < 9) {
		return v8::Undefined();
	}

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();
	double arg4 = args[4]->NumberValue();
	double arg5 = args[5]->NumberValue();
	double arg6 = args[6]->NumberValue();
	double arg7 = args[7]->NumberValue();
	double arg8 = args[8]->NumberValue();


	gluLookAt(( GLdouble ) arg0, ( GLdouble ) arg1, ( GLdouble ) arg2, ( GLdouble ) arg3, ( GLdouble ) arg4, ( GLdouble ) arg5, ( GLdouble ) arg6, ( GLdouble ) arg7, ( GLdouble ) arg8);

	return v8::Undefined();

}



v8::Handle<v8::Value> GLUNewNurbsRendererCallback(const v8::Arguments& args) {
	gluNewNurbsRenderer();
	return v8::Undefined();
}



v8::Handle<v8::Value> GLUNewQuadricCallback(const v8::Arguments& args) {
	gluNewQuadric();
	return v8::Undefined();
}



v8::Handle<v8::Value> GLUNewTessCallback(const v8::Arguments& args) {
	gluNewTess();
	return v8::Undefined();
}



v8::Handle<v8::Value> GLUOrtho2DCallback(const v8::Arguments& args) {

	if (args.Length() < 4) {
		return v8::Undefined();
	}

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();


	gluOrtho2D(( GLdouble ) arg0, ( GLdouble ) arg1, ( GLdouble ) arg2, ( GLdouble ) arg3);

	return v8::Undefined();

}



v8::Handle<v8::Value> GLUPerspectiveCallback(const v8::Arguments& args) {

	if (args.Length() < 4) {
		return v8::Undefined();
	}


	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();


	gluPerspective(( GLdouble ) arg0, ( GLdouble ) arg1, ( GLdouble ) arg2, ( GLdouble ) arg3);

	return v8::Undefined();

}



v8::Handle<v8::Value> GLUPickMatrixCallback(const v8::Arguments& args) {

	if (args.Length() < 5) {
		return v8::Undefined();
	}

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();


	v8::Handle<v8::Array> arrHandle4 = v8::Handle<v8::Array>::Cast(args[4]);
	GLint*   arg4 = new  GLint  [arrHandle4->Length()];

	for (unsigned j = 0; j < arrHandle4->Length(); j++) {

		v8::Handle<v8::Value> arg(arrHandle4->Get(v8::Integer::New(j)));
		GLint   aux = ( GLint  )arg->IntegerValue();
		arg4[j] = aux; 

	}


	gluPickMatrix(( GLdouble ) arg0, ( GLdouble ) arg1, ( GLdouble ) arg2, ( GLdouble ) arg3, ( GLint* ) arg4);

	return v8::Undefined();

}



v8::Handle<v8::ObjectTemplate> GluFactory::createGlu(void) {

	v8::HandleScope scope;
	v8::Handle<v8::ObjectTemplate> Glu = v8::ObjectTemplate::New();

	Glu->SetInternalFieldCount(1);
	Glu->SetAccessor(v8::String::NewSymbol("EXT_object_space_tess"), GetGLU_EXT_object_space_tess);
	Glu->SetAccessor(v8::String::NewSymbol("EXT_nurbs_tessellator"), GetGLU_EXT_nurbs_tessellator);

	Glu->SetAccessor(v8::String::NewSymbol("FALSE"), GetGLU_FALSE);
	Glu->SetAccessor(v8::String::NewSymbol("TRUE"), GetGLU_TRUE);
	Glu->SetAccessor(v8::String::NewSymbol("VERSION_1_1"), GetGLU_VERSION_1_1);
	Glu->SetAccessor(v8::String::NewSymbol("VERSION_1_2"), GetGLU_VERSION_1_2);
	Glu->SetAccessor(v8::String::NewSymbol("VERSION_1_3"), GetGLU_VERSION_1_3);
	Glu->SetAccessor(v8::String::NewSymbol("VERSION"), GetGLU_VERSION);
	Glu->SetAccessor(v8::String::NewSymbol("EXTENSIONS"), GetGLU_EXTENSIONS);

	Glu->SetAccessor(v8::String::NewSymbol("INVALID_ENUM"), GetGLU_INVALID_ENUM);
	Glu->SetAccessor(v8::String::NewSymbol("INVALID_OPERATION"), GetGLU_INVALID_OPERATION);
	Glu->SetAccessor(v8::String::NewSymbol("INVALID_VALUE"), GetGLU_INVALID_VALUE);

	Glu->SetAccessor(v8::String::NewSymbol("ERROR"), GetGLU_ERROR);
	Glu->SetAccessor(v8::String::NewSymbol("OUT_OF_MEMORY"), GetGLU_OUT_OF_MEMORY);
	Glu->SetAccessor(v8::String::NewSymbol("INCOMPATIBLE_GL_VERSION"), GetGLU_INCOMPATIBLE_GL_VERSION);

	Glu->SetAccessor(v8::String::NewSymbol("OUTLINE_POLYGON"), GetGLU_OUTLINE_POLYGON);
	Glu->SetAccessor(v8::String::NewSymbol("OUTLINE_PATCH"), GetGLU_OUTLINE_PATCH);


	Glu->SetAccessor(v8::String::NewSymbol("NURBS_BEGIN"), GetGLU_NURBS_BEGIN);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_BEGIN_EXT"), GetGLU_NURBS_BEGIN_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_VERTEX"), GetGLU_NURBS_VERTEX);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_VERTEX_EXT"), GetGLU_NURBS_VERTEX_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_NORMAL"), GetGLU_NURBS_NORMAL);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_NORMAL_EXT"), GetGLU_NURBS_NORMAL_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_COLOR"), GetGLU_NURBS_COLOR);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_COLOR_EXT"), GetGLU_NURBS_COLOR_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_TEXTURE_COORD"), GetGLU_NURBS_TEXTURE_COORD);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_TEX_COORD_EXT"), GetGLU_NURBS_TEX_COORD_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_END"), GetGLU_NURBS_END);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_END_EXT"), GetGLU_NURBS_END_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_BEGIN_DATA"), GetGLU_NURBS_BEGIN_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_BEGIN_DATA_EXT"), GetGLU_NURBS_BEGIN_DATA_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_VERTEX_DATA"), GetGLU_NURBS_VERTEX_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_VERTEX_DATA_EXT"), GetGLU_NURBS_VERTEX_DATA_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_NORMAL_DATA"), GetGLU_NURBS_NORMAL_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_NORMAL_DATA_EXT"), GetGLU_NURBS_NORMAL_DATA_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_COLOR_DATA"), GetGLU_NURBS_COLOR_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_COLOR_DATA_EXT"), GetGLU_NURBS_COLOR_DATA_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_TEXTURE_COORD_DATA"), GetGLU_NURBS_TEXTURE_COORD_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_TEX_COORD_DATA_EXT"), GetGLU_NURBS_TEX_COORD_DATA_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_END_DATA"), GetGLU_NURBS_END_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_END_DATA_EXT"), GetGLU_NURBS_END_DATA_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR"), GetGLU_NURBS_ERROR);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR1"), GetGLU_NURBS_ERROR1);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR2"), GetGLU_NURBS_ERROR2);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR3"), GetGLU_NURBS_ERROR3);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR4"), GetGLU_NURBS_ERROR4);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR5"), GetGLU_NURBS_ERROR5);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR6"), GetGLU_NURBS_ERROR6);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR7"), GetGLU_NURBS_ERROR7);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR8"), GetGLU_NURBS_ERROR8);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR9"), GetGLU_NURBS_ERROR9);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR10"), GetGLU_NURBS_ERROR10);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR11"), GetGLU_NURBS_ERROR11);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR12"), GetGLU_NURBS_ERROR12);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR13"), GetGLU_NURBS_ERROR13);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR14"), GetGLU_NURBS_ERROR14);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR15"), GetGLU_NURBS_ERROR15);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR16"), GetGLU_NURBS_ERROR16);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR17"), GetGLU_NURBS_ERROR17);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR18"), GetGLU_NURBS_ERROR18);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR19"), GetGLU_NURBS_ERROR19);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR20"), GetGLU_NURBS_ERROR20);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR21"), GetGLU_NURBS_ERROR21);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR22"), GetGLU_NURBS_ERROR22);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR23"), GetGLU_NURBS_ERROR23);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR24"), GetGLU_NURBS_ERROR24);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR25"), GetGLU_NURBS_ERROR25);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR26"), GetGLU_NURBS_ERROR26);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR27"), GetGLU_NURBS_ERROR27);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR28"), GetGLU_NURBS_ERROR28);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR29"), GetGLU_NURBS_ERROR29);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR30"), GetGLU_NURBS_ERROR30);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR31"), GetGLU_NURBS_ERROR31);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR32"), GetGLU_NURBS_ERROR32);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR33"), GetGLU_NURBS_ERROR33);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR34"), GetGLU_NURBS_ERROR34);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR35"), GetGLU_NURBS_ERROR35);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR36"), GetGLU_NURBS_ERROR36);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_ERROR37"), GetGLU_NURBS_ERROR37);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_MODE"), GetGLU_NURBS_MODE);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_MODE_EXT"), GetGLU_NURBS_MODE_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_TESSELLATOR"), GetGLU_NURBS_TESSELLATOR);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_TESSELLATOR_EXT"), GetGLU_NURBS_TESSELLATOR_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_RENDERER"), GetGLU_NURBS_RENDERER);
	Glu->SetAccessor(v8::String::NewSymbol("NURBS_RENDERER_EXT"), GetGLU_NURBS_RENDERER_EXT);
 
	Glu->SetAccessor(v8::String::NewSymbol("TESS_BEGIN"), GetGLU_TESS_BEGIN);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_VERTEX"), GetGLU_TESS_VERTEX);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_END"), GetGLU_TESS_END);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_EDGE_FLAG"), GetGLU_TESS_EDGE_FLAG);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_COMBINE"), GetGLU_TESS_COMBINE);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_BEGIN_DATA"), GetGLU_TESS_BEGIN_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_VERTEX_DATA"), GetGLU_TESS_VERTEX_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_END_DATA"), GetGLU_TESS_END_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR_DATA"), GetGLU_TESS_ERROR_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_EDGE_FLAG_DATA"), GetGLU_TESS_EDGE_FLAG_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_COMBINE_DATA"), GetGLU_TESS_COMBINE_DATA);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_WINDING_RULE"), GetGLU_TESS_WINDING_RULE);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_BOUNDARY_ONLY"), GetGLU_TESS_BOUNDARY_ONLY);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_TOLERANCE"), GetGLU_TESS_TOLERANCE);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR"), GetGLU_TESS_ERROR);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR1"), GetGLU_TESS_ERROR1);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR2"), GetGLU_TESS_ERROR2);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR3"), GetGLU_TESS_ERROR3);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR4"), GetGLU_TESS_ERROR4);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR5"), GetGLU_TESS_ERROR5);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR6"), GetGLU_TESS_ERROR6);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR7"), GetGLU_TESS_ERROR7);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_ERROR8"), GetGLU_TESS_ERROR8);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_MISSING_BEGIN_POLYGON"), GetGLU_TESS_MISSING_BEGIN_POLYGON);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_MISSING_BEGIN_CONTOUR"), GetGLU_TESS_MISSING_BEGIN_CONTOUR);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_MISSING_END_POLYGON"), GetGLU_TESS_MISSING_END_POLYGON);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_MISSING_END_CONTOUR"), GetGLU_TESS_MISSING_END_CONTOUR);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_COORD_TOO_LARGE"), GetGLU_TESS_COORD_TOO_LARGE);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_NEED_COMBINE_CALLBACK"), GetGLU_TESS_NEED_COMBINE_CALLBACK);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_WINDING_ODD"), GetGLU_TESS_WINDING_ODD);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_WINDING_NONZERO"), GetGLU_TESS_WINDING_NONZERO);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_WINDING_POSITIVE"), GetGLU_TESS_WINDING_POSITIVE);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_WINDING_NEGATIVE"), GetGLU_TESS_WINDING_NEGATIVE);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_WINDING_ABS_GEQ_TWO"), GetGLU_TESS_WINDING_ABS_GEQ_TWO);
	Glu->SetAccessor(v8::String::NewSymbol("TESS_MAX_COORD"), GetGLU_TESS_MAX_COORD);
	 

	Glu->SetAccessor(v8::String::NewSymbol("AUTO_LOAD_MATRIX"), GetGLU_AUTO_LOAD_MATRIX);
	Glu->SetAccessor(v8::String::NewSymbol("CULLING"), GetGLU_CULLING);
	Glu->SetAccessor(v8::String::NewSymbol("SAMPLING_TOLERANCE"), GetGLU_SAMPLING_TOLERANCE);
	Glu->SetAccessor(v8::String::NewSymbol("DISPLAY_MODE"), GetGLU_DISPLAY_MODE);
	Glu->SetAccessor(v8::String::NewSymbol("PARAMETRIC_TOLERANCE"), GetGLU_PARAMETRIC_TOLERANCE);
	Glu->SetAccessor(v8::String::NewSymbol("SAMPLING_METHOD"), GetGLU_SAMPLING_METHOD);
	Glu->SetAccessor(v8::String::NewSymbol("U_STEP"), GetGLU_U_STEP);
	Glu->SetAccessor(v8::String::NewSymbol("V_STEP"), GetGLU_V_STEP);
	
	Glu->SetAccessor(v8::String::NewSymbol("OBJECT_PARAMETRIC_ERROR"), GetGLU_OBJECT_PARAMETRIC_ERROR);
	Glu->SetAccessor(v8::String::NewSymbol("OBJECT_PARAMETRIC_ERROR_EXT"), GetGLU_OBJECT_PARAMETRIC_ERROR_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("OBJECT_PATH_LENGTH"), GetGLU_OBJECT_PATH_LENGTH);
	Glu->SetAccessor(v8::String::NewSymbol("OBJECT_PATH_LENGTH_EXT"), GetGLU_OBJECT_PATH_LENGTH_EXT);
	Glu->SetAccessor(v8::String::NewSymbol("PATH_LENGTH"), GetGLU_PATH_LENGTH);
	Glu->SetAccessor(v8::String::NewSymbol("PARAMETRIC_ERROR"), GetGLU_PARAMETRIC_ERROR);
	Glu->SetAccessor(v8::String::NewSymbol("DOMAIN_DISTANCE"), GetGLU_DOMAIN_DISTANCE);
	Glu->SetAccessor(v8::String::NewSymbol("MAP1_TRIM_2"), GetGLU_MAP1_TRIM_2);
	Glu->SetAccessor(v8::String::NewSymbol("MAP1_TRIM_3"), GetGLU_MAP1_TRIM_3);
	Glu->SetAccessor(v8::String::NewSymbol("POINT"), GetGLU_POINT);
	Glu->SetAccessor(v8::String::NewSymbol("LINE"), GetGLU_LINE);
	Glu->SetAccessor(v8::String::NewSymbol("FILL"), GetGLU_FILL);
	Glu->SetAccessor(v8::String::NewSymbol("SILHOUETTE"), GetGLU_SILHOUETTE);
	Glu->SetAccessor(v8::String::NewSymbol("SMOOTH"), GetGLU_SMOOTH);
	Glu->SetAccessor(v8::String::NewSymbol("FLAT"), GetGLU_FLAT);
	Glu->SetAccessor(v8::String::NewSymbol("NONE"), GetGLU_NONE);
	Glu->SetAccessor(v8::String::NewSymbol("OUTSIDE"), GetGLU_OUTSIDE);
	Glu->SetAccessor(v8::String::NewSymbol("INSIDE"), GetGLU_INSIDE);
	
	Glu->SetAccessor(v8::String::NewSymbol("BEGIN"), GetGLU_BEGIN);
	Glu->SetAccessor(v8::String::NewSymbol("VERTEX"), GetGLU_VERTEX);
	Glu->SetAccessor(v8::String::NewSymbol("END"), GetGLU_END);
	Glu->SetAccessor(v8::String::NewSymbol("EDGE_FLAG"), GetGLU_EDGE_FLAG);
	Glu->SetAccessor(v8::String::NewSymbol("CW"), GetGLU_CW);
	Glu->SetAccessor(v8::String::NewSymbol("CCW"), GetGLU_CCW);
	Glu->SetAccessor(v8::String::NewSymbol("INTERIOR"), GetGLU_INTERIOR);
	Glu->SetAccessor(v8::String::NewSymbol("EXTERIOR"), GetGLU_EXTERIOR);
	Glu->SetAccessor(v8::String::NewSymbol("UNKNOWN"), GetGLU_UNKNOWN);
	

	Glu->Set(v8::String::NewSymbol("checkExtension"), v8::FunctionTemplate::New(GLUCheckExtensionCallback));
	Glu->Set(v8::String::NewSymbol("lookAt"), v8::FunctionTemplate::New(GLULookAtCallback));
	Glu->Set(v8::String::NewSymbol("newNurbsRenderer"), v8::FunctionTemplate::New(GLUNewNurbsRendererCallback));
	Glu->Set(v8::String::NewSymbol("newQuadric"), v8::FunctionTemplate::New(GLUNewQuadricCallback));
	Glu->Set(v8::String::NewSymbol("newTess"), v8::FunctionTemplate::New(GLUNewTessCallback));
	Glu->Set(v8::String::NewSymbol("ortho2D"), v8::FunctionTemplate::New(GLUOrtho2DCallback));
	Glu->Set(v8::String::NewSymbol("perspective"), v8::FunctionTemplate::New(GLUPerspectiveCallback));
	Glu->Set(v8::String::NewSymbol("pickMatrix"), v8::FunctionTemplate::New(GLUPickMatrixCallback));


	return scope.Close(Glu);

}

