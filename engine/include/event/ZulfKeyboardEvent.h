#pragma once
#include "ZulfEvent.h"

namespace ZulfEngine {

    enum class ZulfKey {
        Unknown = 0,
        A = 'A', B = 'B', C = 'C', D = 'D', E = 'E', F = 'F', G = 'G', H = 'H', I = 'I', J = 'J',
        K = 'K', L = 'L', M = 'M', N = 'N', O = 'O', P = 'P', Q = 'Q', R = 'R', S = 'S', T = 'T',
        U = 'U', V = 'V', W = 'W', X = 'X', Y = 'Y', Z = 'Z',
        a = 'a', b = 'b', c = 'c', d = 'd', e = 'e', f = 'f', g = 'g', h = 'h', i = 'i', j = 'j',
        k = 'k', l = 'l', m = 'm', n = 'n', o = 'o', p = 'p', q = 'q', r = 'r', s = 's', t = 't',
        u = 'u', v = 'v', w = 'w', x = 'x', y = 'y', z = 'z',
        Num0 = '0', Num1 = '1', Num2 = '2', Num3 = '3', Num4 = '4', Num5 = '5', Num6 = '6', Num7 = '7',
        Num8 = '8', Num9 = '9',
        Return = '\r', Escape = '\x1B', Backspace = '\b', Tab = '\t', Space = ' ',
        Left = 0x2190, Right = 0x2192, Up = 0x2191, Down = 0x2193,
        LShift = 'L', RShift = 'R', LCtrl = 'C', RCtrl = 'C', LAlt = 'A', RAlt = 'A',
    };


    class ZulfKeyboardEvent : public Event {
      public:
        explicit ZulfKeyboardEvent(ZulfKey key) : key(key) {};
        [[nodiscard]] ZulfKey GetKey() const { return key; }
      private:
        ZulfKey key;
    };

    class KeyDownEvent : public ZulfKeyboardEvent {
      public:
        explicit KeyDownEvent(ZulfKey key) : ZulfKeyboardEvent(key) {}
        EVENT_CLASS_TYPE(KeyDown)
        EVENT_CLASS_CATEGORY(Keyboard)
    };


}
