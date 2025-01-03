#include "graphics/window/WindowImpl.h"


WindowImpl::WindowImpl(int w, int h, const char* t) {
	width = w;
	height = h;
	title = t;
}

WindowImpl::~WindowImpl()
{
	WindowImpl::DestroyWindow();
}


