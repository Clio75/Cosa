/**
 * @file Font5x8.hh
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

#ifndef COSA_FONT_FONT5X8_HH
#define COSA_FONT_FONT5X8_HH

#include "Cosa/Canvas/Font.hh"

/**
 * Font size 5x8.
 */
class Font5x8 : public Font {
public:
  /**
   * Construct font (5x8) singleton.
   */
  Font5x8() :
    Font(width, height, first, last, bitmap)
  {}

private:
  static const uint8_t bitmap[] PROGMEM;
  static const uint8_t width;
  static const uint8_t height;
  static const uint8_t first;
  static const uint8_t last;
};

extern Font5x8 font5x8;

#endif
