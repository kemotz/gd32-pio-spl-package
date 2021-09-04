/*!
    \file  lcd_font.h
    \brief the header file of LCD font
    
    \version 2019-02-19, V1.0.0, firmware for GD32E23x
*/

/*
    Copyright (c) 2019, GigaDevice Semiconductor Inc.

    All rights reserved.

    Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this 
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice, 
       this list of conditions and the following disclaimer in the documentation 
       and/or other materials provided with the distribution.
    3. Neither the name of the copyright holder nor the names of its contributors 
       may be used to endorse or promote products derived from this software without 
       specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT 
NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR 
PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
OF SUCH DAMAGE.
*/

#ifndef LCD_FONT_H
#define LCD_FONT_H

#define USE_ONCHIP_FLASH_FONT 1

const unsigned char asc16[] = {
#if USE_ONCHIP_FLASH_FONT
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, /* " " */
    0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00, /* "!" */
    0x00,0x00,0x6C,0x6C,0x24,0x24,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00, /* """ */
    0x00,0x24,0x24,0x24,0x24,0xFE,0x48,0x48,0x48,0x48,0xFC,0x90,0x90,0x90,0x90,0x00, /* "#" */
    0x00,0x10,0x3C,0x54,0x92,0x90,0x50,0x38,0x14,0x12,0x12,0x92,0x54,0x78,0x10,0x00, /* "$" */
    0x00,0x00,0x22,0x5C,0x94,0xA8,0x48,0x10,0x10,0x24,0x2A,0x52,0x54,0x88,0x00,0x00, /* "%" */
    0x00,0x00,0x30,0x48,0x48,0x50,0x20,0x6E,0x54,0x94,0x8C,0x88,0x8A,0x74,0x00,0x00, /* "&" */
    0x00,0x00,0x30,0x30,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, /* "'" */
    0x00,0x04,0x08,0x10,0x10,0x20,0x20,0x20,0x20,0x20,0x20,0x10,0x10,0x08,0x04,0x00, /* "(" */
    0x00,0x80,0x40,0x20,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x20,0x40,0x80,0x00, /* ")" */
    0x00,0x00,0x00,0x00,0x10,0x54,0x38,0x10,0x38,0x54,0x10,0x00,0x00,0x00,0x00,0x00, /* "*" */
    0x00,0x00,0x00,0x10,0x10,0x10,0x10,0xFE,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00, /* "+" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,0x00, /* "," */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, /* "-" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00, /* "." */
    0x00,0x00,0x04,0x04,0x08,0x08,0x10,0x10,0x20,0x20,0x40,0x40,0x80,0x80,0x00,0x00, /* "/" */
    0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, /* "0" */
    0x00,0x00,0x10,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00, /* "1" */
    0x00,0x00,0x38,0x44,0x82,0x82,0x04,0x08,0x10,0x20,0x40,0x82,0x84,0xFC,0x00,0x00, /* "2" */
    0x00,0x00,0x38,0x44,0x82,0x02,0x04,0x38,0x04,0x02,0x02,0x82,0x44,0x38,0x00,0x00, /* "3" */
    0x00,0x00,0x04,0x0C,0x14,0x14,0x24,0x24,0x44,0x44,0xFE,0x04,0x04,0x0E,0x00,0x00, /* "4" */
    0x00,0x00,0xFC,0x80,0x80,0x80,0xB8,0xC4,0x82,0x02,0x02,0x82,0x84,0x78,0x00,0x00, /* "5" */
    0x00,0x00,0x3C,0x42,0x82,0x80,0xB8,0xC4,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, /* "6" */
    0x00,0x00,0x7E,0x42,0x82,0x04,0x04,0x08,0x08,0x08,0x10,0x10,0x10,0x10,0x00,0x00, /* "7" */
    0x00,0x00,0x38,0x44,0x82,0x82,0x44,0x38,0x44,0x82,0x82,0x82,0x44,0x38,0x00,0x00, /* "8" */
    0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x46,0x3A,0x02,0x82,0x44,0x38,0x00,0x00, /* "9" */
    0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00, /* ":" */
    0x00,0x00,0x00,0x00,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,0x00,0x00, /* ";" */
    0x00,0x00,0x00,0x00,0x06,0x18,0x60,0x80,0x60,0x18,0x06,0x00,0x00,0x00,0x00,0x00, /* "<" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0xFE,0x00,0x00,0x00,0x00,0x00,0x00, /* "=" */
    0x00,0x00,0x00,0x00,0xC0,0x30,0x0C,0x02,0x0C,0x30,0xC0,0x00,0x00,0x00,0x00,0x00, /* ">" */
    0x00,0x38,0x44,0x82,0x82,0x02,0x04,0x08,0x10,0x10,0x10,0x00,0x10,0x10,0x00,0x00, /* "?" */
    0x00,0x00,0x38,0x44,0x82,0x9A,0xAA,0xAA,0xAA,0xAA,0xAA,0x96,0x80,0x42,0x3C,0x00, /* "@" */
    0x00,0x00,0x10,0x10,0x10,0x28,0x28,0x28,0x44,0x44,0x7C,0x44,0x44,0xEE,0x00,0x00, /* "A" */
    0x00,0x00,0xFC,0x42,0x42,0x42,0x42,0x7C,0x42,0x42,0x42,0x42,0x42,0xFC,0x00,0x00, /* "B" */
    0x00,0x00,0x3C,0x44,0x82,0x80,0x80,0x80,0x80,0x80,0x82,0x82,0x44,0x38,0x00,0x00, /* "C" */
    0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x42,0x44,0xF8,0x00,0x00, /* "D" */
    0x00,0x00,0xFC,0x44,0x42,0x40,0x44,0x7C,0x44,0x40,0x40,0x42,0x44,0xFC,0x00,0x00, /* "E" */
    0x00,0x00,0xFC,0x44,0x42,0x40,0x44,0x7C,0x44,0x40,0x40,0x40,0x40,0xF0,0x00,0x00, /* "F" */
    0x00,0x00,0x34,0x4C,0x82,0x80,0x80,0x80,0x8E,0x84,0x84,0x84,0x4C,0x34,0x00,0x00, /* "G" */
    0x00,0x00,0xEE,0x44,0x44,0x44,0x44,0x7C,0x44,0x44,0x44,0x44,0x44,0xEE,0x00,0x00, /* "H" */
    0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x7C,0x00,0x00, /* "I" */
    0x00,0x00,0x3E,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x88,0x88,0x70,0x00,0x00, /* "J" */
    0x00,0x00,0xEE,0x44,0x48,0x48,0x50,0x60,0x50,0x48,0x48,0x44,0x44,0xEE,0x00,0x00, /* "K" */
    0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x42,0x44,0xFC,0x00,0x00, /* "L" */
    0x00,0x00,0xC6,0x44,0x6C,0x6C,0x6C,0x54,0x54,0x54,0x44,0x44,0x44,0xEE,0x00,0x00, /* "M" */
    0x00,0x00,0xCE,0x44,0x64,0x64,0x64,0x54,0x54,0x4C,0x4C,0x4C,0x44,0xE4,0x00,0x00, /* "N" */
    0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, /* "O" */
    0x00,0x00,0xF8,0x44,0x42,0x42,0x42,0x44,0x78,0x40,0x40,0x40,0x40,0xE0,0x00,0x00, /* "P" */
    0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x82,0x82,0x82,0xBA,0x44,0x3C,0x02,0x00, /* "Q" */
    0x00,0x00,0xF0,0x48,0x44,0x44,0x44,0x48,0x70,0x48,0x44,0x44,0x44,0xE6,0x00,0x00, /* "R" */
    0x00,0x00,0x3C,0x44,0x82,0x80,0x40,0x30,0x0C,0x02,0x02,0x82,0x44,0x78,0x00,0x00, /* "S" */
    0x00,0x00,0x7C,0x54,0x92,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00, /* "T" */
    0x00,0x00,0xEE,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00, /* "U" */
    0x00,0x00,0xEE,0x44,0x44,0x44,0x44,0x28,0x28,0x28,0x28,0x10,0x10,0x10,0x00,0x00, /* "V" */
    0x00,0x00,0xEE,0x44,0x54,0x54,0x54,0x54,0x54,0x54,0x28,0x28,0x28,0x28,0x00,0x00, /* "W" */
    0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0x28,0x28,0x44,0x44,0xEE,0x00,0x00, /* "X" */
    0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x28,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00, /* "Y" */
    0x00,0x00,0x7E,0x44,0x84,0x08,0x08,0x10,0x20,0x20,0x40,0x82,0x84,0xFC,0x00,0x00, /* "Z" */
    0x00,0x1C,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x1C,0x00, /* "[" */
    0x00,0x00,0xEE,0x44,0x54,0x54,0xFE,0x54,0x54,0x54,0x28,0x28,0x28,0x28,0x00,0x00, /* "\" */
    0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00, /* "]" */
    0x00,0x30,0x48,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, /* "^" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFE,0x00, /* "_" */
    0x00,0x40,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, /* "`" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x84,0x04,0x7C,0x84,0x84,0x8C,0x76,0x00,0x00, /* "a" */
    0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x42,0x42,0x42,0x42,0x64,0x58,0x00,0x00, /* "b" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x80,0x80,0x80,0x80,0x44,0x38,0x00,0x00, /* "c" */
    0x00,0x00,0x0C,0x04,0x04,0x04,0x34,0x4C,0x84,0x84,0x84,0x84,0x4C,0x36,0x00,0x00, /* "d" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x84,0x84,0xFC,0x80,0x80,0x84,0x78,0x00,0x00, /* "e" */
    0x00,0x00,0x18,0x24,0x20,0x20,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00, /* "f" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x3A,0x44,0x44,0x78,0x80,0x7C,0x82,0x82,0x7C,0x00, /* "g" */
    0x00,0x00,0xC0,0x40,0x40,0x40,0x58,0x64,0x44,0x44,0x44,0x44,0x44,0xEE,0x00,0x00, /* "h" */
    0x00,0x00,0x10,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00, /* "i" */
    0x00,0x00,0x10,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0x60,0x00, /* "j" */
    0x00,0x00,0xC0,0x40,0x40,0x40,0x5C,0x48,0x50,0x60,0x50,0x48,0x44,0xEE,0x00,0x00, /* "k" */
    0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x11,0x10,0x10,0x10,0x10,0x10,0x39,0x00,0x00, /* "l" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xAC,0xD2,0x92,0x92,0x92,0x92,0x92,0xD6,0x00,0x00, /* "m" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x58,0xE4,0x44,0x44,0x44,0x44,0x44,0xEE,0x00,0x00, /* "n" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x44,0x82,0x82,0x82,0x82,0x44,0x38,0x00,0x00, /* "o" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xD8,0x64,0x42,0x42,0x42,0x64,0x58,0x40,0xE0,0x00, /* "p" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x36,0x4C,0x84,0x84,0x84,0x4C,0x34,0x04,0x0E,0x00, /* "q" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x6C,0x30,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00, /* "r" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x88,0x84,0x60,0x18,0x84,0x44,0x78,0x00,0x00, /* "s" */
    0x00,0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x20,0x20,0x24,0x18,0x00,0x00, /* "t" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xC6,0x42,0x42,0x42,0x42,0x42,0x46,0x3A,0x00,0x00, /* "u" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x28,0x10,0x10,0x00,0x00, /* "v" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x44,0x54,0x54,0x28,0x28,0x28,0x00,0x00, /* "w" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x28,0x10,0x10,0x28,0x44,0xEE,0x00,0x00, /* "x" */
    0x00,0x00,0x00,0x00,0x00,0x00,0xEE,0x44,0x44,0x28,0x28,0x10,0x10,0xA0,0xC0,0x00, /* "y" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x44,0x88,0x10,0x20,0x42,0x84,0xFC,0x00,0x00, /* "z" */
    0x00,0x0C,0x10,0x10,0x10,0x10,0x10,0x60,0x10,0x10,0x10,0x10,0x10,0x10,0x0C,0x00, /* "{" */
    0x00,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00, /* "|" */
    0x00,0xC0,0x20,0x20,0x20,0x20,0x20,0x18,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,0x00, /* "}" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x72,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00, /* "~" */
#endif
    0x00,
};

