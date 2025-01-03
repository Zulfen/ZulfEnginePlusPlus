#pragma once

class WindowImpl {
public:
	virtual ~WindowImpl() = default; // Provide an inline implementation

	WindowImpl(int width, int height, const char* title)
		: width(width), height(height), title(title) {}

	virtual void Show() = 0;
	virtual void Destroy() {}

protected:
	int width;
	int height;
	const char* title;
};
