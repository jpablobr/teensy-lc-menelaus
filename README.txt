Teensy LC Menelaus (Dvorak 40% keyboard layout) 

Specific Menelaus setup for the Teensy LC microcontroller.

Description:

Menelaus is the son of https://gitlab.com/technomancy/atreus.

Most of the heavy lifting on this repo comes from:

https://github.com/tmk/tmk_keyboard

See the keyboards section (this is basically one more keyboard)

Keyboard Layout:

See keymap_menelaus.c for modifiers, etc...

Layer 0: Default/Main (Dvorak) layer (mostly letters and modifiers)
.--------------------------------------------.       .-------------------------------.
|' (FN2)      |, (FN3)|. (FN4)|P  |Y         |       |F  |G  |C   |R   |L            |
|--------------------------------------------|       |-------------------------------|
|A            |O      |E      |U  |I         |       |D  |H  |T   |N   |S            |
|--------------------------------------------|       |-------------------------------|
|; SHIFT (FN5)|Q      |J      |K  |X         |       |B  |M  |W   |V   |Z SHIFT (FN6)|
|--------------------------------------------+-------+-------------------------------|
|LCTRL        |LALT   |LGUI   |FN0|TAB (FN11)|ESC|FN1|SPC|FN0|RGUI|RALT|RCTRL        |
'------------------------------------------------------------------------------------'

Layer 1 (layover on FN0 and switch on FN1)
LHS: F1-F15
RHS: Movement
SPC -> ESC
.----------------------------.         .--------------------------------.
|F1   |F2  |F3  |F4    |F5   |         |   |GUI+LEFT|PGDN|PGUP|GUI+RIGHT|
|----------------------------|         |--------------------------------|
|F6   |F7  |F8  |F9    |F10  |         |   |LEFT    |DOWN|UP  |RIGHT    |
|----------------------------|         |--------------------------------|
|F11  |F12 |F13 |F14   |F15  |         |   |        |END |HOME|         |
|----------------------------+---------+--------------------------------|
|TRNS |TRNS|TRNS|>TRNS<|TRNS |TRNS|TRNS|F13|>TRNS<  |TRNS|TRNS|TRNS     |
'-----------------------------------------------------------------------'

Layer 2 (FN2): Numbers while pressing and "'" on tap
.------------------------.         .------------------------.
|>'< |    |    |    |    |         |    |7   |8   |9   |0   |
|------------------------|         |------------------------|
|    |    |    |    |    |         |+   |4   |5   |6   |=   |
|------------------------|         |------------------------|
|    |    |    |    |    |         |-   |1   |2   |3   |    |
|------------------------+---------+------------------------|
|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
'-----------------------------------------------------------'

Layer 3 (FN3): Symbols (numbers shifted) while pressing and "," on tap
.------------------------.         .------------------------.
|    |>,< |    |    |    |         |    |&   |*   |    |    |
|------------------------|         |------------------------|
|    |    |    |    |    |         |    |%   |%   |^   |    |
|------------------------|         |------------------------|
|    |    |    |    |    |         |    |!   |@   |#   |    |
|------------------------+---------+------------------------|
|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
'-----------------------------------------------------------'

Layer 4 (FN4): Symbols while pressing and "." on tap
.------------------------.         .------------------------.
|    |    |>.< |    |    |         |    |{   |}   |(   |)   |
|------------------------|         |------------------------|
|    |    |    |    |    |         |?   |[   |]   |`   |~   |
|------------------------|         |------------------------|
|    |    |    |    |    |         |_   |/   |\   ||   |    |
|------------------------+---------+------------------------|
|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|
'-----------------------------------------------------------'

Layer 5 (FN11): Vol, media and misc while pressing and "Tab" on tap
.-------------------------.         .----------------------------.
|    |    |    |    |     |         |MUTE   |VOL-|VOL+|CAPS|BSPC |
|-------------------------|         |----------------------------|
|    |    |    |    |     |         |       |HELP|ESC |F13 |ENTER|
|-------------------------|         |----------------------------|
|    |    |    |    |     |         |MNXT   |MPRV|MSTP|MPLY|MSEL |
|-------------------------+---------+----------------------------|
|TRNS|TRNS|TRNS|TRNS|>TAB<|TRNS|TRNS|GUI+DEL|TRNS|TRNS|TRNS|TRNS |
'----------------------------------------------------------------'

Layer 6 (FN11): Mouse
KC_BTN1, KC_BTN2, KC_BTN3, KC_BTN4, KC_BTN5 for mouse buttons
KC_MS_U, KC_MS_D, KC_MS_L, KC_MS_R for mouse cursor
KC_WH_U, KC_WH_D, KC_WH_L, KC_WH_R for mouse wheel
.-------------------------.         .------------------------.
|    |    |    |    |     |         |   |    |    |    |     |
|-------------------------|         |------------------------|
|    |    |    |    |     |         |   |LEFT|DOWN|UP  |RIGHT|
|-------------------------|         |------------------------|
|    |    |    |    |     |         |   |LEFT|DOWN|UP  |RIGHT|
|-------------------------+---------+------------------------|
|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS|TRNS |
'------------------------------------------------------------'

Environment and Setup:

https://docs.qmk.fm has a worthwhile reading in general for setting up the build
environment. However, other than that, it has nothing to do with this TMK
keyboard specific repo. See instructions.md for the rest of the setup - mostly
for the ChibiOS setup.

https://docs.qmk.fm/#/newbs_getting_started

See also: https://github.com/tmk/tmk_keyboard/issues/529 for known issues with ChibiOS.

More to come...
