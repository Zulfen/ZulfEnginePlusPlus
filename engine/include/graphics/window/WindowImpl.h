#pragma once

namespace ZulfEngine {

	class WindowImpl {
	public:
		virtual ~WindowImpl() = default;

		WindowImpl(int width, int height, const char* title)
			: width(width), height(height), title(title) {}

		virtual void Show() = 0;
		virtual void Destroy() = 0;

	protected:
		int width;
		int height;
		const char* title;
	};


}