/* Digital tube font */
const unsigned char sz32[]={
#if USE_ONCHIP_FLASH_FONT
    /* "0" */
    0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x06,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x01,0x80,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,
    /* "1" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x03,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x00,0x03,0x80,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,
    /* "2" */
    0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0xFF,0xF0,0x00,0x01,0xFF,0xE0,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xF8,0x00,0x00,0x1F,0xE0,0x00,0x03,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x1F,0xF0,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xFC,0x00,0x00,0x1F,0xFE,0x00,
    /* "3" */
    0x00,0x00,0x00,0x00,0x03,0xFF,0x80,0x00,0x01,0xFF,0xC0,0x00,0x00,0xFF,0xC0,0x00,0x00,0x7F,0x80,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x7F,0x8C,0x00,0x01,0xFF,0xE0,0x00,0x01,0xFF,0xF0,0x00,0x00,0x7F,0x80,0x00,0x00,0x00,0x0C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x18,0x00,0x00,0x7F,0x80,0x00,0x00,0xFF,0xC0,0x00,0x01,0xFF,0xC0,0x00,0x03,0xFF,0x80,0x00,
    /* "4" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x01,0x00,0x03,0x00,0x03,0x00,0x03,0x80,0x07,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,
    /* "5" */
    0x00,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0x1F,0xE0,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xF8,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x06,0x00,0x00,0x3F,0xE0,0x00,0x00,0x7F,0xF0,0x00,0x00,0xFF,0xF0,0x00,0x01,0xFF,0xE0,0x00,
    /* "6" */
    0x00,0x00,0x00,0x00,0x00,0x1F,0xFC,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0x1F,0xE0,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x03,0x00,0x03,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x01,0x80,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,
    /* "7" */
    0x00,0x00,0x00,0x00,0x07,0xFF,0xE0,0x00,0x03,0xFF,0xC0,0x00,0x01,0xFF,0x88,0x00,0x00,0xFF,0x18,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,
    /* "8" */
    0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x06,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x03,0x00,0x03,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x01,0x80,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,
    /* "9" */
    0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x1F,0xE0,0x00,0x01,0x80,0x06,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0F,0x00,0x03,0x1F,0xE3,0x00,0x00,0x7F,0xF8,0x00,0x00,0x7F,0xFC,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x06,0x00,0x00,0x1F,0xE0,0x00,0x00,0x3F,0xF0,0x00,0x00,0x7F,0xF0,0x00,0x00,0xFF,0xE0,0x00,
    /* "." */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /* ":" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /* "%" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x06,0x00,0x0F,0xE0,0x06,0x00,0x00,0x00,0x0C,0x00,0x30,0x18,0x18,0x00,0x30,0x18,0x18,0x00,0x30,0x18,0x30,0x00,0x30,0x18,0x30,0x00,0x30,0x18,0x60,0x00,0x30,0x08,0xC0,0x00,0x07,0xC0,0xC0,0x00,0x0F,0xE0,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xE0,0x00,0x06,0x07,0xC0,0x00,0x06,0x30,0x18,0x00,0x0C,0x30,0x18,0x00,0x0C,0x30,0x18,0x00,0x18,0x30,0x18,0x00,0x30,0x30,0x18,0x00,0x30,0x30,0x18,0x00,0x60,0x00,0x00,0x00,0xC0,0x0F,0xE0,0x00,0xC0,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /* "��" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0xE0,0x00,0x08,0x87,0xFC,0x00,0x08,0x8E,0x03,0x00,0x08,0x98,0x01,0x80,0x07,0x18,0x00,0x80,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x18,0x01,0x00,0x00,0x0C,0x03,0x00,0x00,0x07,0xFC,0x00,0x00,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    /* "-" */
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x7F,0xF0,0x00,0x00,0x7F,0xE0,0x00,0x00,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
#endif
    0x00,
};

