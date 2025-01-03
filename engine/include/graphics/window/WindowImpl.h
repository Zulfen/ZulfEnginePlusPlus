#pragma once

class WindowImpl {

public:

	virtual ~WindowImpl(); // Pure virtual destructor

	WindowImpl(int width, int height, const char* title);

	virtual void Show() = 0;
	virtual void Destroy() = 0;

protected:
	int width;
	int height;
	const char* title;
};
