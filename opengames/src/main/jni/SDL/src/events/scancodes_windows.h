/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2012 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/
#include "../../include/SDL_scancode.h"

/* Win32 virtual key code to SDL scancode mapping table
   Sources:
   - msdn.microsoft.com
*/
/* *INDENT-OFF* */
static const SDL_Scancode windows_scancode_table[] = {
    /*  0, 0x00 */      SDL_SCANCODE_UNKNOWN,
    /*  1, 0x01 */      SDL_SCANCODE_UNKNOWN,
    /*  2, 0x02 */      SDL_SCANCODE_UNKNOWN,
    /*  3, 0x03 */      SDL_SCANCODE_UNKNOWN,
    /*  4, 0x04 */      SDL_SCANCODE_UNKNOWN,
    /*  5, 0x05 */      SDL_SCANCODE_UNKNOWN,
    /*  6, 0x06 */      SDL_SCANCODE_UNKNOWN,
    /*  7, 0x07 */      SDL_SCANCODE_UNKNOWN,
    /*  8, 0x08 */      SDL_SCANCODE_BACKSPACE,
    /*  9, 0x09 */      SDL_SCANCODE_TAB,
    /*  10, 0x0a */     SDL_SCANCODE_KP_ENTER, /* Not a VKEY, SDL specific */
    /*  11, 0x0b */     SDL_SCANCODE_UNKNOWN,
    /*  12, 0x0c */     SDL_SCANCODE_CLEAR,
    /*  13, 0x0d */     SDL_SCANCODE_RETURN,
    /*  14, 0x0e */     SDL_SCANCODE_UNKNOWN,
    /*  15, 0x0f */     SDL_SCANCODE_UNKNOWN,
    /*  16, 0x10 */     SDL_SCANCODE_UNKNOWN,
    /*  17, 0x11 */     SDL_SCANCODE_UNKNOWN,
    /*  18, 0x12 */     SDL_SCANCODE_APPLICATION,
    /*  19, 0x13 */     SDL_SCANCODE_PAUSE,
    /*  20, 0x14 */     SDL_SCANCODE_CAPSLOCK,
    /*  21, 0x15 */     SDL_SCANCODE_UNKNOWN,
    /*  22, 0x16 */     SDL_SCANCODE_UNKNOWN,
    /*  23, 0x17 */     SDL_SCANCODE_UNKNOWN,
    /*  24, 0x18 */     SDL_SCANCODE_UNKNOWN,
    /*  25, 0x19 */     SDL_SCANCODE_UNKNOWN,
    /*  26, 0x1a */     SDL_SCANCODE_UNKNOWN,
    /*  27, 0x1b */     SDL_SCANCODE_ESCAPE,
    /*  28, 0x1c */     SDL_SCANCODE_UNKNOWN,
    /*  29, 0x1d */     SDL_SCANCODE_UNKNOWN,
    /*  30, 0x1e */     SDL_SCANCODE_UNKNOWN,
    /*  31, 0x1f */     SDL_SCANCODE_MODE,
    /*  32, 0x20 */     SDL_SCANCODE_SPACE,
    /*  33, 0x21 */     SDL_SCANCODE_PAGEUP,
    /*  34, 0x22 */     SDL_SCANCODE_PAGEDOWN,
    /*  35, 0x23 */     SDL_SCANCODE_END,
    /*  36, 0x24 */     SDL_SCANCODE_HOME,
    /*  37, 0x25 */     SDL_SCANCODE_LEFT,
    /*  38, 0x26 */     SDL_SCANCODE_UP,
    /*  39, 0x27 */     SDL_SCANCODE_RIGHT,
    /*  40, 0x28 */     SDL_SCANCODE_DOWN,
    /*  41, 0x29 */     SDL_SCANCODE_SELECT,
    /*  42, 0x2a */     SDL_SCANCODE_UNKNOWN, /* VK_PRINT */
    /*  43, 0x2b */     SDL_SCANCODE_EXECUTE,
    /*  44, 0x2c */     SDL_SCANCODE_PRINTSCREEN,
    /*  45, 0x2d */     SDL_SCANCODE_INSERT,
    /*  46, 0x2e */     SDL_SCANCODE_DELETE,
    /*  47, 0x2f */     SDL_SCANCODE_HELP,
    /*  48, 0x30 */     SDL_SCANCODE_0,
    /*  49, 0x31 */     SDL_SCANCODE_1,
    /*  50, 0x32 */     SDL_SCANCODE_2,
    /*  51, 0x33 */     SDL_SCANCODE_3,
    /*  52, 0x34 */     SDL_SCANCODE_4,
    /*  53, 0x35 */     SDL_SCANCODE_5,
    /*  54, 0x36 */     SDL_SCANCODE_6,
    /*  55, 0x37 */     SDL_SCANCODE_7,
    /*  56, 0x38 */     SDL_SCANCODE_8,
    /*  57, 0x39 */     SDL_SCANCODE_9,
    /*  58, 0x3a */     SDL_SCANCODE_UNKNOWN,
    /*  59, 0x3b */     SDL_SCANCODE_UNKNOWN,
    /*  60, 0x3c */     SDL_SCANCODE_UNKNOWN,
    /*  61, 0x3d */     SDL_SCANCODE_UNKNOWN,
    /*  62, 0x3e */     SDL_SCANCODE_UNKNOWN,
    /*  63, 0x3f */     SDL_SCANCODE_UNKNOWN,
    /*  64, 0x40 */     SDL_SCANCODE_UNKNOWN,
    /*  65, 0x41 */     SDL_SCANCODE_A,
    /*  66, 0x42 */     SDL_SCANCODE_B,
    /*  67, 0x43 */     SDL_SCANCODE_C,
    /*  68, 0x44 */     SDL_SCANCODE_D,
    /*  69, 0x45 */     SDL_SCANCODE_E,
    /*  70, 0x46 */     SDL_SCANCODE_F,
    /*  71, 0x47 */     SDL_SCANCODE_G,
    /*  72, 0x48 */     SDL_SCANCODE_H,
    /*  73, 0x49 */     SDL_SCANCODE_I,
    /*  74, 0x4a */     SDL_SCANCODE_J,
    /*  75, 0x4b */     SDL_SCANCODE_K,
    /*  76, 0x4c */     SDL_SCANCODE_L,
    /*  77, 0x4d */     SDL_SCANCODE_M,
    /*  78, 0x4e */     SDL_SCANCODE_N,
    /*  79, 0x4f */     SDL_SCANCODE_O,
    /*  80, 0x50 */     SDL_SCANCODE_P,
    /*  81, 0x51 */     SDL_SCANCODE_Q,
    /*  82, 0x52 */     SDL_SCANCODE_R,
    /*  83, 0x53 */     SDL_SCANCODE_S,
    /*  84, 0x54 */     SDL_SCANCODE_T,
    /*  85, 0x55 */     SDL_SCANCODE_U,
    /*  86, 0x56 */     SDL_SCANCODE_V,
    /*  87, 0x57 */     SDL_SCANCODE_W,
    /*  88, 0x58 */     SDL_SCANCODE_X,
    /*  89, 0x59 */     SDL_SCANCODE_Y,
    /*  90, 0x5a */     SDL_SCANCODE_Z,
    /*  91, 0x5b */     SDL_SCANCODE_LGUI,
    /*  92, 0x5c */     SDL_SCANCODE_RGUI,
    /*  93, 0x5d */     SDL_SCANCODE_APPLICATION,
    /*  94, 0x5e */     SDL_SCANCODE_UNKNOWN,
    /*  95, 0x5f */     SDL_SCANCODE_UNKNOWN,
    /*  96, 0x60 */     SDL_SCANCODE_KP_0,
    /*  97, 0x61 */     SDL_SCANCODE_KP_1,
    /*  98, 0x62 */     SDL_SCANCODE_KP_2,
    /*  99, 0x63 */     SDL_SCANCODE_KP_3,
    /*  100, 0x64 */    SDL_SCANCODE_KP_4,
    /*  101, 0x65 */    SDL_SCANCODE_KP_5,
    /*  102, 0x66 */    SDL_SCANCODE_KP_6,
    /*  103, 0x67 */    SDL_SCANCODE_KP_7,
    /*  104, 0x68 */    SDL_SCANCODE_KP_8,
    /*  105, 0x69 */    SDL_SCANCODE_KP_9,
    /*  106, 0x6a */    SDL_SCANCODE_KP_MULTIPLY,
    /*  107, 0x6b */    SDL_SCANCODE_KP_PLUS,
    /*  108, 0x6c */    SDL_SCANCODE_SEPARATOR,
    /*  109, 0x6d */    SDL_SCANCODE_KP_MINUS,
    /*  110, 0x6e */    SDL_SCANCODE_KP_DECIMAL,
    /*  111, 0x6f */    SDL_SCANCODE_KP_DIVIDE,
    /*  112, 0x70 */    SDL_SCANCODE_F1,
    /*  113, 0x71 */    SDL_SCANCODE_F2,
    /*  114, 0x72 */    SDL_SCANCODE_F3,
    /*  115, 0x73 */    SDL_SCANCODE_F4,
    /*  116, 0x74 */    SDL_SCANCODE_F5,
    /*  117, 0x75 */    SDL_SCANCODE_F6,
    /*  118, 0x76 */    SDL_SCANCODE_F7,
    /*  119, 0x77 */    SDL_SCANCODE_F8,
    /*  120, 0x78 */    SDL_SCANCODE_F9,
    /*  121, 0x79 */    SDL_SCANCODE_F10,
    /*  122, 0x7a */    SDL_SCANCODE_F11,
    /*  123, 0x7b */    SDL_SCANCODE_F12,
    /*  124, 0x7c */    SDL_SCANCODE_F13,
    /*  125, 0x7d */    SDL_SCANCODE_F14,
    /*  126, 0x7e */    SDL_SCANCODE_F15,
    /*  127, 0x7f */    SDL_SCANCODE_F16,
    /*  128, 0x80 */    SDL_SCANCODE_F17, /* or SDL_SCANCODE_AUDIONEXT */
    /*  129, 0x81 */    SDL_SCANCODE_F18, /* or SDL_SCANCODE_AUDIOPREV */
    /*  130, 0x82 */    SDL_SCANCODE_F19, /* or SDL_SCANCODE_AUDIOSTOP */
    /*  131, 0x83 */    SDL_SCANCODE_F20, /* or SDL_SCANCODE_AUDIOPLAY */
    /*  132, 0x84 */    SDL_SCANCODE_F21, /* or SDL_SCANCODE_MAIL */
    /*  133, 0x85 */    SDL_SCANCODE_F22, /* or SDL_SCANCODE_MEDIASELECT */
    /*  134, 0x86 */    SDL_SCANCODE_F23, /* or SDL_SCANCODE_WWW */
    /*  135, 0x87 */    SDL_SCANCODE_F24, /* or SDL_SCANCODE_CALCULATOR */
    /*  136, 0x88 */    SDL_SCANCODE_UNKNOWN,
    /*  137, 0x89 */    SDL_SCANCODE_UNKNOWN,
    /*  138, 0x8a */    SDL_SCANCODE_UNKNOWN,
    /*  139, 0x8b */    SDL_SCANCODE_UNKNOWN,
    /*  140, 0x8c */    SDL_SCANCODE_UNKNOWN,
    /*  141, 0x8d */    SDL_SCANCODE_UNKNOWN,
    /*  142, 0x8e */    SDL_SCANCODE_UNKNOWN,
    /*  143, 0x8f */    SDL_SCANCODE_UNKNOWN,
    /*  144, 0x90 */    SDL_SCANCODE_NUMLOCKCLEAR,
    /*  145, 0x91 */    SDL_SCANCODE_SCROLLLOCK,
    /*  146, 0x92 */    SDL_SCANCODE_KP_EQUALS,
    /*  147, 0x93 */    SDL_SCANCODE_UNKNOWN,
    /*  148, 0x94 */    SDL_SCANCODE_UNKNOWN,
    /*  149, 0x95 */    SDL_SCANCODE_UNKNOWN,
    /*  150, 0x96 */    SDL_SCANCODE_UNKNOWN,
    /*  151, 0x97 */    SDL_SCANCODE_UNKNOWN,
    /*  152, 0x98 */    SDL_SCANCODE_UNKNOWN,
    /*  153, 0x99 */    SDL_SCANCODE_UNKNOWN,
    /*  154, 0x9a */    SDL_SCANCODE_UNKNOWN,
    /*  155, 0x9b */    SDL_SCANCODE_UNKNOWN,
    /*  156, 0x9c */    SDL_SCANCODE_UNKNOWN,
    /*  157, 0x9d */    SDL_SCANCODE_UNKNOWN,
    /*  158, 0x9e */    SDL_SCANCODE_UNKNOWN,
    /*  159, 0x9f */    SDL_SCANCODE_UNKNOWN,
    /*  160, 0xa0 */    SDL_SCANCODE_LSHIFT,
    /*  161, 0xa1 */    SDL_SCANCODE_RSHIFT,
    /*  162, 0xa2 */    SDL_SCANCODE_LCTRL,
    /*  163, 0xa3 */    SDL_SCANCODE_RCTRL,
    /*  164, 0xa4 */    SDL_SCANCODE_LALT,
    /*  165, 0xa5 */    SDL_SCANCODE_RALT,
    /*  166, 0xa6 */    SDL_SCANCODE_AC_BACK,
    /*  167, 0xa7 */    SDL_SCANCODE_AC_FORWARD,
    /*  168, 0xa8 */    SDL_SCANCODE_AC_REFRESH,
    /*  169, 0xa9 */    SDL_SCANCODE_AC_STOP,
    /*  170, 0xaa */    SDL_SCANCODE_AC_SEARCH,
    /*  171, 0xab */    SDL_SCANCODE_AC_BOOKMARKS,
    /*  172, 0xac */    SDL_SCANCODE_AC_HOME,
    /*  173, 0xad */    SDL_SCANCODE_AUDIOMUTE,
    /*  174, 0xae */    SDL_SCANCODE_VOLUMEDOWN,
    /*  175, 0xaf */    SDL_SCANCODE_VOLUMEUP,
    /*  176, 0xb0 */    SDL_SCANCODE_AUDIONEXT,
    /*  177, 0xb1 */    SDL_SCANCODE_AUDIOPREV,
    /*  178, 0xb2 */    SDL_SCANCODE_AUDIOSTOP,
    /*  179, 0xb3 */    SDL_SCANCODE_AUDIOPLAY,
    /*  180, 0xb4 */    SDL_SCANCODE_MAIL,
    /*  181, 0xb5 */    SDL_SCANCODE_MEDIASELECT,
    /*  182, 0xb6 */    SDL_SCANCODE_UNKNOWN, /* VK_LAUNCH_APP1 */
    /*  183, 0xb7 */    SDL_SCANCODE_UNKNOWN, /* VK_LAUNCH_APP2 */
    /*  184, 0xb8 */    SDL_SCANCODE_UNKNOWN,
    /*  185, 0xb9 */    SDL_SCANCODE_UNKNOWN,
    /*  186, 0xba */    SDL_SCANCODE_SEMICOLON,
    /*  187, 0xbb */    SDL_SCANCODE_EQUALS,
    /*  188, 0xbc */    SDL_SCANCODE_COMMA,
    /*  189, 0xbd */    SDL_SCANCODE_MINUS,
    /*  190, 0xbe */    SDL_SCANCODE_PERIOD,
    /*  191, 0xbf */    SDL_SCANCODE_SLASH,
    /*  192, 0xc0 */    SDL_SCANCODE_GRAVE,
    /*  193, 0xc1 */    SDL_SCANCODE_UNKNOWN,
    /*  194, 0xc2 */    SDL_SCANCODE_UNKNOWN,
    /*  195, 0xc3 */    SDL_SCANCODE_UNKNOWN,
    /*  196, 0xc4 */    SDL_SCANCODE_UNKNOWN,
    /*  197, 0xc5 */    SDL_SCANCODE_UNKNOWN,
    /*  198, 0xc6 */    SDL_SCANCODE_UNKNOWN,
    /*  199, 0xc7 */    SDL_SCANCODE_UNKNOWN,
    /*  200, 0xc8 */    SDL_SCANCODE_UNKNOWN,
    /*  201, 0xc9 */    SDL_SCANCODE_UNKNOWN,
    /*  202, 0xca */    SDL_SCANCODE_UNKNOWN,
    /*  203, 0xcb */    SDL_SCANCODE_UNKNOWN,
    /*  204, 0xcc */    SDL_SCANCODE_UNKNOWN,
    /*  205, 0xcd */    SDL_SCANCODE_UNKNOWN,
    /*  206, 0xce */    SDL_SCANCODE_UNKNOWN,
    /*  207, 0xcf */    SDL_SCANCODE_UNKNOWN,
    /*  208, 0xd0 */    SDL_SCANCODE_UNKNOWN,
    /*  209, 0xd1 */    SDL_SCANCODE_UNKNOWN,
    /*  210, 0xd2 */    SDL_SCANCODE_UNKNOWN,
    /*  211, 0xd3 */    SDL_SCANCODE_UNKNOWN,
    /*  212, 0xd4 */    SDL_SCANCODE_UNKNOWN,
    /*  213, 0xd5 */    SDL_SCANCODE_UNKNOWN,
    /*  214, 0xd6 */    SDL_SCANCODE_UNKNOWN,
    /*  215, 0xd7 */    SDL_SCANCODE_UNKNOWN,
    /*  216, 0xd8 */    SDL_SCANCODE_UNKNOWN,
    /*  217, 0xd9 */    SDL_SCANCODE_UNKNOWN,
    /*  218, 0xda */    SDL_SCANCODE_UNKNOWN,
    /*  219, 0xdb */    SDL_SCANCODE_LEFTBRACKET,
    /*  220, 0xdc */    SDL_SCANCODE_BACKSLASH,
    /*  221, 0xdd */    SDL_SCANCODE_RIGHTBRACKET,
    /*  222, 0xde */    SDL_SCANCODE_APOSTROPHE,
    /*  223, 0xdf */    SDL_SCANCODE_UNKNOWN,
    /*  224, 0xe0 */    SDL_SCANCODE_UNKNOWN,
    /*  225, 0xe1 */    SDL_SCANCODE_UNKNOWN,
    /*  226, 0xe2 */    SDL_SCANCODE_NONUSBACKSLASH,
    /*  227, 0xe3 */    SDL_SCANCODE_UNKNOWN,
    /*  228, 0xe4 */    SDL_SCANCODE_UNKNOWN,
    /*  229, 0xe5 */    SDL_SCANCODE_UNKNOWN,
    /*  230, 0xe6 */    SDL_SCANCODE_UNKNOWN,
    /*  231, 0xe7 */    SDL_SCANCODE_UNKNOWN,
    /*  232, 0xe8 */    SDL_SCANCODE_UNKNOWN,
    /*  233, 0xe9 */    SDL_SCANCODE_UNKNOWN,
    /*  234, 0xea */    SDL_SCANCODE_UNKNOWN,
    /*  235, 0xeb */    SDL_SCANCODE_UNKNOWN,
    /*  236, 0xec */    SDL_SCANCODE_UNKNOWN,
    /*  237, 0xed */    SDL_SCANCODE_UNKNOWN,
    /*  238, 0xee */    SDL_SCANCODE_UNKNOWN,
    /*  239, 0xef */    SDL_SCANCODE_UNKNOWN,
    /*  240, 0xf0 */    SDL_SCANCODE_UNKNOWN,
    /*  241, 0xf1 */    SDL_SCANCODE_UNKNOWN,
    /*  242, 0xf2 */    SDL_SCANCODE_UNKNOWN,
    /*  243, 0xf3 */    SDL_SCANCODE_UNKNOWN,
    /*  244, 0xf4 */    SDL_SCANCODE_UNKNOWN,
    /*  245, 0xf5 */    SDL_SCANCODE_UNKNOWN,
    /*  246, 0xf6 */    SDL_SCANCODE_SYSREQ,
    /*  247, 0xf7 */    SDL_SCANCODE_CRSEL,
    /*  248, 0xf8 */    SDL_SCANCODE_EXSEL,
    /*  249, 0xf9 */    SDL_SCANCODE_UNKNOWN, /* VK_EREOF */
    /*  250, 0xfa */    SDL_SCANCODE_UNKNOWN, /* VK_PLAY */
    /*  251, 0xfb */    SDL_SCANCODE_UNKNOWN, /* VK_ZOOM */
    /*  252, 0xfc */    SDL_SCANCODE_UNKNOWN,
    /*  253, 0xfd */    SDL_SCANCODE_UNKNOWN, /* VK_PA1 */
    /*  254, 0xfe */    SDL_SCANCODE_CLEAR,
    /*  255, 0xff */    SDL_SCANCODE_UNKNOWN,
};
/* *INDENT-ON* */
