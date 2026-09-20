# 3x3 Macropad (with Rotary Encoder)

A custom-designed, fully programmable mechanical macropad built to streamline desktop workflows and demonstrate full-cycle hardware development and embedded firmware integration. 

## System Features

*   **Layout:** A compact 3x3 grid (9 keys) designed for macros, shortcuts, or a dedicated numpad.
*   **Rotary Encoder:** A clickable dial mapped for master volume control and audio muting.
*   **Microcontroller:** Arduino Pro Micro (ATmega32U4).
*   **Firmware:** QMK Firmware integration, allowing complete customization of every key switch and encoder action.
*   **Components:** Custom 3D-printed keycaps and rotary encoder knob.

## Hardware Design (KiCad)

The hardware architecture and PCB layout were developed using KiCad 10.0:

*   **Schematics:** A 3x3 switch matrix configured with diodes to prevent key ghosting, alongside integrated pin mappings for the rotary encoder and microcontroller.
*   **PCB Layout:** A compact board footprint with optimized trace routing.

## QMK Firmware

The `/firmware` directory contains the configuration files (`keymap.c`, `keyboard.json`, and `rules.mk`) required to compile and flash the system for custom keybindings.

## Repository Structure

*   `/` (Root): The primary KiCad design files (`macropadpcb.kicad_pro`, `macropadpcb.kicad_sch`, `macropadpcb.kicad_pcb`).
*   `/firmware`: The QMK configuration source files.
*   `/docs`: System architecture documentation, including a PDF of the PCB layout, schematics, 3D renders, and physical images of the final build.
