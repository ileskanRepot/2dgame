#ifndef _RENDERER_H
#define _RENDERER_H

#include "config.h"
#include "square.h"
int fillScreen(unsigned char rr, unsigned char gg, unsigned char bb);

int drawSquare(struct Square square);
#endif