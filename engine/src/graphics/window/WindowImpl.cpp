#include "graphics/window/WindowImpl.h"


WindowImpl::WindowImpl(int width, int height, const char* title)
    : width(width), height(height), title(title) {
}

WindowImpl::~WindowImpl() = default;

void WindowImpl::Destroy() {

}
