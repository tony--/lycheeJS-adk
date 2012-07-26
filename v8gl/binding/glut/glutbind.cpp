
#include "glutbind.h"

int* pargc_;
char** argv_;
std::map<const char*, void*> font_;
v8::Persistent<v8::Context> GlutFactory::context_;


v8::Handle<v8::Value> GetGLUT_APIENTRY_DEFINED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_APIENTRY_DEFINED);
}

v8::Handle<v8::Value> GetGLUT_WINGDIAPI_DEFINED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINGDIAPI_DEFINED);
}

v8::Handle<v8::Value> GetGLUT_API_VERSION(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_API_VERSION);
}

v8::Handle<v8::Value> GetGLUT_XLIB_IMPLEMENTATION(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_XLIB_IMPLEMENTATION);
}

v8::Handle<v8::Value> GetGLUT_MACOSX_IMPLEMENTATION(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_MACOSX_IMPLEMENTATION);
}

v8::Handle<v8::Value> GetGLUT_RGB(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_RGB);
}

v8::Handle<v8::Value> GetGLUT_RGBA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_RGBA);
}

v8::Handle<v8::Value> GetGLUT_INDEX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_INDEX);
}

v8::Handle<v8::Value> GetGLUT_SINGLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_SINGLE);
}

v8::Handle<v8::Value> GetGLUT_DOUBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_DOUBLE);
}

v8::Handle<v8::Value> GetGLUT_ACCUM(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ACCUM);
}

v8::Handle<v8::Value> GetGLUT_ALPHA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ALPHA);
}

v8::Handle<v8::Value> GetGLUT_DEPTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_DEPTH);
}

v8::Handle<v8::Value> GetGLUT_STENCIL(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_STENCIL);
}

v8::Handle<v8::Value> GetGLUT_MULTISAMPLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_MULTISAMPLE);
}

v8::Handle<v8::Value> GetGLUT_STEREO(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_STEREO);
}

v8::Handle<v8::Value> GetGLUT_LUMINANCE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_LUMINANCE);
}

v8::Handle<v8::Value> GetGLUT_NO_RECOVERY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NO_RECOVERY);
}

v8::Handle<v8::Value> GetGLUT_LEFT_BUTTON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_LEFT_BUTTON);
}

v8::Handle<v8::Value> GetGLUT_MIDDLE_BUTTON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_MIDDLE_BUTTON);
}

v8::Handle<v8::Value> GetGLUT_RIGHT_BUTTON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_RIGHT_BUTTON);
}

v8::Handle<v8::Value> GetGLUT_DOWN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_DOWN);
}

v8::Handle<v8::Value> GetGLUT_UP(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_UP);
}

v8::Handle<v8::Value> GetGLUT_KEY_F1(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F1);
}

v8::Handle<v8::Value> GetGLUT_KEY_F2(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F2);
}

v8::Handle<v8::Value> GetGLUT_KEY_F3(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F3);
}

v8::Handle<v8::Value> GetGLUT_KEY_F4(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F4);
}

v8::Handle<v8::Value> GetGLUT_KEY_F5(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F5);
}

v8::Handle<v8::Value> GetGLUT_KEY_F6(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F6);
}

v8::Handle<v8::Value> GetGLUT_KEY_F7(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F7);
}

v8::Handle<v8::Value> GetGLUT_KEY_F8(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F8);
}

v8::Handle<v8::Value> GetGLUT_KEY_F9(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F9);
}

v8::Handle<v8::Value> GetGLUT_KEY_F10(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F10);
}

v8::Handle<v8::Value> GetGLUT_KEY_F11(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F11);
}

v8::Handle<v8::Value> GetGLUT_KEY_F12(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_F12);
}

v8::Handle<v8::Value> GetGLUT_KEY_LEFT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_LEFT);
}

v8::Handle<v8::Value> GetGLUT_KEY_UP(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_UP);
}

v8::Handle<v8::Value> GetGLUT_KEY_RIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_RIGHT);
}

v8::Handle<v8::Value> GetGLUT_KEY_DOWN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_DOWN);
}

v8::Handle<v8::Value> GetGLUT_KEY_PAGE_UP(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_PAGE_UP);
}

v8::Handle<v8::Value> GetGLUT_KEY_PAGE_DOWN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_PAGE_DOWN);
}

v8::Handle<v8::Value> GetGLUT_KEY_HOME(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_HOME);
}

v8::Handle<v8::Value> GetGLUT_KEY_END(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_END);
}

v8::Handle<v8::Value> GetGLUT_KEY_INSERT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_INSERT);
}

v8::Handle<v8::Value> GetGLUT_LEFT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_LEFT);
}

v8::Handle<v8::Value> GetGLUT_ENTERED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ENTERED);
}

v8::Handle<v8::Value> GetGLUT_MENU_NOT_IN_USE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_MENU_NOT_IN_USE);
}

v8::Handle<v8::Value> GetGLUT_MENU_IN_USE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_MENU_IN_USE);
}

v8::Handle<v8::Value> GetGLUT_NOT_VISIBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NOT_VISIBLE);
}

v8::Handle<v8::Value> GetGLUT_VISIBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VISIBLE);
}

v8::Handle<v8::Value> GetGLUT_HIDDEN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HIDDEN);
}

v8::Handle<v8::Value> GetGLUT_FULLY_RETAINED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_FULLY_RETAINED);
}

v8::Handle<v8::Value> GetGLUT_PARTIALLY_RETAINED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_PARTIALLY_RETAINED);
}

v8::Handle<v8::Value> GetGLUT_FULLY_COVERED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_FULLY_COVERED);
}

v8::Handle<v8::Value> GetGLUT_RED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_RED);
}

v8::Handle<v8::Value> GetGLUT_GREEN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GREEN);
}

v8::Handle<v8::Value> GetGLUT_BLUE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_BLUE);
}

v8::Handle<v8::Value> GetGLUT_NORMAL(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NORMAL);
}

v8::Handle<v8::Value> GetGLUT_OVERLAY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_OVERLAY);
}

v8::Handle<v8::Value> GetGLUT_STROKE_ROMAN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("STROKE_ROMAN");

}

v8::Handle<v8::Value> GetGLUT_STROKE_MONO_ROMAN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("STROKE_MONO_ROMAN");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_9_BY_15(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_9_BY_15");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_8_BY_13(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_8_BY_13");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_TIMES_ROMAN_10(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_TIMES_ROMAN_10");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_TIMES_ROMAN_24(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_TIMES_ROMAN_24");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_HELVETICA_10(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_HELVETICA_10");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_HELVETICA_12(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_HELVETICA_12");

}

v8::Handle<v8::Value> GetGLUT_BITMAP_HELVETICA_18(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::String::New("BITMAP_HELVETICA_18");

}

v8::Handle<v8::Value> GetGLUT_WINDOW_X(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_X);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_Y(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_Y);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_WIDTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_WIDTH);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_HEIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_HEIGHT);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_BUFFER_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_BUFFER_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_STENCIL_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_STENCIL_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_DEPTH_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_DEPTH_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_RED_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_RED_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_GREEN_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_GREEN_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_BLUE_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_BLUE_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_ALPHA_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_ALPHA_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_ACCUM_RED_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_ACCUM_RED_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_ACCUM_GREEN_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_ACCUM_GREEN_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_ACCUM_BLUE_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_ACCUM_BLUE_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_ACCUM_ALPHA_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_ACCUM_ALPHA_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_DOUBLEBUFFER(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_DOUBLEBUFFER);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_RGBA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_RGBA);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_PARENT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_PARENT);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_NUM_CHILDREN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_NUM_CHILDREN);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_COLORMAP_SIZE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_COLORMAP_SIZE);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_NUM_SAMPLES(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_NUM_SAMPLES);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_STEREO(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_STEREO);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_CURSOR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_CURSOR);
}

v8::Handle<v8::Value> GetGLUT_SCREEN_WIDTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_SCREEN_WIDTH);
}

v8::Handle<v8::Value> GetGLUT_SCREEN_HEIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_SCREEN_HEIGHT);
}

v8::Handle<v8::Value> GetGLUT_SCREEN_WIDTH_MM(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_SCREEN_WIDTH_MM);
}

v8::Handle<v8::Value> GetGLUT_SCREEN_HEIGHT_MM(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_SCREEN_HEIGHT_MM);
}

v8::Handle<v8::Value> GetGLUT_MENU_NUM_ITEMS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_MENU_NUM_ITEMS);
}

v8::Handle<v8::Value> GetGLUT_DISPLAY_MODE_POSSIBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_DISPLAY_MODE_POSSIBLE);
}

v8::Handle<v8::Value> GetGLUT_INIT_WINDOW_X(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_INIT_WINDOW_X);
}

v8::Handle<v8::Value> GetGLUT_INIT_WINDOW_Y(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_INIT_WINDOW_Y);
}

v8::Handle<v8::Value> GetGLUT_INIT_WINDOW_WIDTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_INIT_WINDOW_WIDTH);
}

v8::Handle<v8::Value> GetGLUT_INIT_WINDOW_HEIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_INIT_WINDOW_HEIGHT);
}

