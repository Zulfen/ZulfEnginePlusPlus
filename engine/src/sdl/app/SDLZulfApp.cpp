#include "sdl/app/SDLZulfApp.h"

#include <iostream>
#include <SDL.h>
#include <SDL_events.h>
#include <event/ZulfApplicationEvent.h>
#include <event/ZulfKeyboardEvent.h>
#include "sdl/event/SDLKey.h"
#include "sdl/window/SDLWindow.h"


namespace ZulfEngine {

    std::unique_ptr<WindowImpl> SDLZulfApp::CreateWindowImpl(int width, int height, const char *title) {
        return std::make_unique<SDLWindow>(width, height, title);
    }

    SDLZulfApp::SDLZulfApp() {
        SDL_Init(SDL_INIT_EVERYTHING);
    }

    void SDLZulfApp::Update() {
        SDL_Event sdlEvent;
        while (running) {
            while (SDL_PollEvent(&sdlEvent)) {
                switch (sdlEvent.type) {
                    case SDL_QUIT: {
                        WindowCloseEvent windowCloseEvent;
                        eventDispatcher->DispatchEvent(windowCloseEvent);
                        running = false;
                        break;
                    }
                    case SDL_KEYDOWN: {
                        const ZulfKey key = TranslateSDLKey(sdlEvent.key.keysym.sym);
                        KeyDownEvent keyDownEvent(key);
                        eventDispatcher->DispatchEvent(keyDownEvent);
                    }
                    default:
                        break;
                }
            }
        }
    }

    SDLZulfApp::~SDLZulfApp()  {
        if (window) {
            window->Destroy();
        }
        std::cout << "sdl app deleted" << std::endl;
        SDL_Quit();
    }

}
