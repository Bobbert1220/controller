/* Copyright (C) 2013-2014 by Jacob Alexander
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef __KEYMAP_H
#define __KEYMAP_H

// This file contains various key layouts for the Sanyo MBC-55X Computer Keyboard


// ----- Variables -----

// Default 1-indexed key mappings
static uint8_t DefaultMap_Lookup[] = {
				0, // 0x00
				0, // 0x01
				0, // 0x02
				0, // 0x03
				0, // 0x04
				0, // 0x05
				0, // 0x06
				0, // 0x07
				KEY_BACKSPACE, // 0x08
				KEY_TAB, // 0x09
				0, // 0x0A
				0, // 0x0B
				0, // 0x0C
				KEY_ENTER, // 0x0D
				0, // 0x0E
				0, // 0x0F
				0, // 0x10
				0, // 0x11
				0, // 0x12
				0, // 0x13
				0, // 0x14
				0, // 0x15
				0, // 0x16
				0, // 0x17
				0, // 0x18
				0, // 0x19
				0, // 0x1A
				KEY_ESC, // 0x1B
				0, // 0x1C
				0, // 0x1D
				0, // 0x1E
				0, // 0x1F
				KEY_SPACE, // 0x20
				0, // 0x21
				0, // 0x22
				0, // 0x23
				0, // 0x24
				0, // 0x25
				0, // 0x26
				KEY_QUOTE, // 0x27
				0, // 0x28
				0, // 0x29
				0, // 0x2A
				0, // 0x2B
				KEY_COMMA, // 0x2C
				KEY_MINUS, // 0x2D
				KEY_PERIOD, // 0x2E
				KEY_SLASH, // 0x2F
				KEY_0, // 0x30
				KEY_1, // 0x31
				KEY_2, // 0x32
				KEY_3, // 0x33
				KEY_4, // 0x34
				KEY_5, // 0x35
				KEY_6, // 0x36
				KEY_7, // 0x37
				KEY_8, // 0x38
				KEY_9, // 0x39
				0, // 0x3A
				KEY_SEMICOLON, // 0x3B
				0, // 0x3C
				KEY_EQUAL, // 0x3D
				0, // 0x3E
				0, // 0x3F
				0, // 0x40
				0, // 0x41
				0, // 0x42
				0, // 0x43
				0, // 0x44
				0, // 0x45
				0, // 0x46
				0, // 0x47
				0, // 0x48
				0, // 0x49
				0, // 0x4A
				0, // 0x4B
				0, // 0x4C
				0, // 0x4D
				0, // 0x4E
				0, // 0x4F
				0, // 0x50
				0, // 0x51
				0, // 0x52
				0, // 0x53
				0, // 0x54
				0, // 0x55
				0, // 0x56
				0, // 0x57
				0, // 0x58
				0, // 0x59
				0, // 0x5A
				KEY_LEFT_BRACE, // 0x5B
				KEY_BACKSLASH, // 0x5C
				KEY_RIGHT_BRACE, // 0x5D
				0, // 0x5E
				0, // 0x5F
				KEY_TILDE, // 0x60
				KEY_A, // 0x61
				KEY_B, // 0x62
				KEY_C, // 0x63
				KEY_D, // 0x64
				KEY_E, // 0x65
				KEY_F, // 0x66
				KEY_G, // 0x67
				KEY_H, // 0x68
				KEY_I, // 0x69
				KEY_J, // 0x6A
				KEY_K, // 0x6B
				KEY_L, // 0x6C
				KEY_M, // 0x6D
				KEY_N, // 0x6E
				KEY_O, // 0x6F
				KEY_P, // 0x70
				KEY_Q, // 0x71
				KEY_R, // 0x72
				KEY_S, // 0x73
				KEY_T, // 0x74
				KEY_U, // 0x75
				KEY_V, // 0x76
				KEY_W, // 0x77
				KEY_X, // 0x78
				KEY_Y, // 0x79
				KEY_Z, // 0x7A
				0, // 0x7B
				0, // 0x7C
				0, // 0x7D
				0, // 0x7E
				KEY_DELETE, // 0x7F
				0, // 0x80
				0, // 0x81
				0, // 0x82
				0, // 0x83
				0, // 0x84
				0, // 0x85
				0, // 0x86
				0, // 0x87
				0, // 0x88
				0, // 0x89
				0, // 0x8A
				0, // 0x8B
				0, // 0x8C
				0, // 0x8D
				0, // 0x8E
				0, // 0x8F
				0, // 0x90
				0, // 0x91
				0, // 0x92
				0, // 0x93
				0, // 0x94
				0, // 0x95
				0, // 0x96
				0, // 0x97
				0, // 0x98
				0, // 0x99
				0, // 0x9A
				0, // 0x9B
				0, // 0x9C
				0, // 0x9D
				0, // 0x9E
				0, // 0x9F
				0, // 0xA0
				0, // 0xA1
				0, // 0xA2
				0, // 0xA3
				0, // 0xA4
				0, // 0xA5
				0, // 0xA6
				0, // 0xA7
				0, // 0xA8
				0, // 0xA9
				0, // 0xAA
				0, // 0xAB
				0, // 0xAC
				0, // 0xAD
				0, // 0xAE
				0, // 0xAF
				0, // 0xB0
				KEYPAD_0, // 0xB1
				KEYPAD_PERIOD, // 0xB2
				0, // 0xB3
				0, // 0xB4
				0, // 0xB5
				0, // 0xB6
				0, // 0xB7
				0, // 0xB8
				0, // 0xB9
				0, // 0xBA
				0, // 0xBB
				0, // 0xBC
				0, // 0xBD
				0, // 0xBE
				0, // 0xBF
				KEYPAD_1, // 0xC0
				KEYPAD_2, // 0xC1
				KEYPAD_3, // 0xC2
				KEYPAD_ENTER, // 0xC3
				0, // 0xC4
				0, // 0xC5
				0, // 0xC6
				0, // 0xC7
				0, // 0xC8
				0, // 0xC9
				0, // 0xCA
				0, // 0xCB
				0, // 0xCC
				0, // 0xCD
				0, // 0xCE
				0, // 0xCF
				KEYPAD_4, // 0xD0
				KEYPAD_5, // 0xD1
				KEYPAD_6, // 0xD2
				KEYPAD_COMMA, // 0xD3
				0, // 0xD4
				0, // 0xD5
				0, // 0xD6
				0, // 0xD7
				0, // 0xD8
				0, // 0xD9
				0, // 0xDA
				0, // 0xDB
				0, // 0xDC
				0, // 0xDD
				0, // 0xDE
				0, // 0xDF
				0, // 0xE0
				KEYPAD_7, // 0xE1
				KEYPAD_8, // 0xE2
				KEYPAD_9, // 0xE3
				KEYPAD_MINUS, // 0xE4
				0, // 0xE5
				0, // 0xE6
				0, // 0xE7
				0, // 0xE8
				0, // 0xE9
				0, // 0xEA
				0, // 0xEB
				0, // 0xEC
				0, // 0xED
				0, // 0xEE
				0, // 0xEF
				0, // 0xF0
				KEY_UP, // 0xF1
				KEY_DOWN, // 0xF2
				KEY_LEFT, // 0xF3
				KEY_RIGHT, // 0xF4
				KEY_LSHIFT, // 0xF5
				KEY_CTRL, // 0xF6
				0, // 0xF7
				0, // 0xF8
				0, // 0xF9
				0, // 0xFA
				0, // 0xFB
				0, // 0xFC
				0, // 0xFD
				0, // 0xFE
				0, // 0xFF
};

#endif

