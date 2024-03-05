#include "essentials.h"

#include <sys/ioctl.h>
#include <unistd.h>

#include "config.h"

void init(int flags) {
  if (flags & INIT_TERMINAL_SIZE) {
    terminalSize(termSize);
  } else {
    termSize[0] = 15;
    termSize[1] = 15;
  }
}

int strLen(char *buffer) {
  int ii = 0;
  while (buffer[ii] != '\0') {
    ii++;
  }
  return ii;
}

/**
 * Write buffer to stdout
 * @param buffer null terminated character array
 * @return 0 in success, -1 on fail
 */
int writeOut(char *buffer) {
  int len = strLen(buffer);
  int written = 0;
  do {
    int ret = write(STDOUT_FILENO, &buffer[written], len);
    if (ret < 0) {
      return -1;
    }
    written += ret;
  } while (written < len);

  return 0;
}

/**
 * Function to get terminal size
 *
 * @param outBuff buffer where the size is written. Width is in the first index
 * and height in the second
 * @return 0 if everything went good. -1 if something failed
 */
int terminalSize(int *outBuff) {
  struct winsize sz;
  if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &sz) < -1) {
    return -1;
  };
  outBuff[0] = sz.ws_col;
  outBuff[1] = sz.ws_row;
  return 0;
}