v8::Handle<v8::Value> GetGLUT_INIT_DISPLAY_MODE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_INIT_DISPLAY_MODE);
}

v8::Handle<v8::Value> GetGLUT_ELAPSED_TIME(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ELAPSED_TIME);
}

v8::Handle<v8::Value> GetGLUT_WINDOW_FORMAT_ID(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_WINDOW_FORMAT_ID);
}

v8::Handle<v8::Value> GetGLUT_HAS_KEYBOARD(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_KEYBOARD);
}

v8::Handle<v8::Value> GetGLUT_HAS_MOUSE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_MOUSE);
}

v8::Handle<v8::Value> GetGLUT_HAS_SPACEBALL(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_SPACEBALL);
}

v8::Handle<v8::Value> GetGLUT_HAS_DIAL_AND_BUTTON_BOX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_DIAL_AND_BUTTON_BOX);
}

v8::Handle<v8::Value> GetGLUT_HAS_TABLET(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_TABLET);
}

v8::Handle<v8::Value> GetGLUT_NUM_MOUSE_BUTTONS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NUM_MOUSE_BUTTONS);
}

v8::Handle<v8::Value> GetGLUT_NUM_SPACEBALL_BUTTONS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NUM_SPACEBALL_BUTTONS);
}

v8::Handle<v8::Value> GetGLUT_NUM_BUTTON_BOX_BUTTONS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NUM_BUTTON_BOX_BUTTONS);
}

v8::Handle<v8::Value> GetGLUT_NUM_DIALS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NUM_DIALS);
}

v8::Handle<v8::Value> GetGLUT_NUM_TABLET_BUTTONS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NUM_TABLET_BUTTONS);
}

v8::Handle<v8::Value> GetGLUT_DEVICE_IGNORE_KEY_REPEAT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_DEVICE_IGNORE_KEY_REPEAT);
}

v8::Handle<v8::Value> GetGLUT_DEVICE_KEY_REPEAT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_DEVICE_KEY_REPEAT);
}

v8::Handle<v8::Value> GetGLUT_HAS_JOYSTICK(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_JOYSTICK);
}

v8::Handle<v8::Value> GetGLUT_OWNS_JOYSTICK(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_OWNS_JOYSTICK);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_BUTTONS(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_BUTTONS);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_AXES(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_AXES);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_POLL_RATE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_POLL_RATE);
}

v8::Handle<v8::Value> GetGLUT_OVERLAY_POSSIBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_OVERLAY_POSSIBLE);
}

v8::Handle<v8::Value> GetGLUT_LAYER_IN_USE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_LAYER_IN_USE);
}

v8::Handle<v8::Value> GetGLUT_HAS_OVERLAY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_HAS_OVERLAY);
}

v8::Handle<v8::Value> GetGLUT_TRANSPARENT_INDEX(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_TRANSPARENT_INDEX);
}

v8::Handle<v8::Value> GetGLUT_NORMAL_DAMAGED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_NORMAL_DAMAGED);
}

v8::Handle<v8::Value> GetGLUT_OVERLAY_DAMAGED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_OVERLAY_DAMAGED);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_POSSIBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_POSSIBLE);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_IN_USE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_IN_USE);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_X_DELTA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_X_DELTA);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_Y_DELTA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_Y_DELTA);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_WIDTH_DELTA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_WIDTH_DELTA);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_HEIGHT_DELTA(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_HEIGHT_DELTA);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_X(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_X);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_Y(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_Y);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_WIDTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
  
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_WIDTH);
}

v8::Handle<v8::Value> GetGLUT_VIDEO_RESIZE_HEIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_VIDEO_RESIZE_HEIGHT);
}

v8::Handle<v8::Value> GetGLUT_ACTIVE_SHIFT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ACTIVE_SHIFT);
}

v8::Handle<v8::Value> GetGLUT_ACTIVE_CTRL(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ACTIVE_CTRL);
}

v8::Handle<v8::Value> GetGLUT_ACTIVE_ALT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_ACTIVE_ALT);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_RIGHT_ARROW(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_RIGHT_ARROW);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_LEFT_ARROW(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_LEFT_ARROW);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_INFO(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_INFO);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_DESTROY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_DESTROY);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_HELP(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_HELP);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_CYCLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_CYCLE);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_SPRAY(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_SPRAY);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_WAIT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_WAIT);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_TEXT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_TEXT);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_CROSSHAIR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_CROSSHAIR);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_UP_DOWN(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_UP_DOWN);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_LEFT_RIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_LEFT_RIGHT);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_TOP_SIDE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_TOP_SIDE);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_BOTTOM_SIDE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_BOTTOM_SIDE);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_LEFT_SIDE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_LEFT_SIDE);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_RIGHT_SIDE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_RIGHT_SIDE);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_TOP_LEFT_CORNER(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_TOP_LEFT_CORNER);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_TOP_RIGHT_CORNER(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_TOP_RIGHT_CORNER);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_BOTTOM_RIGHT_CORNER(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_BOTTOM_RIGHT_CORNER);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_BOTTOM_LEFT_CORNER(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_BOTTOM_LEFT_CORNER);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_INHERIT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_INHERIT);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_NONE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_NONE);
}

v8::Handle<v8::Value> GetGLUT_CURSOR_FULL_CROSSHAIR(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_CURSOR_FULL_CROSSHAIR);
}



v8::Handle<v8::Value> GLUTInitCallback(const v8::Arguments& args) {
	glutInit(( int* ) pargc_, ( char** ) argv_);
	return v8::Undefined();
}



