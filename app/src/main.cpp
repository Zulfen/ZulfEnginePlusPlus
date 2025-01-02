#include <ZulfEngine.h>

int main() {
    auto zulfApp = ZulfEngine::ZulfApp::createApplication();
    zulfApp->CreateWindow(800, 600, "ZulfEngine");
    zulfApp->GetWindow()->Show();
    zulfApp->Update();
}


