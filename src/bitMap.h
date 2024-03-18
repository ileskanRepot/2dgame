#ifndef _BITMAP_H
#define _BITMAP_H

#include <stdio.h>
#include <stdlib.h>

#include "color.h"
#include "config.h"

struct BitMap {
  struct Color **pixels;
  int width;
  int height;
};

/**
 * Create simple bitmap
 *
 * @param width width of the BitMap
 * @param height height of the BitMap
 * @param initValue the color which BitMap will be filled with
 */
struct BitMap createBitMap(int width, int height, struct Color initValue);

char freeBitMap(struct BitMap map);

char dispBitMap(struct BitMap map);

#endif