struct typFNT_GB162
{
    unsigned char Index[3];
    char Msk[32];
};

#define hz16_num   100

const struct typFNT_GB162 hz16[] = {
#if USE_ONCHIP_FLASH_FONT
    "��",0x00,0x00,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x10,0x10,0x10,0x10,0x1F,0xF0,0x04,0x40,0x44,0x44,0x24,0x44,0x14,0x48,0x14,0x50,0x04,0x40,0xFF,0xFE,0x00,0x00,
    "ʾ",0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFE,0x01,0x00,0x01,0x00,0x11,0x10,0x11,0x08,0x21,0x04,0x41,0x02,0x81,0x02,0x05,0x00,0x02,0x00,
    "��",0x00,0x04,0x27,0xC4,0x14,0x44,0x14,0x54,0x85,0x54,0x45,0x54,0x45,0x54,0x15,0x54,0x15,0x54,0x25,0x54,0xE5,0x54,0x21,0x04,0x22,0x84,0x22,0x44,0x24,0x14,0x08,0x08,
    "��",0x00,0x28,0x20,0x24,0x10,0x24,0x10,0x20,0x07,0xFE,0x00,0x20,0xF0,0x20,0x17,0xE0,0x11,0x20,0x11,0x10,0x11,0x10,0x15,0x10,0x19,0xCA,0x17,0x0A,0x02,0x06,0x00,0x02,
#endif
    0x00,
};

