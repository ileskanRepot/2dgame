#ifndef _ESSENTIALS_H
#define _ESSENTIALS_H

#include "square.h"

// If set terminal size is used. Else predefined number is used
extern const int INIT_TERMINAL_SIZE;

int strLen(char *buffer);
void init();
int terminalSize(int *outBuff);

char isInside(int ii, int jj, struct Square square);

#endif