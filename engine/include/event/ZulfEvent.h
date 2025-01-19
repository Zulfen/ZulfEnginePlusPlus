#pragma once
#include <concepts>
#include <functional>
#include <typeindex>
#include <utility>

#include "util/ZulfUtil.h"

namespace ZulfEngine {

    enum class EventType {
        None = 0,
        MouseMove,
        MouseDown,
        MouseUp,
        MouseScroll,
        KeyDown,
        KeyUp,
        KeyPress,
        KeyRelease,
        WindowClose,
        WindowMinimize,
        WindowRestore,
        WindowMove,
        WindowMaximize,
    };

    enum EventCategory {
        None = 0,
        App = BIT(0),
        Input = BIT(1),
        Keyboard = BIT(2),
        Mouse = BIT(3),
        MouseButton = BIT(4),
    };

#define EVENT_CLASS_TYPE(type)                                       \
    static EventType GetStaticType() {                               \
        return EventType::type;                                      \
    }                                                                \
    virtual EventType GetEventType() const override {               \
        return GetStaticType();                                      \
    }                                                                \
    virtual const char* GetName() const override {                  \
        return #type;                                               \
    }



    // const means it won't alter any member variables
#define EVENT_CLASS_CATEGORY(category) virtual int GetCategoryFlags() const override { return category; }

    class Event {
        friend class EventDispatcher;

    public:
        virtual ~Event() = default;

        [[nodiscard]] virtual EventType GetEventType() const = 0;

        [[nodiscard]] virtual const char *GetName() const = 0;

        [[nodiscard]] virtual int GetCategoryFlags() const = 0;

        [[nodiscard]] virtual std::string ToString() const { return GetName(); }

        [[nodiscard]] bool isInCategory(EventCategory category) const { return GetCategoryFlags() & category; }

    protected:
        bool handled = false;
    };

    class EventDispatcher {
    public:

        using EventCallback = std::function<void(Event&)>;

        template<typename EventType>
        void RegisterEventHandler(const std::function<void(EventType&)>& handler) {
            eventHandlers[typeid(EventType)] = [handler](Event& event) {
                if (event.GetEventType() == EventType::GetStaticType()) {
                    handler(static_cast<EventType&>(event));  // call the handler with the specific event type
                }
            };
        }

        void DispatchEvent(Event& event) {
            if (const auto it = eventHandlers.find(typeid(event)); it != eventHandlers.end()) {
                it->second(event);
            }
        }

    private:
        std::unordered_map<std::type_index, EventCallback> eventHandlers;
    };

};
