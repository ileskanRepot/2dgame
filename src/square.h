#ifndef _SQUARE_H
#define _SQUARE_H

#include "color.h"

struct Square {
  // Heigth from Left
  int x;
  // Heigth from Top
  int y;

  // Width from X
  int w;
  // Heigth from Y
  int h;

  // Color
  struct Color col;
};

#endif