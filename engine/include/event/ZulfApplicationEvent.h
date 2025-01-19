#pragma once
#include "ZulfEvent.h"

namespace ZulfEngine {
    class WindowCloseEvent : public Event {
    public:
        WindowCloseEvent() = default;
        EVENT_CLASS_TYPE(WindowClose)
        EVENT_CLASS_CATEGORY(App)
    };
}
