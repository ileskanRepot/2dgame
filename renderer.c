#include "renderer.h"
#include "config.h"

#include <stdio.h>

int fillScreen(char rr, char gg, char bb) {
  for (int ii = 0; ii < termSize[0]; ii++) {
    for (int jj = 0; jj < termSize[1]; jj++) {
      printf("\033[48;2;%d;%d;%d", rr, gg, bb);
    }
    printf("\n");
  }
  return 0;
}