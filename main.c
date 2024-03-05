#include "config.h"
#include "essentials.h"
#include "renderer.h"

#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>

/**
 * Main function
 * @return -13 when writing to stdout fails
 */
int main() {
  init(0);

  char buff[] = "\033[32mMOI\n";
  // if (writeOut(buff) < 0) {
  //   return -13;
  // }
  // int termSize[2];
  // terminalSize(termSize);
  // out[6] = writeOut();
  // printf("\n");
  fillScreen(0xff, 0, 0xff);

  return 0;
}
