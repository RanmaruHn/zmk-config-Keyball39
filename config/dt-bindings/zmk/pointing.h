/*
 * Stub for <dt-bindings/zmk/pointing.h>.
 *
 * The pinned ZMK (petejohanson/zmk@bc75de5) predates the pointer-API rename and
 * does NOT ship app/include/dt-bindings/zmk/pointing.h. keymap-editor keeps
 * re-adding `#include <dt-bindings/zmk/pointing.h>` on every save, which broke
 * the firmware build each time (fatal error: pointing.h: No such file).
 *
 * This empty header lives in the user config dir (which is on the keymap
 * preprocessor include path) so that include resolves harmlessly regardless of
 * how often the editor re-adds it. The keymap uses no pointing.h symbols
 * (no &mmv/&msc/MOVE_*/SCRL_*/&ip), so an empty stub is sufficient.
 *
 * Remove this only if/when migrating to an upstream ZMK that ships pointing.h.
 */

#pragma once
