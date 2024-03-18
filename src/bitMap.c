#include "bitMap.h"

struct BitMap createBitMap(int width, int height, struct Color initValue) {
  struct BitMap ret;
  ret.pixels = (struct Color **)malloc(sizeof(struct Color *) * height);
  for (int ii = 0; ii < height; ii++) {
    ret.pixels[ii] = (struct Color *)malloc(sizeof(struct Color) * width);
    for (int jj = 0; jj < width; jj++) {
      struct Color col;
      col.r = initValue.r;
      col.g = initValue.g;
      col.b = initValue.b;
      ret.pixels[ii][jj] = col;
    }
  }
  ret.height = height;
  ret.width = width;

  return ret;
}

char freeBitMap(struct BitMap map) {
  for (int ii = 0; ii < map.height; ii++) {
    free(map.pixels[ii]);
  }
  free(map.pixels);
  return 0;
}

char dispBitMap(struct BitMap map) {
  for (int ii = 0; ii < map.height; ii++) {
    for (int jj = 0; jj < map.width; jj++) {
      printf("\033[48;2;%d;%d;%dm%s", map.pixels[ii][jj].r,
             map.pixels[ii][jj].g, map.pixels[ii][jj].b, printChar);
    }
    printf("\033[0m\n");
  }
  return 1;
}