#ifndef _BITMAP_H
#define _BITMAP_H

#include <stdlib.h>

struct BitMap {
  struct Pixel **pixels;
  int width;
  int height;
};

struct Pixel {
  int r;
  int g;
  int b;
};

struct BitMap createBitMap(int width, int height, struct Pixel initValue);

#endif