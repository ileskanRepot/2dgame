#ifndef _ESSENTIALS_H_
#define _ESSENTIALS_H_

// If set terminal size is used. Else predefined number is used
const int INIT_TERMINAL_SIZE = 1 << 0;

int strLen(char *buffer);
void init();
int terminalSize(int *outBuff);

#endif