v8::Handle<v8::Value> GLUTInitDisplayModeCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	unsigned int arg0 = args[0]->Uint32Value();

	glutInitDisplayMode((unsigned int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTInitDisplayStringCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	glutInitDisplayString((const char*)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTInitWindowPositionCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();

	glutInitWindowPosition((int)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTInitWindowSizeCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();

	glutInitWindowSize((int)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTMainLoopCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();


	glutMainLoop();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTCreateWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	glutCreateWindow((const char*)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTCreateSubWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 5) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();
	int arg4 = args[4]->IntegerValue();

	glutCreateSubWindow((int)arg0, (int)arg1, (int)arg2, (int)arg3, (int)arg4);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTDestroyWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutDestroyWindow((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPostRedisplayCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutPostRedisplay();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPostWindowRedisplayCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutPostWindowRedisplay((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSwapBuffersCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutSwapBuffers();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTGetWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutGetWindow();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutSetWindow((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetWindowTitleCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	glutSetWindowTitle((const char*)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetIconTitleCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	glutSetIconTitle((const char*)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPositionWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();

	glutPositionWindow((int)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTReshapeWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();

	glutReshapeWindow((int)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPopWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutPopWindow();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPushWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutPushWindow();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTIconifyWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutIconifyWindow();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTShowWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutShowWindow();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTHideWindowCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutHideWindow();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTFullScreenCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutFullScreen();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetCursorCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutSetCursor((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWarpPointerCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();

	glutWarpPointer((int)arg0, (int)arg1);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentWMCloseFunc;

void funcWMCloseFunc ( ) {

	v8::HandleScope scope;
	v8::Handle<v8::Value> valueArr[0];
	v8::TryCatch try_catch;

	v8::Handle<v8::Value> result = persistentWMCloseFunc->Call(GlutFactory::context_->Global(), 0, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in WMCloseFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTWMCloseFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

#if (GLUT_MACOSX_IMPLEMENTATION >= 2)
	persistentWMCloseFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentWMCloseFunc = v8::Persistent<v8::Function>::New(value0);

	glutWMCloseFunc((void (*)(void)) funcWMCloseFunc);
#endif

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTCheckLoopCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

#if (GLUT_MACOSX_IMPLEMENTATION >= 2)
	glutCheckLoop();
#endif

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTEstablishOverlayCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutEstablishOverlay();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTRemoveOverlayCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutRemoveOverlay();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTUseLayerCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutUseLayer((GLenum)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPostOverlayRedisplayCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutPostOverlayRedisplay();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTPostWindowOverlayRedisplayCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutPostWindowOverlayRedisplay((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTShowOverlayCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutShowOverlay();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTHideOverlayCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutHideOverlay();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTCreateMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	void* arg0 = *value0;

	glutCreateMenu((void (*)(int))arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTDestroyMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutDestroyMenu((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTGetMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutGetMenu();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutSetMenu((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTAddMenuEntryCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;
	int arg1 = args[1]->IntegerValue();

	glutAddMenuEntry((const char*)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTAddSubMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;
	int arg1 = args[1]->IntegerValue();

	glutAddSubMenu((const char*)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTChangeToMenuEntryCallback(const v8::Arguments& args) {

	if (args.Length() < 3) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	v8::String::Utf8Value value1(args[1]);
	char* arg1 = *value1;
	int arg2 = args[2]->IntegerValue();

	glutChangeToMenuEntry((int)arg0, (const char*)arg1, (int)arg2);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTChangeToSubMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 3) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	v8::String::Utf8Value value1(args[1]);
	char* arg1 = *value1;
	int arg2 = args[2]->IntegerValue();

	glutChangeToSubMenu((int)arg0, (const char*)arg1, (int)arg2);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTRemoveMenuItemCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutRemoveMenuItem((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTAttachMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutAttachMenu((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTDetachMenuCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutDetachMenu((int)arg0);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentDisplayFunc;

void funcDisplayFunc () {

	v8::HandleScope scope;
	v8::Handle<v8::Value> valueArr[0];
	v8::TryCatch try_catch;

	v8::Handle<v8::Value> result = persistentDisplayFunc->Call(GlutFactory::context_->Global(), 0, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in DisplayFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTDisplayFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();


	persistentDisplayFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentDisplayFunc = v8::Persistent<v8::Function>::New(value0);

	glutDisplayFunc((void (*)(void)) funcDisplayFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentReshapeFunc;

void funcReshapeFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);

	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentReshapeFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in ReshapeFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTReshapeFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentReshapeFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentReshapeFunc = v8::Persistent<v8::Function>::New(value0);

	glutReshapeFunc((void (*)(int width, int height)) funcReshapeFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentKeyboardFunc;

void funcKeyboardFunc ( unsigned char arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentKeyboardFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in KeyboardFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTKeyboardFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentKeyboardFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentKeyboardFunc = v8::Persistent<v8::Function>::New(value0);

	glutKeyboardFunc((void (*)(unsigned char key, int x, int y)) funcKeyboardFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentMouseFunc;

void funcMouseFunc ( int arg0,int arg1,int arg2,int arg3) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[4];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
	valueArr[3] = v8::Integer::New(arg3);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentMouseFunc->Call(GlutFactory::context_->Global(), 4, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in MouseFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTMouseFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentMouseFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentMouseFunc = v8::Persistent<v8::Function>::New(value0);

	glutMouseFunc((void (*)(int button, int state, int x, int y)) funcMouseFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentMotionFunc;

void funcMotionFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentMotionFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in MotionFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTMotionFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();


	persistentMotionFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentMotionFunc = v8::Persistent<v8::Function>::New(value0);

	glutMotionFunc((void (*)(int x, int y)) funcMotionFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentPassiveMotionFunc;

void funcPassiveMotionFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentPassiveMotionFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in PassiveMotionFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTPassiveMotionFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();


	persistentPassiveMotionFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentPassiveMotionFunc = v8::Persistent<v8::Function>::New(value0);

	glutPassiveMotionFunc((void (*)(int x, int y)) funcPassiveMotionFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentEntryFunc;

void funcEntryFunc ( int arg0) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[1];
	valueArr[0] = v8::Integer::New(arg0);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentEntryFunc->Call(GlutFactory::context_->Global(), 1, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in EntryFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTEntryFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentEntryFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentEntryFunc = v8::Persistent<v8::Function>::New(value0);

	glutEntryFunc((void (*)(int state)) funcEntryFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentVisibilityFunc;

void funcVisibilityFunc ( int arg0) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[1];
	valueArr[0] = v8::Integer::New(arg0);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentVisibilityFunc->Call(GlutFactory::context_->Global(), 1, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in VisibilityFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTVisibilityFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentVisibilityFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentVisibilityFunc = v8::Persistent<v8::Function>::New(value0);

	glutVisibilityFunc((void (*)(int state)) funcVisibilityFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentIdleFunc;

void funcIdleFunc ( ) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[0];

  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentIdleFunc->Call(GlutFactory::context_->Global(), 0, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in IdleFunc: %s\n", *error);
	}

}

v8::Handle<v8::Value> GLUTIdleFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentIdleFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentIdleFunc = v8::Persistent<v8::Function>::New(value0);

	glutIdleFunc((void (*)(void)) funcIdleFunc);

	return v8::Undefined();
}



typedef struct {
	int value;
	v8::Persistent<v8::Function> timerFunc;
} timerData;

timerData * persistentTimers[50] = { NULL };

void callbackTimerFunc(int value) {

	timerData * elem = persistentTimers[value];

	if(elem != NULL) {
    
		v8::HandleScope scope;
		v8::Handle<v8::Value> args[1];
		args[0] = v8::Integer::New(elem->value);
		v8::Persistent<v8::Function> timer = elem->timerFunc;

		timer->Call(GlutFactory::context_->Global(), 1, args);

		timer.Dispose();
		delete elem;
		persistentTimers[value] = NULL;
	}
}

v8::Handle<v8::Value> GLUTTimerFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 3) return v8::Undefined();

	unsigned int millisec = args[0]->Uint32Value();
	int timerId = args[2]->IntegerValue();


	// Place the function in the next empty timer spot

	int i = 0;
	bool found = false;
	for (; i < 50; i++) {

		if (persistentTimers[i] == NULL) {

			v8::Handle<v8::Function> value = v8::Handle<v8::Function>::Cast(args[1]);
			v8::Persistent<v8::Function> persistentValue = v8::Persistent<v8::Function>::New(value);


			timerData * structElem = new timerData;
			structElem->value = timerId;
			structElem->timerFunc = persistentValue;
			persistentTimers[i] = structElem;
			found = true;
			break;
		}
	}

	// TODO: add dynamic resize for persistent Timers

	if(!found) return v8::Undefined();


	//Don't pass the actual *value*, but an id to our persistent Function
	glutTimerFunc((unsigned int) millisec, (void (*)(int)) callbackTimerFunc, (int) i);

	return v8::Undefined();
}



v8::Persistent<v8::Function> persistentMenuStateFunc;

void funcMenuStateFunc ( int arg0) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[1];
	valueArr[0] = v8::Integer::New(arg0);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentMenuStateFunc->Call(GlutFactory::context_->Global(), 1, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in MenuStateFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTMenuStateFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentMenuStateFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentMenuStateFunc = v8::Persistent<v8::Function>::New(value0);

	glutMenuStateFunc((void (*)(int state)) funcMenuStateFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentSpecialFunc;

void funcSpecialFunc ( int arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentSpecialFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in SpecialFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTSpecialFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentSpecialFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentSpecialFunc = v8::Persistent<v8::Function>::New(value0);

	glutSpecialFunc((void (*)(int key, int x, int y)) funcSpecialFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentSpaceballMotionFunc;

void funcSpaceballMotionFunc ( int arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentSpaceballMotionFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in SpaceballMotionFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTSpaceballMotionFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentSpaceballMotionFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentSpaceballMotionFunc = v8::Persistent<v8::Function>::New(value0);

	glutSpaceballMotionFunc((void (*)(int x, int y, int z)) funcSpaceballMotionFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentSpaceballRotateFunc;

void funcSpaceballRotateFunc ( int arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentSpaceballRotateFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in SpaceballRotateFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTSpaceballRotateFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentSpaceballRotateFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentSpaceballRotateFunc = v8::Persistent<v8::Function>::New(value0);

	glutSpaceballRotateFunc((void (*)(int x, int y, int z)) funcSpaceballRotateFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentSpaceballButtonFunc;

void funcSpaceballButtonFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentSpaceballButtonFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in SpaceballButtonFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTSpaceballButtonFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentSpaceballButtonFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentSpaceballButtonFunc = v8::Persistent<v8::Function>::New(value0);

	glutSpaceballButtonFunc((void (*)(int button, int state)) funcSpaceballButtonFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentButtonBoxFunc;

void funcButtonBoxFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentButtonBoxFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in ButtonBoxFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTButtonBoxFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentButtonBoxFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentButtonBoxFunc = v8::Persistent<v8::Function>::New(value0);

	glutButtonBoxFunc((void (*)(int button, int state)) funcButtonBoxFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentDialsFunc;

void funcDialsFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentDialsFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in DialsFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTDialsFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();


	persistentDialsFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentDialsFunc = v8::Persistent<v8::Function>::New(value0);

	glutDialsFunc((void (*)(int dial, int value)) funcDialsFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentTabletMotionFunc;

void funcTabletMotionFunc ( int arg0,int arg1) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[2];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentTabletMotionFunc->Call(GlutFactory::context_->Global(), 2, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in TabletMotionFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTTabletMotionFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();


	persistentTabletMotionFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentTabletMotionFunc = v8::Persistent<v8::Function>::New(value0);

	glutTabletMotionFunc((void (*)(int x, int y)) funcTabletMotionFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentTabletButtonFunc;

void funcTabletButtonFunc ( int arg0,int arg1,int arg2,int arg3) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[4];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
	valueArr[3] = v8::Integer::New(arg3);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentTabletButtonFunc->Call(GlutFactory::context_->Global(), 4, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in TabletButtonFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTTabletButtonFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentTabletButtonFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentTabletButtonFunc = v8::Persistent<v8::Function>::New(value0);

	glutTabletButtonFunc((void (*)(int button, int state, int x, int y)) funcTabletButtonFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentMenuStatusFunc;

void funcMenuStatusFunc ( int arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentMenuStatusFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in MenuStatusFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTMenuStatusFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentMenuStatusFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentMenuStatusFunc = v8::Persistent<v8::Function>::New(value0);

	glutMenuStatusFunc((void (*)(int status, int x, int y)) funcMenuStatusFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentOverlayDisplayFunc;

void funcOverlayDisplayFunc ( ) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[0];
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentOverlayDisplayFunc->Call(GlutFactory::context_->Global(), 0, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in OverlayDisplayFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTOverlayDisplayFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentOverlayDisplayFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentOverlayDisplayFunc = v8::Persistent<v8::Function>::New(value0);

	glutOverlayDisplayFunc((void (*)(void)) funcOverlayDisplayFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentWindowStatusFunc;

void funcWindowStatusFunc ( int arg0) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[1];
	valueArr[0] = v8::Integer::New(arg0);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentWindowStatusFunc->Call(GlutFactory::context_->Global(), 1, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in WindowStatusFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTWindowStatusFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentWindowStatusFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentWindowStatusFunc = v8::Persistent<v8::Function>::New(value0);

	glutWindowStatusFunc((void (*)(int state)) funcWindowStatusFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentKeyboardUpFunc;

void funcKeyboardUpFunc ( unsigned char arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentKeyboardUpFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in KeyboardUpFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTKeyboardUpFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();


	persistentKeyboardUpFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentKeyboardUpFunc = v8::Persistent<v8::Function>::New(value0);

	glutKeyboardUpFunc((void (*)(unsigned char key, int x, int y)) funcKeyboardUpFunc);

	return v8::Undefined();
}




v8::Persistent<v8::Function> persistentSpecialUpFunc;

void funcSpecialUpFunc ( int arg0,int arg1,int arg2) {

	v8::HandleScope scope;

	v8::Handle<v8::Value> valueArr[3];
	valueArr[0] = v8::Integer::New(arg0);
	valueArr[1] = v8::Integer::New(arg1);
	valueArr[2] = v8::Integer::New(arg2);
  
	v8::TryCatch try_catch;
	v8::Handle<v8::Value> result = persistentSpecialUpFunc->Call(GlutFactory::context_->Global(), 3, valueArr);
	if (result.IsEmpty()) {
		v8::String::Utf8Value error(try_catch.Exception());
		fprintf(stderr, "Exception in SpecialUpFunc: %s\n", *error);
	}
}

v8::Handle<v8::Value> GLUTSpecialUpFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 1 || !args[0]->IsFunction()) return v8::Undefined();

	persistentSpecialUpFunc.Dispose();
	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	persistentSpecialUpFunc = v8::Persistent<v8::Function>::New(value0);

	glutSpecialUpFunc((void (*)(int key, int x, int y)) funcSpecialUpFunc);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTJoystickFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::Handle<v8::Function> value0 = v8::Handle<v8::Function>::Cast(args[0]);
	void* arg0 = *value0;
	int arg1 = args[1]->IntegerValue();

	glutJoystickFunc((void (*)(unsigned int buttonMask, int x, int y, int z))arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetColorCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	int arg0 = args[0]->Int32Value();
	double arg1 = args[1]->NumberValue();
	double arg2 = args[2]->NumberValue();
	double arg3 = args[3]->NumberValue();

	glutSetColor(arg0, (GLfloat)arg1, (GLfloat)arg2, (GLfloat)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTGetColorCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();

	glutGetColor((int)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTCopyColormapCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutCopyColormap((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTGetCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutGet((GLenum)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTDeviceGetCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutDeviceGet((GLenum)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTExtensionSupportedCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	glutExtensionSupported((const char*)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTGetModifiersCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutGetModifiers();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTLayerGetCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutLayerGet((GLenum)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTBitmapCharacterCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	int arg1 = args[1]->IntegerValue();

	glutBitmapCharacter((void*)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTBitmapWidthCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	int arg1 = args[1]->IntegerValue();

	glutBitmapWidth((void*)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTStrokeCharacterCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	int arg1 = args[1]->IntegerValue();

	glutStrokeCharacter((void*)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTStrokeWidthCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	int arg1 = args[1]->IntegerValue();

	glutStrokeWidth((void*)arg0, (int)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTBitmapLengthCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	v8::String::Utf8Value value1(args[1]);
	char* arg1 = *value1;

	glutBitmapLength((void*)arg0, (const unsigned char*)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTStrokeLengthCallback(const v8::Arguments& args) {

	if (args.Length() < 2) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* key0 = *value0;
	void* arg0 = font_[key0];
	v8::String::Utf8Value value1(args[1]);
	char* arg1 = *value1;

	glutStrokeLength((void*)arg0, (const unsigned char*)arg1);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireSphereCallback(const v8::Arguments& args) {

	if (args.Length() < 3) return v8::Undefined();

	double arg0 = args[0]->NumberValue();
	int arg1 = args[1]->IntegerValue();
	int arg2 = args[2]->IntegerValue();

	glutWireSphere((GLdouble)arg0, (GLint)arg1, (GLint)arg2);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidSphereCallback(const v8::Arguments& args) {

	if (args.Length() < 3) return v8::Undefined();

	double arg0 = args[0]->NumberValue();
	int arg1 = args[1]->IntegerValue();
	int arg2 = args[2]->IntegerValue();

	glutSolidSphere((GLdouble)arg0, (GLint)arg1, (GLint)arg2);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireConeCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();

	glutWireCone((GLdouble)arg0, (GLdouble)arg1, (GLint)arg2, (GLint)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidConeCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();

	glutSolidCone((GLdouble)arg0, (GLdouble)arg1, (GLint)arg2, (GLint)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireCubeCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	double arg0 = args[0]->NumberValue();

	glutWireCube((GLdouble)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidCubeCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	double arg0 = args[0]->NumberValue();

	glutSolidCube((GLdouble)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireTorusCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();

	glutWireTorus((GLdouble)arg0, (GLdouble)arg1, (GLint)arg2, (GLint)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidTorusCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	double arg0 = args[0]->NumberValue();
	double arg1 = args[1]->NumberValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();

	glutSolidTorus((GLdouble)arg0, (GLdouble)arg1, (GLint)arg2, (GLint)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireDodecahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutWireDodecahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidDodecahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutSolidDodecahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireTeapotCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	double arg0 = args[0]->NumberValue();

	glutWireTeapot((GLdouble)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidTeapotCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	double arg0 = args[0]->NumberValue();

	glutSolidTeapot((GLdouble)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireOctahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutWireOctahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidOctahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutSolidOctahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireTetrahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutWireTetrahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidTetrahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutSolidTetrahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTWireIcosahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutWireIcosahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSolidIcosahedronCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutSolidIcosahedron();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTVideoResizeGetCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutVideoResizeGet((GLenum)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetupVideoResizingCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutSetupVideoResizing();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTStopVideoResizingCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutStopVideoResizing();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTVideoResizeCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();

	glutVideoResize((int)arg0, (int)arg1, (int)arg2, (int)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTVideoPanCallback(const v8::Arguments& args) {

	if (args.Length() < 4) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();
	int arg1 = args[1]->IntegerValue();
	int arg2 = args[2]->IntegerValue();
	int arg3 = args[3]->IntegerValue();

	glutVideoPan((int)arg0, (int)arg1, (int)arg2, (int)arg3);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTReportErrorsCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutReportErrors();

	return v8::Undefined();
}

v8::Handle<v8::Value> GetGLUT_KEY_REPEAT_OFF(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_REPEAT_OFF);
}

v8::Handle<v8::Value> GetGLUT_KEY_REPEAT_ON(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_REPEAT_ON);
}

v8::Handle<v8::Value> GetGLUT_KEY_REPEAT_DEFAULT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_KEY_REPEAT_DEFAULT);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_BUTTON_A(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_BUTTON_A);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_BUTTON_B(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_BUTTON_B);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_BUTTON_C(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_BUTTON_C);
}

v8::Handle<v8::Value> GetGLUT_JOYSTICK_BUTTON_D(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_JOYSTICK_BUTTON_D);
}

v8::Handle<v8::Value> GLUTIgnoreKeyRepeatCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutIgnoreKeyRepeat((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTSetKeyRepeatCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutSetKeyRepeat((int)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTForceJoystickFuncCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutForceJoystickFunc();

	return v8::Undefined();
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_ACTIVE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_ACTIVE);
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_POSSIBLE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_POSSIBLE);
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_WIDTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_WIDTH);
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_HEIGHT(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_HEIGHT);
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_PIXEL_DEPTH(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_PIXEL_DEPTH);
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_REFRESH_RATE(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_REFRESH_RATE);
}

v8::Handle<v8::Value> GetGLUT_GAME_MODE_DISPLAY_CHANGED(v8::Local<v8::String> property, const v8::AccessorInfo &info) {
	return v8::Uint32::New(GLUT_GAME_MODE_DISPLAY_CHANGED);
}

v8::Handle<v8::Value> GLUTGameModeStringCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	v8::String::Utf8Value value0(args[0]);
	char* arg0 = *value0;

	glutGameModeString((const char*)arg0);

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTEnterGameModeCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutEnterGameMode();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTLeaveGameModeCallback(const v8::Arguments& args) {

	if (args.Length() < 0) return v8::Undefined();

	glutLeaveGameMode();

	return v8::Undefined();
}

v8::Handle<v8::Value> GLUTGameModeGetCallback(const v8::Arguments& args) {

	if (args.Length() < 1) return v8::Undefined();

	int arg0 = args[0]->IntegerValue();

	glutGameModeGet((GLenum)arg0);

	return v8::Undefined();
}



v8::Handle<v8::ObjectTemplate> GlutFactory::createGlut(int* pargc, char** argv) {

	pargc_ = pargc;
	argv_  = argv;
      
	v8::HandleScope scope;
	v8::Handle<v8::ObjectTemplate> Glut = v8::ObjectTemplate::New();

	Glut->SetInternalFieldCount(1);

     font_["STROKE_ROMAN"] = GLUT_STROKE_ROMAN;

     font_["STROKE_MONO_ROMAN"] = GLUT_STROKE_MONO_ROMAN;

     font_["BITMAP_9_BY_15"] = GLUT_BITMAP_9_BY_15;

     font_["BITMAP_8_BY_13"] = GLUT_BITMAP_8_BY_13;

     font_["BITMAP_TIMES_ROMAN_10"] = GLUT_BITMAP_TIMES_ROMAN_10;

     font_["BITMAP_TIMES_ROMAN_24"] = GLUT_BITMAP_TIMES_ROMAN_24;

     font_["BITMAP_HELVETICA_10"] = GLUT_BITMAP_HELVETICA_10;

     font_["BITMAP_HELVETICA_12"] = GLUT_BITMAP_HELVETICA_12;

     font_["BITMAP_HELVETICA_18"] = GLUT_BITMAP_HELVETICA_18;
     Glut->SetAccessor(v8::String::NewSymbol("APIENTRY_DEFINED"), GetGLUT_APIENTRY_DEFINED);

     Glut->SetAccessor(v8::String::NewSymbol("WINGDIAPI_DEFINED"), GetGLUT_WINGDIAPI_DEFINED);

     Glut->SetAccessor(v8::String::NewSymbol("API_VERSION"), GetGLUT_API_VERSION);

     Glut->SetAccessor(v8::String::NewSymbol("XLIB_IMPLEMENTATION"), GetGLUT_XLIB_IMPLEMENTATION);

     Glut->SetAccessor(v8::String::NewSymbol("MACOSX_IMPLEMENTATION"), GetGLUT_MACOSX_IMPLEMENTATION);

     Glut->SetAccessor(v8::String::NewSymbol("RGB"), GetGLUT_RGB);

     Glut->SetAccessor(v8::String::NewSymbol("RGBA"), GetGLUT_RGBA);

     Glut->SetAccessor(v8::String::NewSymbol("INDEX"), GetGLUT_INDEX);

     Glut->SetAccessor(v8::String::NewSymbol("SINGLE"), GetGLUT_SINGLE);

     Glut->SetAccessor(v8::String::NewSymbol("DOUBLE"), GetGLUT_DOUBLE);

     Glut->SetAccessor(v8::String::NewSymbol("ACCUM"), GetGLUT_ACCUM);

     Glut->SetAccessor(v8::String::NewSymbol("ALPHA"), GetGLUT_ALPHA);

     Glut->SetAccessor(v8::String::NewSymbol("DEPTH"), GetGLUT_DEPTH);

     Glut->SetAccessor(v8::String::NewSymbol("STENCIL"), GetGLUT_STENCIL);

     Glut->SetAccessor(v8::String::NewSymbol("MULTISAMPLE"), GetGLUT_MULTISAMPLE);

     Glut->SetAccessor(v8::String::NewSymbol("STEREO"), GetGLUT_STEREO);

     Glut->SetAccessor(v8::String::NewSymbol("LUMINANCE"), GetGLUT_LUMINANCE);

     Glut->SetAccessor(v8::String::NewSymbol("NO_RECOVERY"), GetGLUT_NO_RECOVERY);

     Glut->SetAccessor(v8::String::NewSymbol("LEFT_BUTTON"), GetGLUT_LEFT_BUTTON);

     Glut->SetAccessor(v8::String::NewSymbol("MIDDLE_BUTTON"), GetGLUT_MIDDLE_BUTTON);

     Glut->SetAccessor(v8::String::NewSymbol("RIGHT_BUTTON"), GetGLUT_RIGHT_BUTTON);

     Glut->SetAccessor(v8::String::NewSymbol("DOWN"), GetGLUT_DOWN);

     Glut->SetAccessor(v8::String::NewSymbol("UP"), GetGLUT_UP);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F1"), GetGLUT_KEY_F1);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F2"), GetGLUT_KEY_F2);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F3"), GetGLUT_KEY_F3);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F4"), GetGLUT_KEY_F4);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F5"), GetGLUT_KEY_F5);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F6"), GetGLUT_KEY_F6);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F7"), GetGLUT_KEY_F7);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F8"), GetGLUT_KEY_F8);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F9"), GetGLUT_KEY_F9);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F10"), GetGLUT_KEY_F10);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F11"), GetGLUT_KEY_F11);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_F12"), GetGLUT_KEY_F12);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_LEFT"), GetGLUT_KEY_LEFT);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_UP"), GetGLUT_KEY_UP);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_RIGHT"), GetGLUT_KEY_RIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_DOWN"), GetGLUT_KEY_DOWN);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_PAGE_UP"), GetGLUT_KEY_PAGE_UP);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_PAGE_DOWN"), GetGLUT_KEY_PAGE_DOWN);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_HOME"), GetGLUT_KEY_HOME);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_END"), GetGLUT_KEY_END);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_INSERT"), GetGLUT_KEY_INSERT);

     Glut->SetAccessor(v8::String::NewSymbol("LEFT"), GetGLUT_LEFT);

     Glut->SetAccessor(v8::String::NewSymbol("ENTERED"), GetGLUT_ENTERED);

     Glut->SetAccessor(v8::String::NewSymbol("MENU_NOT_IN_USE"), GetGLUT_MENU_NOT_IN_USE);

     Glut->SetAccessor(v8::String::NewSymbol("MENU_IN_USE"), GetGLUT_MENU_IN_USE);

     Glut->SetAccessor(v8::String::NewSymbol("NOT_VISIBLE"), GetGLUT_NOT_VISIBLE);

     Glut->SetAccessor(v8::String::NewSymbol("VISIBLE"), GetGLUT_VISIBLE);

     Glut->SetAccessor(v8::String::NewSymbol("HIDDEN"), GetGLUT_HIDDEN);

     Glut->SetAccessor(v8::String::NewSymbol("FULLY_RETAINED"), GetGLUT_FULLY_RETAINED);

     Glut->SetAccessor(v8::String::NewSymbol("PARTIALLY_RETAINED"), GetGLUT_PARTIALLY_RETAINED);

     Glut->SetAccessor(v8::String::NewSymbol("FULLY_COVERED"), GetGLUT_FULLY_COVERED);

     Glut->SetAccessor(v8::String::NewSymbol("RED"), GetGLUT_RED);

     Glut->SetAccessor(v8::String::NewSymbol("GREEN"), GetGLUT_GREEN);

     Glut->SetAccessor(v8::String::NewSymbol("BLUE"), GetGLUT_BLUE);

     Glut->SetAccessor(v8::String::NewSymbol("NORMAL"), GetGLUT_NORMAL);

     Glut->SetAccessor(v8::String::NewSymbol("OVERLAY"), GetGLUT_OVERLAY);

     Glut->SetAccessor(v8::String::NewSymbol("STROKE_ROMAN"), GetGLUT_STROKE_ROMAN);

     Glut->SetAccessor(v8::String::NewSymbol("STROKE_MONO_ROMAN"), GetGLUT_STROKE_MONO_ROMAN);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_9_BY_15"), GetGLUT_BITMAP_9_BY_15);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_8_BY_13"), GetGLUT_BITMAP_8_BY_13);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_TIMES_ROMAN_10"), GetGLUT_BITMAP_TIMES_ROMAN_10);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_TIMES_ROMAN_24"), GetGLUT_BITMAP_TIMES_ROMAN_24);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_HELVETICA_10"), GetGLUT_BITMAP_HELVETICA_10);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_HELVETICA_12"), GetGLUT_BITMAP_HELVETICA_12);

     Glut->SetAccessor(v8::String::NewSymbol("BITMAP_HELVETICA_18"), GetGLUT_BITMAP_HELVETICA_18);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_X"), GetGLUT_WINDOW_X);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_Y"), GetGLUT_WINDOW_Y);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_WIDTH"), GetGLUT_WINDOW_WIDTH);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_HEIGHT"), GetGLUT_WINDOW_HEIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_BUFFER_SIZE"), GetGLUT_WINDOW_BUFFER_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_STENCIL_SIZE"), GetGLUT_WINDOW_STENCIL_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_DEPTH_SIZE"), GetGLUT_WINDOW_DEPTH_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_RED_SIZE"), GetGLUT_WINDOW_RED_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_GREEN_SIZE"), GetGLUT_WINDOW_GREEN_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_BLUE_SIZE"), GetGLUT_WINDOW_BLUE_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_ALPHA_SIZE"), GetGLUT_WINDOW_ALPHA_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_ACCUM_RED_SIZE"), GetGLUT_WINDOW_ACCUM_RED_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_ACCUM_GREEN_SIZE"), GetGLUT_WINDOW_ACCUM_GREEN_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_ACCUM_BLUE_SIZE"), GetGLUT_WINDOW_ACCUM_BLUE_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_ACCUM_ALPHA_SIZE"), GetGLUT_WINDOW_ACCUM_ALPHA_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_DOUBLEBUFFER"), GetGLUT_WINDOW_DOUBLEBUFFER);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_RGBA"), GetGLUT_WINDOW_RGBA);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_PARENT"), GetGLUT_WINDOW_PARENT);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_NUM_CHILDREN"), GetGLUT_WINDOW_NUM_CHILDREN);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_COLORMAP_SIZE"), GetGLUT_WINDOW_COLORMAP_SIZE);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_NUM_SAMPLES"), GetGLUT_WINDOW_NUM_SAMPLES);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_STEREO"), GetGLUT_WINDOW_STEREO);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_CURSOR"), GetGLUT_WINDOW_CURSOR);

     Glut->SetAccessor(v8::String::NewSymbol("SCREEN_WIDTH"), GetGLUT_SCREEN_WIDTH);

     Glut->SetAccessor(v8::String::NewSymbol("SCREEN_HEIGHT"), GetGLUT_SCREEN_HEIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("SCREEN_WIDTH_MM"), GetGLUT_SCREEN_WIDTH_MM);

     Glut->SetAccessor(v8::String::NewSymbol("SCREEN_HEIGHT_MM"), GetGLUT_SCREEN_HEIGHT_MM);

     Glut->SetAccessor(v8::String::NewSymbol("MENU_NUM_ITEMS"), GetGLUT_MENU_NUM_ITEMS);

     Glut->SetAccessor(v8::String::NewSymbol("DISPLAY_MODE_POSSIBLE"), GetGLUT_DISPLAY_MODE_POSSIBLE);

     Glut->SetAccessor(v8::String::NewSymbol("INIT_WINDOW_X"), GetGLUT_INIT_WINDOW_X);

     Glut->SetAccessor(v8::String::NewSymbol("INIT_WINDOW_Y"), GetGLUT_INIT_WINDOW_Y);

     Glut->SetAccessor(v8::String::NewSymbol("INIT_WINDOW_WIDTH"), GetGLUT_INIT_WINDOW_WIDTH);

     Glut->SetAccessor(v8::String::NewSymbol("INIT_WINDOW_HEIGHT"), GetGLUT_INIT_WINDOW_HEIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("INIT_DISPLAY_MODE"), GetGLUT_INIT_DISPLAY_MODE);

     Glut->SetAccessor(v8::String::NewSymbol("ELAPSED_TIME"), GetGLUT_ELAPSED_TIME);

     Glut->SetAccessor(v8::String::NewSymbol("WINDOW_FORMAT_ID"), GetGLUT_WINDOW_FORMAT_ID);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_KEYBOARD"), GetGLUT_HAS_KEYBOARD);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_MOUSE"), GetGLUT_HAS_MOUSE);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_SPACEBALL"), GetGLUT_HAS_SPACEBALL);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_DIAL_AND_BUTTON_BOX"), GetGLUT_HAS_DIAL_AND_BUTTON_BOX);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_TABLET"), GetGLUT_HAS_TABLET);

     Glut->SetAccessor(v8::String::NewSymbol("NUM_MOUSE_BUTTONS"), GetGLUT_NUM_MOUSE_BUTTONS);

     Glut->SetAccessor(v8::String::NewSymbol("NUM_SPACEBALL_BUTTONS"), GetGLUT_NUM_SPACEBALL_BUTTONS);

     Glut->SetAccessor(v8::String::NewSymbol("NUM_BUTTON_BOX_BUTTONS"), GetGLUT_NUM_BUTTON_BOX_BUTTONS);

     Glut->SetAccessor(v8::String::NewSymbol("NUM_DIALS"), GetGLUT_NUM_DIALS);

     Glut->SetAccessor(v8::String::NewSymbol("NUM_TABLET_BUTTONS"), GetGLUT_NUM_TABLET_BUTTONS);

     Glut->SetAccessor(v8::String::NewSymbol("DEVICE_IGNORE_KEY_REPEAT"), GetGLUT_DEVICE_IGNORE_KEY_REPEAT);

     Glut->SetAccessor(v8::String::NewSymbol("DEVICE_KEY_REPEAT"), GetGLUT_DEVICE_KEY_REPEAT);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_JOYSTICK"), GetGLUT_HAS_JOYSTICK);

     Glut->SetAccessor(v8::String::NewSymbol("OWNS_JOYSTICK"), GetGLUT_OWNS_JOYSTICK);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_BUTTONS"), GetGLUT_JOYSTICK_BUTTONS);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_AXES"), GetGLUT_JOYSTICK_AXES);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_POLL_RATE"), GetGLUT_JOYSTICK_POLL_RATE);

     Glut->SetAccessor(v8::String::NewSymbol("OVERLAY_POSSIBLE"), GetGLUT_OVERLAY_POSSIBLE);

     Glut->SetAccessor(v8::String::NewSymbol("LAYER_IN_USE"), GetGLUT_LAYER_IN_USE);

     Glut->SetAccessor(v8::String::NewSymbol("HAS_OVERLAY"), GetGLUT_HAS_OVERLAY);

     Glut->SetAccessor(v8::String::NewSymbol("TRANSPARENT_INDEX"), GetGLUT_TRANSPARENT_INDEX);

     Glut->SetAccessor(v8::String::NewSymbol("NORMAL_DAMAGED"), GetGLUT_NORMAL_DAMAGED);

     Glut->SetAccessor(v8::String::NewSymbol("OVERLAY_DAMAGED"), GetGLUT_OVERLAY_DAMAGED);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_POSSIBLE"), GetGLUT_VIDEO_RESIZE_POSSIBLE);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_IN_USE"), GetGLUT_VIDEO_RESIZE_IN_USE);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_X_DELTA"), GetGLUT_VIDEO_RESIZE_X_DELTA);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_Y_DELTA"), GetGLUT_VIDEO_RESIZE_Y_DELTA);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_WIDTH_DELTA"), GetGLUT_VIDEO_RESIZE_WIDTH_DELTA);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_HEIGHT_DELTA"), GetGLUT_VIDEO_RESIZE_HEIGHT_DELTA);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_X"), GetGLUT_VIDEO_RESIZE_X);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_Y"), GetGLUT_VIDEO_RESIZE_Y);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_WIDTH"), GetGLUT_VIDEO_RESIZE_WIDTH);

     Glut->SetAccessor(v8::String::NewSymbol("VIDEO_RESIZE_HEIGHT"), GetGLUT_VIDEO_RESIZE_HEIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("ACTIVE_SHIFT"), GetGLUT_ACTIVE_SHIFT);

     Glut->SetAccessor(v8::String::NewSymbol("ACTIVE_CTRL"), GetGLUT_ACTIVE_CTRL);

     Glut->SetAccessor(v8::String::NewSymbol("ACTIVE_ALT"), GetGLUT_ACTIVE_ALT);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_RIGHT_ARROW"), GetGLUT_CURSOR_RIGHT_ARROW);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_LEFT_ARROW"), GetGLUT_CURSOR_LEFT_ARROW);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_INFO"), GetGLUT_CURSOR_INFO);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_DESTROY"), GetGLUT_CURSOR_DESTROY);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_HELP"), GetGLUT_CURSOR_HELP);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_CYCLE"), GetGLUT_CURSOR_CYCLE);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_SPRAY"), GetGLUT_CURSOR_SPRAY);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_WAIT"), GetGLUT_CURSOR_WAIT);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_TEXT"), GetGLUT_CURSOR_TEXT);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_CROSSHAIR"), GetGLUT_CURSOR_CROSSHAIR);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_UP_DOWN"), GetGLUT_CURSOR_UP_DOWN);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_LEFT_RIGHT"), GetGLUT_CURSOR_LEFT_RIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_TOP_SIDE"), GetGLUT_CURSOR_TOP_SIDE);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_BOTTOM_SIDE"), GetGLUT_CURSOR_BOTTOM_SIDE);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_LEFT_SIDE"), GetGLUT_CURSOR_LEFT_SIDE);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_RIGHT_SIDE"), GetGLUT_CURSOR_RIGHT_SIDE);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_TOP_LEFT_CORNER"), GetGLUT_CURSOR_TOP_LEFT_CORNER);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_TOP_RIGHT_CORNER"), GetGLUT_CURSOR_TOP_RIGHT_CORNER);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_BOTTOM_RIGHT_CORNER"), GetGLUT_CURSOR_BOTTOM_RIGHT_CORNER);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_BOTTOM_LEFT_CORNER"), GetGLUT_CURSOR_BOTTOM_LEFT_CORNER);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_INHERIT"), GetGLUT_CURSOR_INHERIT);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_NONE"), GetGLUT_CURSOR_NONE);

     Glut->SetAccessor(v8::String::NewSymbol("CURSOR_FULL_CROSSHAIR"), GetGLUT_CURSOR_FULL_CROSSHAIR);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_REPEAT_OFF"), GetGLUT_KEY_REPEAT_OFF);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_REPEAT_ON"), GetGLUT_KEY_REPEAT_ON);

     Glut->SetAccessor(v8::String::NewSymbol("KEY_REPEAT_DEFAULT"), GetGLUT_KEY_REPEAT_DEFAULT);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_BUTTON_A"), GetGLUT_JOYSTICK_BUTTON_A);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_BUTTON_B"), GetGLUT_JOYSTICK_BUTTON_B);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_BUTTON_C"), GetGLUT_JOYSTICK_BUTTON_C);

     Glut->SetAccessor(v8::String::NewSymbol("JOYSTICK_BUTTON_D"), GetGLUT_JOYSTICK_BUTTON_D);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_ACTIVE"), GetGLUT_GAME_MODE_ACTIVE);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_POSSIBLE"), GetGLUT_GAME_MODE_POSSIBLE);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_WIDTH"), GetGLUT_GAME_MODE_WIDTH);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_HEIGHT"), GetGLUT_GAME_MODE_HEIGHT);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_PIXEL_DEPTH"), GetGLUT_GAME_MODE_PIXEL_DEPTH);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_REFRESH_RATE"), GetGLUT_GAME_MODE_REFRESH_RATE);

     Glut->SetAccessor(v8::String::NewSymbol("GAME_MODE_DISPLAY_CHANGED"), GetGLUT_GAME_MODE_DISPLAY_CHANGED);
     Glut->Set(v8::String::NewSymbol("init"), v8::FunctionTemplate::New(GLUTInitCallback));

     Glut->Set(v8::String::NewSymbol("initDisplayMode"), v8::FunctionTemplate::New(GLUTInitDisplayModeCallback));

     Glut->Set(v8::String::NewSymbol("initDisplayString"), v8::FunctionTemplate::New(GLUTInitDisplayStringCallback));

     Glut->Set(v8::String::NewSymbol("initWindowPosition"), v8::FunctionTemplate::New(GLUTInitWindowPositionCallback));

     Glut->Set(v8::String::NewSymbol("initWindowSize"), v8::FunctionTemplate::New(GLUTInitWindowSizeCallback));

     Glut->Set(v8::String::NewSymbol("mainLoop"), v8::FunctionTemplate::New(GLUTMainLoopCallback));

     Glut->Set(v8::String::NewSymbol("createWindow"), v8::FunctionTemplate::New(GLUTCreateWindowCallback));

     Glut->Set(v8::String::NewSymbol("createSubWindow"), v8::FunctionTemplate::New(GLUTCreateSubWindowCallback));

     Glut->Set(v8::String::NewSymbol("destroyWindow"), v8::FunctionTemplate::New(GLUTDestroyWindowCallback));

     Glut->Set(v8::String::NewSymbol("postRedisplay"), v8::FunctionTemplate::New(GLUTPostRedisplayCallback));

     Glut->Set(v8::String::NewSymbol("postWindowRedisplay"), v8::FunctionTemplate::New(GLUTPostWindowRedisplayCallback));

     Glut->Set(v8::String::NewSymbol("swapBuffers"), v8::FunctionTemplate::New(GLUTSwapBuffersCallback));

     Glut->Set(v8::String::NewSymbol("getWindow"), v8::FunctionTemplate::New(GLUTGetWindowCallback));

     Glut->Set(v8::String::NewSymbol("setWindow"), v8::FunctionTemplate::New(GLUTSetWindowCallback));

     Glut->Set(v8::String::NewSymbol("setWindowTitle"), v8::FunctionTemplate::New(GLUTSetWindowTitleCallback));

     Glut->Set(v8::String::NewSymbol("setIconTitle"), v8::FunctionTemplate::New(GLUTSetIconTitleCallback));

     Glut->Set(v8::String::NewSymbol("positionWindow"), v8::FunctionTemplate::New(GLUTPositionWindowCallback));

     Glut->Set(v8::String::NewSymbol("reshapeWindow"), v8::FunctionTemplate::New(GLUTReshapeWindowCallback));

     Glut->Set(v8::String::NewSymbol("popWindow"), v8::FunctionTemplate::New(GLUTPopWindowCallback));

     Glut->Set(v8::String::NewSymbol("pushWindow"), v8::FunctionTemplate::New(GLUTPushWindowCallback));

     Glut->Set(v8::String::NewSymbol("iconifyWindow"), v8::FunctionTemplate::New(GLUTIconifyWindowCallback));

     Glut->Set(v8::String::NewSymbol("showWindow"), v8::FunctionTemplate::New(GLUTShowWindowCallback));

     Glut->Set(v8::String::NewSymbol("hideWindow"), v8::FunctionTemplate::New(GLUTHideWindowCallback));

     Glut->Set(v8::String::NewSymbol("fullScreen"), v8::FunctionTemplate::New(GLUTFullScreenCallback));

     Glut->Set(v8::String::NewSymbol("setCursor"), v8::FunctionTemplate::New(GLUTSetCursorCallback));

     Glut->Set(v8::String::NewSymbol("warpPointer"), v8::FunctionTemplate::New(GLUTWarpPointerCallback));

     Glut->Set(v8::String::NewSymbol("wMCloseFunc"), v8::FunctionTemplate::New(GLUTWMCloseFuncCallback));

     Glut->Set(v8::String::NewSymbol("checkLoop"), v8::FunctionTemplate::New(GLUTCheckLoopCallback));

     Glut->Set(v8::String::NewSymbol("establishOverlay"), v8::FunctionTemplate::New(GLUTEstablishOverlayCallback));

     Glut->Set(v8::String::NewSymbol("removeOverlay"), v8::FunctionTemplate::New(GLUTRemoveOverlayCallback));

     Glut->Set(v8::String::NewSymbol("useLayer"), v8::FunctionTemplate::New(GLUTUseLayerCallback));

     Glut->Set(v8::String::NewSymbol("postOverlayRedisplay"), v8::FunctionTemplate::New(GLUTPostOverlayRedisplayCallback));

     Glut->Set(v8::String::NewSymbol("postWindowOverlayRedisplay"), v8::FunctionTemplate::New(GLUTPostWindowOverlayRedisplayCallback));

     Glut->Set(v8::String::NewSymbol("showOverlay"), v8::FunctionTemplate::New(GLUTShowOverlayCallback));

     Glut->Set(v8::String::NewSymbol("hideOverlay"), v8::FunctionTemplate::New(GLUTHideOverlayCallback));

     Glut->Set(v8::String::NewSymbol("createMenu"), v8::FunctionTemplate::New(GLUTCreateMenuCallback));

     Glut->Set(v8::String::NewSymbol("destroyMenu"), v8::FunctionTemplate::New(GLUTDestroyMenuCallback));

     Glut->Set(v8::String::NewSymbol("getMenu"), v8::FunctionTemplate::New(GLUTGetMenuCallback));

     Glut->Set(v8::String::NewSymbol("setMenu"), v8::FunctionTemplate::New(GLUTSetMenuCallback));

     Glut->Set(v8::String::NewSymbol("addMenuEntry"), v8::FunctionTemplate::New(GLUTAddMenuEntryCallback));

     Glut->Set(v8::String::NewSymbol("addSubMenu"), v8::FunctionTemplate::New(GLUTAddSubMenuCallback));

     Glut->Set(v8::String::NewSymbol("changeToMenuEntry"), v8::FunctionTemplate::New(GLUTChangeToMenuEntryCallback));

     Glut->Set(v8::String::NewSymbol("changeToSubMenu"), v8::FunctionTemplate::New(GLUTChangeToSubMenuCallback));

     Glut->Set(v8::String::NewSymbol("removeMenuItem"), v8::FunctionTemplate::New(GLUTRemoveMenuItemCallback));

     Glut->Set(v8::String::NewSymbol("attachMenu"), v8::FunctionTemplate::New(GLUTAttachMenuCallback));

     Glut->Set(v8::String::NewSymbol("detachMenu"), v8::FunctionTemplate::New(GLUTDetachMenuCallback));

     Glut->Set(v8::String::NewSymbol("displayFunc"), v8::FunctionTemplate::New(GLUTDisplayFuncCallback));

     Glut->Set(v8::String::NewSymbol("reshapeFunc"), v8::FunctionTemplate::New(GLUTReshapeFuncCallback));

     Glut->Set(v8::String::NewSymbol("keyboardFunc"), v8::FunctionTemplate::New(GLUTKeyboardFuncCallback));

     Glut->Set(v8::String::NewSymbol("mouseFunc"), v8::FunctionTemplate::New(GLUTMouseFuncCallback));

     Glut->Set(v8::String::NewSymbol("motionFunc"), v8::FunctionTemplate::New(GLUTMotionFuncCallback));

     Glut->Set(v8::String::NewSymbol("passiveMotionFunc"), v8::FunctionTemplate::New(GLUTPassiveMotionFuncCallback));

     Glut->Set(v8::String::NewSymbol("entryFunc"), v8::FunctionTemplate::New(GLUTEntryFuncCallback));

     Glut->Set(v8::String::NewSymbol("visibilityFunc"), v8::FunctionTemplate::New(GLUTVisibilityFuncCallback));

     Glut->Set(v8::String::NewSymbol("idleFunc"), v8::FunctionTemplate::New(GLUTIdleFuncCallback));

     Glut->Set(v8::String::NewSymbol("timerFunc"), v8::FunctionTemplate::New(GLUTTimerFuncCallback));

     Glut->Set(v8::String::NewSymbol("menuStateFunc"), v8::FunctionTemplate::New(GLUTMenuStateFuncCallback));

     Glut->Set(v8::String::NewSymbol("specialFunc"), v8::FunctionTemplate::New(GLUTSpecialFuncCallback));

     Glut->Set(v8::String::NewSymbol("spaceballMotionFunc"), v8::FunctionTemplate::New(GLUTSpaceballMotionFuncCallback));

     Glut->Set(v8::String::NewSymbol("spaceballRotateFunc"), v8::FunctionTemplate::New(GLUTSpaceballRotateFuncCallback));

     Glut->Set(v8::String::NewSymbol("spaceballButtonFunc"), v8::FunctionTemplate::New(GLUTSpaceballButtonFuncCallback));

     Glut->Set(v8::String::NewSymbol("buttonBoxFunc"), v8::FunctionTemplate::New(GLUTButtonBoxFuncCallback));

     Glut->Set(v8::String::NewSymbol("dialsFunc"), v8::FunctionTemplate::New(GLUTDialsFuncCallback));

     Glut->Set(v8::String::NewSymbol("tabletMotionFunc"), v8::FunctionTemplate::New(GLUTTabletMotionFuncCallback));

     Glut->Set(v8::String::NewSymbol("tabletButtonFunc"), v8::FunctionTemplate::New(GLUTTabletButtonFuncCallback));

     Glut->Set(v8::String::NewSymbol("menuStatusFunc"), v8::FunctionTemplate::New(GLUTMenuStatusFuncCallback));

     Glut->Set(v8::String::NewSymbol("overlayDisplayFunc"), v8::FunctionTemplate::New(GLUTOverlayDisplayFuncCallback));

     Glut->Set(v8::String::NewSymbol("windowStatusFunc"), v8::FunctionTemplate::New(GLUTWindowStatusFuncCallback));

     Glut->Set(v8::String::NewSymbol("keyboardUpFunc"), v8::FunctionTemplate::New(GLUTKeyboardUpFuncCallback));

     Glut->Set(v8::String::NewSymbol("specialUpFunc"), v8::FunctionTemplate::New(GLUTSpecialUpFuncCallback));

     Glut->Set(v8::String::NewSymbol("joystickFunc"), v8::FunctionTemplate::New(GLUTJoystickFuncCallback));

     Glut->Set(v8::String::NewSymbol("setColor"), v8::FunctionTemplate::New(GLUTSetColorCallback));

     Glut->Set(v8::String::NewSymbol("getColor"), v8::FunctionTemplate::New(GLUTGetColorCallback));

     Glut->Set(v8::String::NewSymbol("copyColormap"), v8::FunctionTemplate::New(GLUTCopyColormapCallback));

     Glut->Set(v8::String::NewSymbol("get"), v8::FunctionTemplate::New(GLUTGetCallback));

     Glut->Set(v8::String::NewSymbol("deviceGet"), v8::FunctionTemplate::New(GLUTDeviceGetCallback));

     Glut->Set(v8::String::NewSymbol("extensionSupported"), v8::FunctionTemplate::New(GLUTExtensionSupportedCallback));

     Glut->Set(v8::String::NewSymbol("getModifiers"), v8::FunctionTemplate::New(GLUTGetModifiersCallback));

     Glut->Set(v8::String::NewSymbol("layerGet"), v8::FunctionTemplate::New(GLUTLayerGetCallback));

     Glut->Set(v8::String::NewSymbol("bitmapCharacter"), v8::FunctionTemplate::New(GLUTBitmapCharacterCallback));

     Glut->Set(v8::String::NewSymbol("bitmapWidth"), v8::FunctionTemplate::New(GLUTBitmapWidthCallback));

     Glut->Set(v8::String::NewSymbol("strokeCharacter"), v8::FunctionTemplate::New(GLUTStrokeCharacterCallback));

     Glut->Set(v8::String::NewSymbol("strokeWidth"), v8::FunctionTemplate::New(GLUTStrokeWidthCallback));

     Glut->Set(v8::String::NewSymbol("bitmapLength"), v8::FunctionTemplate::New(GLUTBitmapLengthCallback));

     Glut->Set(v8::String::NewSymbol("strokeLength"), v8::FunctionTemplate::New(GLUTStrokeLengthCallback));

     Glut->Set(v8::String::NewSymbol("wireSphere"), v8::FunctionTemplate::New(GLUTWireSphereCallback));

     Glut->Set(v8::String::NewSymbol("solidSphere"), v8::FunctionTemplate::New(GLUTSolidSphereCallback));

     Glut->Set(v8::String::NewSymbol("wireCone"), v8::FunctionTemplate::New(GLUTWireConeCallback));

     Glut->Set(v8::String::NewSymbol("solidCone"), v8::FunctionTemplate::New(GLUTSolidConeCallback));

     Glut->Set(v8::String::NewSymbol("wireCube"), v8::FunctionTemplate::New(GLUTWireCubeCallback));

     Glut->Set(v8::String::NewSymbol("solidCube"), v8::FunctionTemplate::New(GLUTSolidCubeCallback));

     Glut->Set(v8::String::NewSymbol("wireTorus"), v8::FunctionTemplate::New(GLUTWireTorusCallback));

     Glut->Set(v8::String::NewSymbol("solidTorus"), v8::FunctionTemplate::New(GLUTSolidTorusCallback));

     Glut->Set(v8::String::NewSymbol("wireDodecahedron"), v8::FunctionTemplate::New(GLUTWireDodecahedronCallback));

     Glut->Set(v8::String::NewSymbol("solidDodecahedron"), v8::FunctionTemplate::New(GLUTSolidDodecahedronCallback));

     Glut->Set(v8::String::NewSymbol("wireTeapot"), v8::FunctionTemplate::New(GLUTWireTeapotCallback));

     Glut->Set(v8::String::NewSymbol("solidTeapot"), v8::FunctionTemplate::New(GLUTSolidTeapotCallback));

     Glut->Set(v8::String::NewSymbol("wireOctahedron"), v8::FunctionTemplate::New(GLUTWireOctahedronCallback));

     Glut->Set(v8::String::NewSymbol("solidOctahedron"), v8::FunctionTemplate::New(GLUTSolidOctahedronCallback));

     Glut->Set(v8::String::NewSymbol("wireTetrahedron"), v8::FunctionTemplate::New(GLUTWireTetrahedronCallback));

     Glut->Set(v8::String::NewSymbol("solidTetrahedron"), v8::FunctionTemplate::New(GLUTSolidTetrahedronCallback));

     Glut->Set(v8::String::NewSymbol("wireIcosahedron"), v8::FunctionTemplate::New(GLUTWireIcosahedronCallback));

     Glut->Set(v8::String::NewSymbol("solidIcosahedron"), v8::FunctionTemplate::New(GLUTSolidIcosahedronCallback));

     Glut->Set(v8::String::NewSymbol("videoResizeGet"), v8::FunctionTemplate::New(GLUTVideoResizeGetCallback));

     Glut->Set(v8::String::NewSymbol("setupVideoResizing"), v8::FunctionTemplate::New(GLUTSetupVideoResizingCallback));

     Glut->Set(v8::String::NewSymbol("stopVideoResizing"), v8::FunctionTemplate::New(GLUTStopVideoResizingCallback));

     Glut->Set(v8::String::NewSymbol("videoResize"), v8::FunctionTemplate::New(GLUTVideoResizeCallback));

     Glut->Set(v8::String::NewSymbol("videoPan"), v8::FunctionTemplate::New(GLUTVideoPanCallback));

     Glut->Set(v8::String::NewSymbol("reportErrors"), v8::FunctionTemplate::New(GLUTReportErrorsCallback));

     Glut->Set(v8::String::NewSymbol("ignoreKeyRepeat"), v8::FunctionTemplate::New(GLUTIgnoreKeyRepeatCallback));

     Glut->Set(v8::String::NewSymbol("setKeyRepeat"), v8::FunctionTemplate::New(GLUTSetKeyRepeatCallback));

     Glut->Set(v8::String::NewSymbol("forceJoystickFunc"), v8::FunctionTemplate::New(GLUTForceJoystickFuncCallback));

     Glut->Set(v8::String::NewSymbol("gameModeString"), v8::FunctionTemplate::New(GLUTGameModeStringCallback));

     Glut->Set(v8::String::NewSymbol("enterGameMode"), v8::FunctionTemplate::New(GLUTEnterGameModeCallback));

     Glut->Set(v8::String::NewSymbol("leaveGameMode"), v8::FunctionTemplate::New(GLUTLeaveGameModeCallback));

     Glut->Set(v8::String::NewSymbol("gameModeGet"), v8::FunctionTemplate::New(GLUTGameModeGetCallback));


	return scope.Close(Glut);

}    
