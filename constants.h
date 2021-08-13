#ifndef __constants_h__
#define __constants_h__

#define __SUBSYSTEM_KEYBOARD__  (1<<0)
#define __SUBSYSTEM_JOYSTICK__  (1<<1)
#define __SUBSYSTEM_MOUSE__     (1<<2)
#define __SUBSYSTEM_AUDIO__     (1<<3)
#define __SUBSYSTEM_ALL__       ((1<<4)-1)

#define __ADDON_PRIMITIVES__    (1<<0)
#define __ADDON_IMAGE__         (1<<1)
#define __ADDON_FONT__          (1<<2)
#define __ADDON_TTF__           (1<<3)
#define __ADDON_ACODEC__        (1<<4)

#define __EVENT_SOURCE_JOYSTICK__   (1<<0)
#define __EVENT_SOURCE_KEYBOARD__   (1<<1)
#define __EVENT_SOURCE_MOUSE__      (1<<2)


void init_allegro_constants()
{
    // EVENTS
    add_integer_constant("EVENT_JOYSTICK_AXIS", ALLEGRO_EVENT_JOYSTICK_AXIS, 0);
    add_integer_constant("EVENT_JOYSTICK_BUTTON_DOWN", ALLEGRO_EVENT_JOYSTICK_BUTTON_DOWN, 0);
    add_integer_constant("EVENT_JOYSTICK_BUTTON_UP", ALLEGRO_EVENT_JOYSTICK_BUTTON_UP, 0);
    add_integer_constant("EVENT_JOYSTICK_CONFIGURATION", ALLEGRO_EVENT_JOYSTICK_CONFIGURATION, 0);
    add_integer_constant("EVENT_KEY_DOWN", ALLEGRO_EVENT_KEY_DOWN, 0);
    add_integer_constant("EVENT_KEY_CHAR", ALLEGRO_EVENT_KEY_CHAR, 0);
    add_integer_constant("EVENT_KEY_UP", ALLEGRO_EVENT_KEY_UP, 0);
    add_integer_constant("EVENT_MOUSE_AXES", ALLEGRO_EVENT_MOUSE_AXES, 0);
    add_integer_constant("EVENT_MOUSE_BUTTON_DOWN", ALLEGRO_EVENT_MOUSE_BUTTON_DOWN, 0);
    add_integer_constant("EVENT_MOUSE_BUTTON_UP", ALLEGRO_EVENT_MOUSE_BUTTON_UP, 0);
    add_integer_constant("EVENT_MOUSE_ENTER_DISPLAY", ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY, 0);
    add_integer_constant("EVENT_MOUSE_LEAVE_DISPLAY", ALLEGRO_EVENT_MOUSE_LEAVE_DISPLAY, 0);
    add_integer_constant("EVENT_MOUSE_WARPED", ALLEGRO_EVENT_MOUSE_WARPED, 0);
    add_integer_constant("EVENT_TIMER", ALLEGRO_EVENT_TIMER, 0);
    add_integer_constant("EVENT_DISPLAY_EXPOSE", ALLEGRO_EVENT_DISPLAY_EXPOSE, 0);
    add_integer_constant("EVENT_DISPLAY_RESIZE", ALLEGRO_EVENT_DISPLAY_RESIZE, 0);
    add_integer_constant("EVENT_DISPLAY_CLOSE", ALLEGRO_EVENT_DISPLAY_CLOSE, 0);
    add_integer_constant("EVENT_DISPLAY_LOST", ALLEGRO_EVENT_DISPLAY_LOST, 0);
    add_integer_constant("EVENT_DISPLAY_FOUND", ALLEGRO_EVENT_DISPLAY_FOUND, 0);
    add_integer_constant("EVENT_DISPLAY_SWITCH_IN", ALLEGRO_EVENT_DISPLAY_SWITCH_IN, 0);
    add_integer_constant("EVENT_DISPLAY_SWITCH_OUT", ALLEGRO_EVENT_DISPLAY_SWITCH_OUT, 0);
    add_integer_constant("EVENT_DISPLAY_ORIENTATION", ALLEGRO_EVENT_DISPLAY_ORIENTATION, 0);

    // KEYCODES
    add_integer_constant("KEY_A", ALLEGRO_KEY_A, 0);
    add_integer_constant("KEY_B", ALLEGRO_KEY_B, 0);
    add_integer_constant("KEY_C", ALLEGRO_KEY_C, 0);
    add_integer_constant("KEY_D", ALLEGRO_KEY_D, 0);
    add_integer_constant("KEY_E", ALLEGRO_KEY_E, 0);
    add_integer_constant("KEY_F", ALLEGRO_KEY_F, 0);
    add_integer_constant("KEY_G", ALLEGRO_KEY_G, 0);
    add_integer_constant("KEY_H", ALLEGRO_KEY_H, 0);
    add_integer_constant("KEY_I", ALLEGRO_KEY_I, 0);
    add_integer_constant("KEY_J", ALLEGRO_KEY_J, 0);
    add_integer_constant("KEY_K", ALLEGRO_KEY_K, 0);
    add_integer_constant("KEY_L", ALLEGRO_KEY_L, 0);
    add_integer_constant("KEY_M", ALLEGRO_KEY_M, 0);
    add_integer_constant("KEY_N", ALLEGRO_KEY_N, 0);
    add_integer_constant("KEY_O", ALLEGRO_KEY_O, 0);
    add_integer_constant("KEY_P", ALLEGRO_KEY_P, 0);
    add_integer_constant("KEY_Q", ALLEGRO_KEY_Q, 0);
    add_integer_constant("KEY_R", ALLEGRO_KEY_R, 0);
    add_integer_constant("KEY_S", ALLEGRO_KEY_S, 0);
    add_integer_constant("KEY_T", ALLEGRO_KEY_T, 0);
    add_integer_constant("KEY_U", ALLEGRO_KEY_U, 0);
    add_integer_constant("KEY_V", ALLEGRO_KEY_V, 0);
    add_integer_constant("KEY_W", ALLEGRO_KEY_W, 0);
    add_integer_constant("KEY_X", ALLEGRO_KEY_X, 0);
    add_integer_constant("KEY_Y", ALLEGRO_KEY_Y, 0);
    add_integer_constant("KEY_Z", ALLEGRO_KEY_Z, 0);
    add_integer_constant("KEY_0", ALLEGRO_KEY_0, 0);
    add_integer_constant("KEY_1", ALLEGRO_KEY_1, 0);
    add_integer_constant("KEY_2", ALLEGRO_KEY_2, 0);
    add_integer_constant("KEY_3", ALLEGRO_KEY_3, 0);
    add_integer_constant("KEY_4", ALLEGRO_KEY_4, 0);
    add_integer_constant("KEY_5", ALLEGRO_KEY_5, 0);
    add_integer_constant("KEY_6", ALLEGRO_KEY_6, 0);
    add_integer_constant("KEY_7", ALLEGRO_KEY_7, 0);
    add_integer_constant("KEY_8", ALLEGRO_KEY_8, 0);
    add_integer_constant("KEY_9", ALLEGRO_KEY_9, 0);
    add_integer_constant("KEY_PAD_0", ALLEGRO_KEY_PAD_0, 0);
    add_integer_constant("KEY_PAD_1", ALLEGRO_KEY_PAD_1, 0);
    add_integer_constant("KEY_PAD_2", ALLEGRO_KEY_PAD_2, 0);
    add_integer_constant("KEY_PAD_3", ALLEGRO_KEY_PAD_3, 0);
    add_integer_constant("KEY_PAD_4", ALLEGRO_KEY_PAD_4, 0);
    add_integer_constant("KEY_PAD_5", ALLEGRO_KEY_PAD_5, 0);
    add_integer_constant("KEY_PAD_6", ALLEGRO_KEY_PAD_6, 0);
    add_integer_constant("KEY_PAD_7", ALLEGRO_KEY_PAD_7, 0);
    add_integer_constant("KEY_PAD_8", ALLEGRO_KEY_PAD_8, 0);
    add_integer_constant("KEY_PAD_9", ALLEGRO_KEY_PAD_9, 0);
    add_integer_constant("KEY_F1", ALLEGRO_KEY_F1, 0);
    add_integer_constant("KEY_F2", ALLEGRO_KEY_F2, 0);
    add_integer_constant("KEY_F3", ALLEGRO_KEY_F3, 0);
    add_integer_constant("KEY_F4", ALLEGRO_KEY_F4, 0);
    add_integer_constant("KEY_F5", ALLEGRO_KEY_F5, 0);
    add_integer_constant("KEY_F6", ALLEGRO_KEY_F6, 0);
    add_integer_constant("KEY_F7", ALLEGRO_KEY_F7, 0);
    add_integer_constant("KEY_F8", ALLEGRO_KEY_F8, 0);
    add_integer_constant("KEY_F9", ALLEGRO_KEY_F9, 0);
    add_integer_constant("KEY_F10", ALLEGRO_KEY_F10, 0);
    add_integer_constant("KEY_F11", ALLEGRO_KEY_F11, 0);
    add_integer_constant("KEY_F12", ALLEGRO_KEY_F12, 0);
    add_integer_constant("KEY_ESCAPE", ALLEGRO_KEY_ESCAPE, 0);
    add_integer_constant("KEY_TILDE", ALLEGRO_KEY_TILDE, 0);
    add_integer_constant("KEY_MINUS", ALLEGRO_KEY_MINUS, 0);
    add_integer_constant("KEY_EQUALS", ALLEGRO_KEY_EQUALS, 0);
    add_integer_constant("KEY_BACKSPACE", ALLEGRO_KEY_BACKSPACE, 0);
    add_integer_constant("KEY_TAB", ALLEGRO_KEY_TAB, 0);
    add_integer_constant("KEY_OPENBRACE", ALLEGRO_KEY_OPENBRACE, 0);
    add_integer_constant("KEY_CLOSEBRACE", ALLEGRO_KEY_CLOSEBRACE, 0);
    add_integer_constant("KEY_ENTER", ALLEGRO_KEY_ENTER, 0);
    add_integer_constant("KEY_SEMICOLON", ALLEGRO_KEY_SEMICOLON, 0);
    add_integer_constant("KEY_QUOTE", ALLEGRO_KEY_QUOTE, 0);
    add_integer_constant("KEY_BACKSLASH", ALLEGRO_KEY_BACKSLASH, 0);
    add_integer_constant("KEY_BACKSLASH2", ALLEGRO_KEY_BACKSLASH2, 0);
    add_integer_constant("KEY_COMMA", ALLEGRO_KEY_COMMA, 0);
    add_integer_constant("KEY_FULLSTOP", ALLEGRO_KEY_FULLSTOP, 0);
    add_integer_constant("KEY_SLASH", ALLEGRO_KEY_SLASH, 0);
    add_integer_constant("KEY_SPACE", ALLEGRO_KEY_SPACE, 0);
    add_integer_constant("KEY_INSERT", ALLEGRO_KEY_INSERT, 0);
    add_integer_constant("KEY_DELETE", ALLEGRO_KEY_DELETE, 0);
    add_integer_constant("KEY_HOME", ALLEGRO_KEY_HOME, 0);
    add_integer_constant("KEY_END", ALLEGRO_KEY_END, 0);
    add_integer_constant("KEY_PGUP", ALLEGRO_KEY_PGUP, 0);
    add_integer_constant("KEY_PGDN", ALLEGRO_KEY_PGDN, 0);
    add_integer_constant("KEY_LEFT", ALLEGRO_KEY_LEFT, 0);
    add_integer_constant("KEY_RIGHT", ALLEGRO_KEY_RIGHT, 0);
    add_integer_constant("KEY_UP", ALLEGRO_KEY_UP, 0);
    add_integer_constant("KEY_DOWN", ALLEGRO_KEY_DOWN, 0);
    add_integer_constant("KEY_PAD_SLASH", ALLEGRO_KEY_PAD_SLASH, 0);
    add_integer_constant("KEY_PAD_ASTERISK", ALLEGRO_KEY_PAD_ASTERISK, 0);
    add_integer_constant("KEY_PAD_MINUS", ALLEGRO_KEY_PAD_MINUS, 0);
    add_integer_constant("KEY_PAD_PLUS", ALLEGRO_KEY_PAD_PLUS, 0);
    add_integer_constant("KEY_PAD_DELETE", ALLEGRO_KEY_PAD_DELETE, 0);
    add_integer_constant("KEY_PAD_ENTER", ALLEGRO_KEY_PAD_ENTER, 0);
    add_integer_constant("KEY_PRINTSCREEN", ALLEGRO_KEY_PRINTSCREEN, 0);
    add_integer_constant("KEY_PAUSE", ALLEGRO_KEY_PAUSE, 0);
    add_integer_constant("KEY_ABNT_C1", ALLEGRO_KEY_ABNT_C1, 0);
    add_integer_constant("KEY_YEN", ALLEGRO_KEY_YEN, 0);
    add_integer_constant("KEY_KANA", ALLEGRO_KEY_KANA, 0);
    add_integer_constant("KEY_CONVERT", ALLEGRO_KEY_CONVERT, 0);
    add_integer_constant("KEY_NOCONVERT", ALLEGRO_KEY_NOCONVERT, 0);
    add_integer_constant("KEY_AT", ALLEGRO_KEY_AT, 0);
    add_integer_constant("KEY_CIRCUMFLEX", ALLEGRO_KEY_CIRCUMFLEX, 0);
    add_integer_constant("KEY_COLON2", ALLEGRO_KEY_COLON2, 0);
    add_integer_constant("KEY_KANJI", ALLEGRO_KEY_KANJI, 0);
    add_integer_constant("KEY_LSHIFT", ALLEGRO_KEY_LSHIFT, 0);
    add_integer_constant("KEY_RSHIFT", ALLEGRO_KEY_RSHIFT, 0);
    add_integer_constant("KEY_LCTRL", ALLEGRO_KEY_LCTRL, 0);
    add_integer_constant("KEY_RCTRL", ALLEGRO_KEY_RCTRL, 0);
    add_integer_constant("KEY_ALT", ALLEGRO_KEY_ALT, 0);
    add_integer_constant("KEY_ALTGR", ALLEGRO_KEY_ALTGR, 0);
    add_integer_constant("KEY_LWIN", ALLEGRO_KEY_LWIN, 0);
    add_integer_constant("KEY_RWIN", ALLEGRO_KEY_RWIN, 0);
    add_integer_constant("KEY_MENU", ALLEGRO_KEY_MENU, 0);
    add_integer_constant("KEY_SCROLLLOCK", ALLEGRO_KEY_SCROLLLOCK, 0);
    add_integer_constant("KEY_NUMLOCK", ALLEGRO_KEY_NUMLOCK, 0);
    add_integer_constant("KEY_CAPSLOCK", ALLEGRO_KEY_CAPSLOCK, 0);
    add_integer_constant("KEY_PAD_EQUALS", ALLEGRO_KEY_PAD_EQUALS, 0);
    add_integer_constant("KEY_BACKQUOTE", ALLEGRO_KEY_BACKQUOTE, 0);
    add_integer_constant("KEY_SEMICOLON2", ALLEGRO_KEY_SEMICOLON2, 0);
    add_integer_constant("KEY_COMMAND", ALLEGRO_KEY_COMMAND, 0);
    add_integer_constant("KEY_MAX", ALLEGRO_KEY_MAX, 0);
    add_integer_constant("KEY_UNKNOWN", ALLEGRO_KEY_UNKNOWN, 0);
    add_integer_constant("KEY_MODIFIERS", ALLEGRO_KEY_MODIFIERS, 0);

    // KEY MODIFIERS
    add_integer_constant("KEYMOD_SHIFT", ALLEGRO_KEYMOD_SHIFT, 0);
    add_integer_constant("KEYMOD_CTRL", ALLEGRO_KEYMOD_CTRL, 0);
    add_integer_constant("KEYMOD_ALT", ALLEGRO_KEYMOD_ALT, 0);
    add_integer_constant("KEYMOD_LWIN", ALLEGRO_KEYMOD_LWIN, 0);
    add_integer_constant("KEYMOD_RWIN", ALLEGRO_KEYMOD_RWIN, 0);
    add_integer_constant("KEYMOD_MENU", ALLEGRO_KEYMOD_MENU, 0);
    add_integer_constant("KEYMOD_ALTGR", ALLEGRO_KEYMOD_ALTGR, 0);
    add_integer_constant("KEYMOD_COMMAND", ALLEGRO_KEYMOD_COMMAND, 0);
    add_integer_constant("KEYMOD_SCROLLLOCK", ALLEGRO_KEYMOD_SCROLLLOCK, 0);
    add_integer_constant("KEYMOD_NUMLOCK", ALLEGRO_KEYMOD_NUMLOCK, 0);
    add_integer_constant("KEYMOD_CAPSLOCK", ALLEGRO_KEYMOD_CAPSLOCK, 0);
    add_integer_constant("KEYMOD_INALTSEQ", ALLEGRO_KEYMOD_INALTSEQ, 0);
    add_integer_constant("KEYMOD_ACCENT1", ALLEGRO_KEYMOD_ACCENT1, 0);
    add_integer_constant("KEYMOD_ACCENT2", ALLEGRO_KEYMOD_ACCENT2, 0);
    add_integer_constant("KEYMOD_ACCENT3", ALLEGRO_KEYMOD_ACCENT3, 0);
    add_integer_constant("KEYMOD_ACCENT4", ALLEGRO_KEYMOD_ACCENT4, 0);

    // Audio.
    add_integer_constant("PLAYMODE_ONCE", ALLEGRO_PLAYMODE_ONCE, 0);
    add_integer_constant("PLAYMODE_LOOP", ALLEGRO_PLAYMODE_LOOP, 0);
    add_integer_constant("PLAYMODE_BIDIR", ALLEGRO_PLAYMODE_BIDIR, 0);

    // TTF fonts.
    add_integer_constant("TTF_NO_KERNING", ALLEGRO_TTF_NO_KERNING, 0);
    add_integer_constant("TTF_MONOCHROME", ALLEGRO_TTF_MONOCHROME, 0);
    add_integer_constant("TTF_NO_AUTOHINT", ALLEGRO_TTF_NO_AUTOHINT, 0);

    // Shader.
    add_integer_constant("SHADER_AUTO", ALLEGRO_SHADER_AUTO, 0);
    add_integer_constant("SHADER_GLSL", ALLEGRO_SHADER_AUTO, 0);
    add_integer_constant("SHADER_HLSL", ALLEGRO_SHADER_AUTO, 0);
    // Shader type.
    add_integer_constant("VERTEX_SHADER",   ALLEGRO_VERTEX_SHADER,  0);
    add_integer_constant("PIXEL_SHADER",    ALLEGRO_PIXEL_SHADER,   0);

    // Blend modes.
    add_integer_constant("ZERO",                ALLEGRO_ZERO,                   0);
    add_integer_constant("ONE",                 ALLEGRO_ONE,                    0);
    add_integer_constant("ALPHA",               ALLEGRO_ALPHA,                  0);
    add_integer_constant("INVERSE_ALPHA",       ALLEGRO_INVERSE_ALPHA,          0);
    add_integer_constant("SRC_COLOR",           ALLEGRO_SRC_COLOR,              0);
    add_integer_constant("DEST_COLOR",          ALLEGRO_DEST_COLOR,             0);
    add_integer_constant("INVERSE_SRC_COLOR",   ALLEGRO_INVERSE_SRC_COLOR,      0);
    add_integer_constant("INVERSE_DEST_COLOR",  ALLEGRO_INVERSE_DEST_COLOR,     0);
    add_integer_constant("CONST_COLOR",         ALLEGRO_CONST_COLOR,            0);
    add_integer_constant("INVERSE_CONST_COLOR", ALLEGRO_INVERSE_CONST_COLOR,    0);

    // Render states.
    add_integer_constant("ALPHA_TEST",          ALLEGRO_ALPHA_TEST,         0);
    add_integer_constant("ALPHA_FUNCTION",      ALLEGRO_ALPHA_FUNCTION,     0);
    add_integer_constant("ALPHA_TEST_VALUE",    ALLEGRO_ALPHA_TEST_VALUE,   0);
    add_integer_constant("WRITE_MASK",          ALLEGRO_WRITE_MASK,         0);
    add_integer_constant("DEPTH_TEST",          ALLEGRO_DEPTH_TEST,         0);
    add_integer_constant("DEPTH_FUNCTION",      ALLEGRO_DEPTH_FUNCTION,     0);

    // Blend operations.
    add_integer_constant("ADD",             ALLEGRO_ADD,            0);
    add_integer_constant("SRC_MINUS_DEST",  ALLEGRO_SRC_MINUS_DEST, 0);
    add_integer_constant("DEST_MINUS_SRC",  ALLEGRO_DEST_MINUS_SRC, 0);

    // NOTE: these aren't from the Allegro library.  See #define's above.
    // Subsystems - use with init().
    add_integer_constant("SUBSYSTEM_KEYBOARD",  __SUBSYSTEM_KEYBOARD__, 0);
    add_integer_constant("SUBSYSTEM_JOYSTICK",  __SUBSYSTEM_JOYSTICK__, 0);
    add_integer_constant("SUBSYSTEM_MOUSE",     __SUBSYSTEM_MOUSE__,    0);
    add_integer_constant("SUBSYSTEM_AUDIO",     __SUBSYSTEM_AUDIO__,    0);
    add_integer_constant("SUBSYSTEM_ALL",       __SUBSYSTEM_ALL__,      0);

    // Addons - use with init_addons().
    add_integer_constant("ADDON_PRIMITIVES",    __ADDON_PRIMITIVES__,   0);
    add_integer_constant("ADDON_IMAGE",         __ADDON_IMAGE__,        0);
    add_integer_constant("ADDON_FONT",          __ADDON_FONT__,         0);
    add_integer_constant("ADDON_TTF",           __ADDON_TTF__,          0);
    add_integer_constant("ADDON_ACODEC",        __ADDON_ACODEC__,       0);

    // Event sources.
    add_integer_constant("EVENT_SOURCE_JOYSTICK",   __EVENT_SOURCE_JOYSTICK__,  0);
    add_integer_constant("EVENT_SOURCE_KEYBOARD",   __EVENT_SOURCE_KEYBOARD__,  0);
    add_integer_constant("EVENT_SOURCE_MOUSE",      __EVENT_SOURCE_MOUSE__,     0);

    // Primitives.
    add_integer_constant("LINE_JOIN_NONE",      ALLEGRO_LINE_JOIN_NONE,     0);
    add_integer_constant("LINE_JOIN_BEVEL",     ALLEGRO_LINE_JOIN_BEVEL,    0);
    add_integer_constant("LINE_JOIN_ROUND",     ALLEGRO_LINE_JOIN_ROUND,    0);
    add_integer_constant("LINE_JOIN_MITER",     ALLEGRO_LINE_JOIN_MITER,    0);
    add_integer_constant("LINE_CAP_NONE",       ALLEGRO_LINE_CAP_NONE,      0);
    add_integer_constant("LINE_CAP_SQUARE",     ALLEGRO_LINE_CAP_SQUARE,    0);
    add_integer_constant("LINE_CAP_ROUND",      ALLEGRO_LINE_CAP_ROUND,     0);
    add_integer_constant("LINE_CAP_TRIANGLE",   ALLEGRO_LINE_CAP_TRIANGLE,  0);
    add_integer_constant("LINE_CAP_CLOSED",     ALLEGRO_LINE_CAP_CLOSED,    0);

    add_integer_constant("PRIM_POINT_LIST",     ALLEGRO_PRIM_POINT_LIST,        0);
    add_integer_constant("PRIM_LINE_LIST",      ALLEGRO_PRIM_LINE_LIST,         0);
    add_integer_constant("PRIM_LINE_STRIP",     ALLEGRO_PRIM_LINE_STRIP,        0);
    add_integer_constant("PRIM_LINE_LOOP",      ALLEGRO_PRIM_LINE_LOOP,         0);
    add_integer_constant("PRIM_TRIANGLE_LIST",  ALLEGRO_PRIM_TRIANGLE_LIST,     0);
    add_integer_constant("PRIM_TRIANGLE_STRIP", ALLEGRO_PRIM_TRIANGLE_STRIP,    0);
    add_integer_constant("PRIM_TRIANGLE_FAN",   ALLEGRO_PRIM_TRIANGLE_FAN,      0);

    // Display flags.
    add_integer_constant("WINDOWED", ALLEGRO_WINDOWED, 0);
    add_integer_constant("FULLSCREEN_WINDOW", ALLEGRO_FULLSCREEN_WINDOW, 0);
    add_integer_constant("FULLSCREEN", ALLEGRO_FULLSCREEN, 0);
    add_integer_constant("RESIZABLE", ALLEGRO_RESIZABLE, 0);
    add_integer_constant("MAXIMIZED", ALLEGRO_MAXIMIZED, 0);
    add_integer_constant("OPENGL", ALLEGRO_OPENGL, 0);
    add_integer_constant("OPENGL_3_0", ALLEGRO_OPENGL_3_0, 0);
    add_integer_constant("OPENGL_FORWARD_COMPATIBLE", ALLEGRO_OPENGL_FORWARD_COMPATIBLE, 0);
    add_integer_constant("OPENGL_ES_PROFILE", ALLEGRO_OPENGL_ES_PROFILE, 0);
    //add_integer_constant("DIRECT3D", ALLEGRO_DIRECT3D, 0);
    add_integer_constant("PROGRAMMABLE_PIPELINE", ALLEGRO_PROGRAMMABLE_PIPELINE, 0);
    add_integer_constant("FRAMELESS", ALLEGRO_FRAMELESS, 0);
    add_integer_constant("NOFRAME", ALLEGRO_NOFRAME, 0);
    add_integer_constant("GENERATE_EXPOSE_EVENTS", ALLEGRO_GENERATE_EXPOSE_EVENTS, 0);
    //add_integer_constant("GTK_TOP_LEVEL", ALLEGRO_GTK_TOP_LEVEL, 0);
    
    // 'Importance' - for e.g. set_new_display_option function.
    add_integer_constant("REQUIRE", ALLEGRO_REQUIRE, 0);
    add_integer_constant("SUGGEST", ALLEGRO_SUGGEST, 0);
    add_integer_constant("DONTCARE", ALLEGRO_DONTCARE, 0);
    // Display options.
    add_integer_constant("COLOR_SIZE", ALLEGRO_COLOR_SIZE, 0);
    add_integer_constant("RED_SIZE", ALLEGRO_RED_SIZE, 0);
    add_integer_constant("GREEN_SIZE", ALLEGRO_GREEN_SIZE, 0);
    add_integer_constant("BLUE_SIZE", ALLEGRO_BLUE_SIZE, 0);
    add_integer_constant("ALPHA_SIZE", ALLEGRO_ALPHA_SIZE, 0);
    add_integer_constant("RED_SHIFT", ALLEGRO_RED_SHIFT, 0);
    add_integer_constant("GREEN_SHIFT", ALLEGRO_GREEN_SHIFT, 0);
    add_integer_constant("BLUE_SHIFT", ALLEGRO_BLUE_SHIFT, 0);
    add_integer_constant("ALPHA_SHIFT", ALLEGRO_ALPHA_SHIFT, 0);
    add_integer_constant("ACC_RED_SIZE", ALLEGRO_ACC_RED_SIZE, 0);
    add_integer_constant("ACC_GREEN_SIZE", ALLEGRO_ACC_GREEN_SIZE, 0);
    add_integer_constant("ACC_BLUE_SIZE", ALLEGRO_ACC_BLUE_SIZE, 0);
    add_integer_constant("ACC_ALPHA_SIZE", ALLEGRO_ACC_ALPHA_SIZE, 0);
    add_integer_constant("STEREO", ALLEGRO_STEREO, 0);
    add_integer_constant("AUX_BUFFERS", ALLEGRO_AUX_BUFFERS, 0);
    add_integer_constant("DEPTH_SIZE", ALLEGRO_DEPTH_SIZE, 0);
    add_integer_constant("STENCIL_SIZE", ALLEGRO_STENCIL_SIZE, 0);
    add_integer_constant("SAMPLE_BUFFERS", ALLEGRO_SAMPLE_BUFFERS, 0);
    add_integer_constant("SAMPLES", ALLEGRO_SAMPLES, 0);
    add_integer_constant("RENDER_METHOD", ALLEGRO_RENDER_METHOD, 0);
    add_integer_constant("FLOAT_COLOR", ALLEGRO_FLOAT_COLOR, 0);
    add_integer_constant("FLOAT_DEPTH", ALLEGRO_FLOAT_DEPTH, 0);
    add_integer_constant("SINGLE_BUFFER", ALLEGRO_SINGLE_BUFFER, 0);
    add_integer_constant("SWAP_METHOD", ALLEGRO_SWAP_METHOD, 0);
    add_integer_constant("COMPATIBLE_DISPLAY", ALLEGRO_COMPATIBLE_DISPLAY, 0);
    add_integer_constant("UPDATE_DISPLAY_REGION", ALLEGRO_UPDATE_DISPLAY_REGION, 0);
    add_integer_constant("VSYNC", ALLEGRO_VSYNC, 0);
    add_integer_constant("MAX_BITMAP_SIZE", ALLEGRO_MAX_BITMAP_SIZE, 0);
    add_integer_constant("SUPPORT_NPOT_BITMAP", ALLEGRO_SUPPORT_NPOT_BITMAP, 0);
    add_integer_constant("CAN_DRAW_INTO_BITMAP", ALLEGRO_CAN_DRAW_INTO_BITMAP, 0);
    add_integer_constant("SUPPORT_SEPARATE_ALPHA", ALLEGRO_SUPPORT_SEPARATE_ALPHA, 0);
    add_integer_constant("AUTO_CONVERT_BITMAPS", ALLEGRO_AUTO_CONVERT_BITMAPS, 0);
    add_integer_constant("SUPPORTED_ORIENTATIONS", ALLEGRO_SUPPORTED_ORIENTATIONS, 0);
    add_integer_constant("OPENGL_MAJOR_VERSION", ALLEGRO_OPENGL_MAJOR_VERSION, 0);
    add_integer_constant("OPENGL_MINOR_VERSION", ALLEGRO_OPENGL_MINOR_VERSION, 0);

} // init_allegro_constants()

#endif

