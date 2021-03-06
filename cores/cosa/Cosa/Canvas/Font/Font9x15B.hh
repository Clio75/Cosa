/**
 * @file Font9x15B.hh
 * @version 1.0
 *
 * @section License
 * Copyright (C) 2014, jediunix
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 */

#ifndef COSA_FONT_FONT9X15B_HH
#define COSA_FONT_FONT9X15B_HH

#include "Cosa/Canvas/Font.hh"

/**
 * Font size 9x15B.
 */
class Font9x15B : public Font {
public:
  /**
   * Construct font (9x15B) singleton.
   */
  Font9x15B() :
    Font(width, height, first, last, bitmap)
  {}

private:
  static const uint8_t bitmap[] PROGMEM;
  static const uint8_t width;
  static const uint8_t height;
  static const uint8_t first;
  static const uint8_t last;
};

extern Font9x15B font9x15B;

#endif
