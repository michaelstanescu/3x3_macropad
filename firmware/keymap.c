#include QMK_KEYBOARD_H
#include "gpio.h" // Included so QMK knows how to read pins

// Define the layer index
#define _BASE 0

// Track the physical state of the encoder button
bool encoder_btn_pressed = false;

// The 3x3 Keymap Grid
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        // Row 0: S1, S2, S3
        KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, 
        
        // Row 1: S4, S5, S6
        KC_F13,                KC_F14,                KC_F15,                
        
        // Row 2: S7, S8, S9
        KC_F16,                KC_F17,                KC_F18                 
    )
};

// 1. Initialize the Encoder Button Pin
void matrix_init_user(void) {
    // Set pin B6 as an input with an internal pull-up resistor
    gpio_set_pin_input_high(B6); 
}

// 2. Continuously read the Encoder Button Pin
void matrix_scan_user(void) {
    // Read the pin. It connects to Ground when pressed, so we invert it with "!"
    bool current_state = !gpio_read_pin(B6); 
    
    // If the state changed (you pressed or released it)
    if (current_state != encoder_btn_pressed) {
        encoder_btn_pressed = current_state;
        
        // Only trigger the mute toggle when the button is actively pressed down
        if (encoder_btn_pressed) {
            tap_code(KC_MUTE);   // Tap the Mute key once to toggle it on/off
        }
    }
}

// 3. Rotary Encoder Rotation
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { 
        if (clockwise) {
            tap_code(KC_VOLD); // Right turn increases volume
        } else {
            tap_code(KC_VOLU); // Left turn decreases volume
        }
    }
    return false; 
}
