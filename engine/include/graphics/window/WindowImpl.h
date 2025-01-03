#pragma once

class WindowImpl {

public:

	struct WindowRef {
		int height;
		int width;
	};

	WindowImpl(int width, int height, const char* title);
	virtual ~WindowImpl();

	virtual WindowRef CreateWindow() = 0;
	virtual void DestroyWindow() = 0;

protected:
	int width;
	int height;
	const char* title;
};

