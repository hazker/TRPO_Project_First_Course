#ifndef LIBRARY_H
#define LIBRARY_H

#include "struct.h"

int initWorld(struct Point world[WorldH][WorldW]);
void PrintWorld(struct Point world[WorldH][WorldW]);
int Count(struct Point world[WorldH][WorldW]);
void CopyPaste();
void life(struct Point world[WorldH][WorldW]);

#endif


