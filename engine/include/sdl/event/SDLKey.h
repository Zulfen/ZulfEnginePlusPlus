#pragma once
#include "event/ZulfKeyboardEvent.h"
#include <SDL.h>

namespace ZulfEngine {
    inline ZulfKey TranslateSDLKey(SDL_Keycode sdlKey) {
        switch (sdlKey) {
            // Lowercase letters (a-z)
            case SDLK_a: return ZulfKey::a;
            case SDLK_b: return ZulfKey::b;
            case SDLK_c: return ZulfKey::c;
            case SDLK_d: return ZulfKey::d;
            case SDLK_e: return ZulfKey::e;
            case SDLK_f: return ZulfKey::f;
            case SDLK_g: return ZulfKey::g;
            case SDLK_h: return ZulfKey::h;
            case SDLK_i: return ZulfKey::i;
            case SDLK_j: return ZulfKey::j;
            case SDLK_k: return ZulfKey::k;
            case SDLK_l: return ZulfKey::l;
            case SDLK_m: return ZulfKey::m;
            case SDLK_n: return ZulfKey::n;
            case SDLK_o: return ZulfKey::o;
            case SDLK_p: return ZulfKey::p;
            case SDLK_q: return ZulfKey::q;
            case SDLK_r: return ZulfKey::r;
            case SDLK_s: return ZulfKey::s;
            case SDLK_t: return ZulfKey::t;
            case SDLK_u: return ZulfKey::u;
            case SDLK_v: return ZulfKey::v;
            case SDLK_w: return ZulfKey::w;
            case SDLK_x: return ZulfKey::x;
            case SDLK_y: return ZulfKey::y;
            case SDLK_z: return ZulfKey::z;

            // Numeric keys
            case SDLK_0: return ZulfKey::Num0;
            case SDLK_1: return ZulfKey::Num1;
            case SDLK_2: return ZulfKey::Num2;
            case SDLK_3: return ZulfKey::Num3;
            case SDLK_4: return ZulfKey::Num4;
            case SDLK_5: return ZulfKey::Num5;
            case SDLK_6: return ZulfKey::Num6;
            case SDLK_7: return ZulfKey::Num7;
            case SDLK_8: return ZulfKey::Num8;
            case SDLK_9: return ZulfKey::Num9;

            // Special keys
            case SDLK_RETURN: return ZulfKey::Return;
            case SDLK_ESCAPE: return ZulfKey::Escape;
            case SDLK_BACKSPACE: return ZulfKey::Backspace;
            case SDLK_TAB: return ZulfKey::Tab;
            case SDLK_SPACE: return ZulfKey::Space;
            case SDLK_LEFT: return ZulfKey::Left;
            case SDLK_RIGHT: return ZulfKey::Right;
            case SDLK_UP: return ZulfKey::Up;
            case SDLK_DOWN: return ZulfKey::Down;
            case SDLK_LSHIFT: return ZulfKey::LShift;
            case SDLK_RSHIFT: return ZulfKey::RShift;
            case SDLK_LCTRL: return ZulfKey::LCtrl;
            case SDLK_RCTRL: return ZulfKey::RCtrl;
            case SDLK_LALT: return ZulfKey::LAlt;
            case SDLK_RALT: return ZulfKey::RAlt;

            // Default case
            default: return ZulfKey::Unknown;
        }
    }
}

