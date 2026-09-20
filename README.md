# 3x3 Macropad (with Rotary Encoder)
This is a custom-designed, fully programmable mechanical macropad I built from scratch. I designed it to streamline my daily workflow, but it also served as a great hands-on project to learn full-cycle hardware development and embedded firmware. 

## Features
* **Layout:** A compact 3x3 grid (9 keys) perfect for macros, shortcuts, or a numpad.
* **Rotary Encoder:** A clickable dial mapped for volume control and muting/unmuting desktop audio.
* **Microcontroller:** Arduino Pro Micro (ATmega32U4).
* **Firmware:** Running QMK Firmware, meaning every key and encoder turn is completely customizable.

## KiCad
I handled the entire hardware design using KiCad 10.0:
* **Schematics:** Wired up the 3x3 switch matrix with diodes to prevent key ghosting, and mapped out the pins for the rotary encoder and Pro Micro.
* **PCB Layout:** Designed a compact board and routed all the traces cleanly.

## QMK Firmware
Inside the `/firmware` folder, you'll find the configuration files (`keymap.c`, `keyboard.json`, and `rules.mk`) I used to get it up and running.

## Folders
* `/` (Root): The main KiCad design files (`macropadpcb.kicad_pro`, `macropadpcb.kicad_sch`, `macropadpcb.kicad_pcb`).
* `/firmware`: The QMK config files.
* `/docs`: A PDF of the PCB layout, schematic, 3D renders, and physical images of the final product.
