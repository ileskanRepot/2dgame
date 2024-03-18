#include "config.h"
#include "essentials.h"
#include "renderer.h"
#include "square.h"

#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>

/**
 * Main function
 * @return -13 when writing to stdout fails
 */
int main() {
  init(0);

  fillScreen(255, 0, 255);
  struct Square mySquare;
  mySquare.x = 1;
  mySquare.y = 2;
  mySquare.w = 2;
  mySquare.h = 2;
  drawSquare(mySquare);

  return 0;
}
