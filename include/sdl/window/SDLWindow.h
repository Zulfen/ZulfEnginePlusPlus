#pragma once
#include "Graphics/window/WindowImpl.h"
#include "core/"


namespace ZulfEngine {

	namespace SDL {

		class SDLWindow : public WindowImpl {
			WindowRef CreateWindow();
		};

	}
	
}
