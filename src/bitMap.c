#include "bitMap.h"

struct BitMap createBitMap(int width, int height, struct Pixel initValue) {
  struct BitMap ret;
  ret.pixels = (struct Pixel **)malloc(sizeof(struct Pixel *) * height);
  for (int ii = 0; ii < height; ii++) {
    ret.pixels[ii] = (struct Pixel *)malloc(sizeof(struct Pixel) * width);

    for (int jj = 0; jj < width; jj++) {

    }
  }
  return ret;
}