#include "renderer.h"
#include "config.h"
#include "essentials.h"

#include <stdio.h>

int fillScreen(unsigned char rr, unsigned char gg, unsigned char bb) {
  printf("ii: %d, jj: %d\n", termSize[0], termSize[1]);
  for (int ii = 0; ii < termSize[0]; ii++) {
    for (int jj = 0; jj < termSize[1]; jj++) {
      printf("\033[48;2;%d;%d;%dm ", rr, gg, bb);
      //   printf("\033[48;2;255;0;255mJ");
    }
    printf("\033[0m\n");
  }
  return 0;
}

int drawSquare(struct Square square) {
  for (int jj = 0; jj < termSize[1]; jj++) {
    printf("-");
  }
  printf("\n");
  for (int ii = 0; ii < termSize[0]; ii++) {
    for (int jj = 0; jj < termSize[1]; jj++) {
      if (isInside(ii, jj, square)) {
        printf("\033[48;2;%d;%d;%dm%s", 255, 0, 255, printChar);
      } else {
        printf("\033[48;2;%d;%d;%dm%s", backgroundColor.r, backgroundColor.g,
               backgroundColor.b, printChar);
      }
      // printf("\033[48;2;%d;%d;%dm ", rr, gg, bb);
      //   printf("\033[48;2;255;0;255mJ");
    }
    printf("\033[0m\n");
  }
  return 0;
}

int printBitMap();