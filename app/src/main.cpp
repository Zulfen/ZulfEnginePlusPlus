#include <iostream>
#include <ZulfEngine.h>

using namespace ZulfEngine;

int main() {

    auto zulfApp = ZulfApp::createApplication();

    zulfApp->CreateWindow(800, 600, "ZulfEngine");
    zulfApp->GetWindow()->Show();

    zulfApp->GetEventDispatcher().RegisterEventHandler<WindowCloseEvent>([&zulfApp](auto& event) {
        std::cout << "Handled WindowCloseEvent: " << event.GetName() << std::endl;
        zulfApp->Quit();
    });

    zulfApp->Update();

}




