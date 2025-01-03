#pragma once
#include <SDL_events.h>
#include <ZulfEngine.h>

class SDLZulfApp : public ZulfEngine::ZulfApp {
public:

    // Implement the pure virtual 'Run' method with the SDL event loop
    void Update() override {
        // Example SDL event loop (you might need to adapt based on your needs)
        bool running = true;
        SDL_Event event;

        while (running) {
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT) {
                    running = false;
                }
            }

            // Perform other app operations like rendering, updating game state, etc.
        }
    }

    ~SDLZulfApp() override;

protected:
    std::unique_ptr<WindowImpl> CreateWindowImpl(int width, int height, const char *title) override;
};