struct typFNT_GB242
{
    unsigned char Index[3];
    char Msk[72];
};

#define hz24_num   100

/* Song typeface Bold Small 2 font */
const struct typFNT_GB242 hz24[] = 
{
#if USE_ONCHIP_FLASH_FONT
    "��",0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFF,0x00,0x0F,0x03,0xC0,0x0C,0x00,0x40,0x1F,0xF8,0x60,0x18,0x00,0x60,0x08,0x00,0x40,0x0E,0x01,0xC0,0x07,0xFF,0x00,0x00,0x00,0x00,0x01,0x84,0x00,0x01,0x84,0x00,0x19,0x87,0x80,0x0F,0x8C,0xE0,0x07,0x8C,0x20,0x00,0xCC,0x00,0x03,0xFF,0xE0,0x1F,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    "ʾ",0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x1F,0xFF,0xC0,0x00,0x7F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xC0,0x3F,0xFF,0xE0,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x06,0x13,0x00,0x0C,0x13,0xC0,0x0C,0x18,0xF0,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    "��",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x39,0xFC,0x30,0x1F,0xCC,0x30,0x07,0x06,0xB0,0x0F,0x06,0xF0,0x19,0x07,0xB0,0x31,0x37,0xB0,0x31,0x36,0xF0,0x1F,0x27,0xF0,0x01,0x67,0xF0,0x01,0xE5,0xF0,0x01,0xE1,0xF0,0x00,0x41,0xF0,0x0C,0xF8,0xB0,0x3C,0xD8,0x30,0x00,0x8C,0x30,0x00,0x80,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    "��",0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x03,0x60,0x0C,0x03,0x70,0x0C,0x03,0x30,0x00,0x3F,0xE0,0x00,0x3F,0x80,0x08,0x01,0x00,0x3C,0x01,0x80,0x04,0x7F,0x80,0x04,0x7D,0x80,0x0C,0x00,0x80,0x0C,0x10,0xC0,0x0C,0x10,0xC0,0x0C,0x18,0x40,0x0C,0x1C,0x60,0x0F,0x7E,0x60,0x06,0x70,0x30,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
#endif
    0x00,
};

#endif /* LCD_FONT_H */

