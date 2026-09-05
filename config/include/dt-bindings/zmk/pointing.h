/*
 * Compatibility shim.
 *
 * keymap-editor emits `#include <dt-bindings/zmk/pointing.h>`, which only
 * exists in mainline ZMK. This config is pinned (see config/west.yml) to
 * petejohanson/zmk @ feat/pointers-move-scroll, where the same MOVE_*,
 * SCRL_* and *CLK constants live in mouse.h instead.
 *
 * Picked up because ZMK adds the config dir to DTS_ROOT when config/dts
 * exists, and Zephyr then puts config/include on the devicetree include
 * path. Delete this (and config/dts/) if west.yml ever moves to mainline.
 */
#pragma once

#include <dt-bindings/zmk/mouse.h>
