#pragma once


// #####################################################################################################################################
// Configuration settings
// #####################################################################################################################################

// ------------------------------------------------------
// Tap-hold
// ------------------------------------------------------
#define TAPPING_TERM 200
// #define TAPPING_TERM_PER_KEY

#define PERMISSIVE_HOLD

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
// #define QUICK_TAP_TERM 0

// ------------------------------------------------------
// Auto Shift
// ------------------------------------------------------
// #define AUTO_SHIFT_NO_SETUP
#define AUTO_SHIFT_TIMEOUT        175

#define AUTO_SHIFT_NO_AUTO_REPEAT

//Do not Auto Shift special keys, which include -_, =+, [{, ]}, ;:, ‘“, ,<, .>, /?, and the KC_TAB.
// #define NO_AUTO_SHIFT_SPECIAL (simple define)

// Do not Auto Shift KC_TAB but leave Auto Shift enabled for the other special characters.
#define NO_AUTO_SHIFT_TAB

// Do not Auto Shift symbol keys, which include -_, =+, [{, ]}, ;:, ‘“, ,<, .>, and /?.
// #define NO_AUTO_SHIFT_SYMBOLS

// Do not Auto Shift numeric keys, zero through nine.
// #define NO_AUTO_SHIFT_NUMERIC

//Do not Auto Shift alpha characters, which include A through Z.
// #define NO_AUTO_SHIFT_ALPHA

// Auto Shift the enter key.
// #define AUTO_SHIFT_ENTER

// ------------------------------------------------------
// Mouse keys
// ------------------------------------------------------
#define MOUSE_EXTENDED_REPORT
// #define MOUSEKEY_DELAY          0
// #define MOUSEKEY_INTERVAL       16
// #define MOUSEKEY_WHEEL_DELAY    0
// #define MOUSEKEY_MAX_SPEED      6
// #define MOUSEKEY_TIME_TO_MAX    64

// #define MOUSEKEY_DELAY               10  // Delay between pressing a movement key and cursor movement
// #define MOUSEKEY_INTERVAL            20  // Time between cursor movements in milliseconds
// #define MOUSEKEY_MOVE_DELTA           8  // Step size
// #define MOUSEKEY_MAX_SPEED           10  // Maximum cursor speed at which acceleration stops
// #define MOUSEKEY_TIME_TO_MAX         30  // Time until maximum cursor speed is reached
// #define MOUSEKEY_WHEEL_DELAY         0  // Delay between pressing a wheel key and wheel movement
// #define MOUSEKEY_WHEEL_INTERVAL    100  // Time between wheel movements
// #define MOUSEKEY_WHEEL_DELTA         1  // Wheel movement step size
// #define MOUSEKEY_WHEEL_MAX_SPEED     4  // Maximum number of scroll steps per scroll action
// #define MOUSEKEY_WHEEL_TIME_TO_MAX  100  // Time until maximum scroll speed is reached
#define MOUSEKEY_WHEEL_DELAY         0  // Delay between pressing a wheel key and wheel movement
#define MOUSEKEY_WHEEL_INTERVAL     80  // Time between wheel movements
#define MOUSEKEY_WHEEL_DELTA         1  // Wheel movement step size
#define MOUSEKEY_WHEEL_MAX_SPEED    8  // Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX  100  // Time until maximum scroll speed is reached

// ------------------------------------------------------
// Combos
// ------------------------------------------------------

// ------------------------------------------------------
// CAPS_WORD
// ------------------------------------------------------


// ------------------------------------------------------
// Keyboard HW
// ------------------------------------------------------
// Enabling this option changes the startup behavior to listen for an
// active USB communication to delegate which part is master and which
// is slave. With this option enabled and theres’s USB communication,
// then that half assumes it is the master, otherwise it assumes it
// is the slave.
//
// I've found this helps with some ProMicros where the slave does not boot
#define SPLIT_USB_DETECT

// #define RGB_DISABLE_WHEN_USB_SUSPENDED     // turn off effects when suspended
// #define SPLIT_TRANSPORT_MIRROR             // If LED_MATRIX_KEYPRESSES or LED_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
// #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100  // limits maximum brightness of LEDs (max 255). Higher may cause the controller to crash.


#define DYNAMIC_KEYMAP_LAYER_COUNT 8 // for use with VIA
