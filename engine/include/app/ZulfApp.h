#pragma once
#include <memory>

#include "graphics/window/WindowImpl.h"

namespace ZulfEngine {
    class ZulfApp {
    public:

        virtual ~ZulfApp() = default;

        virtual void Update() = 0;

        virtual WindowImpl* GetWindow() {
            return window ? window.get() : nullptr;
        }

        void CreateWindow(int width, int height, const char* title);

        static std::unique_ptr<ZulfApp> createApplication();

    protected:
        virtual std::unique_ptr<WindowImpl> CreateWindowImpl(int width, int height, const char* title) = 0;
        std::unique_ptr<WindowImpl> window;
    };

};
