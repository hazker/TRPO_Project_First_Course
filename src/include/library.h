#ifndef LIBRARY_H
#define LIBRARY_H

#include "struct.h"

int initWorld(struct Point world[WorldH][WorldW]);
int PrintWorld(struct Point world[WorldH][WorldW]);
int Count(struct Point world[WorldH][WorldW]);
void CopyPaste();
int life(struct Point world[WorldH][WorldW]);

#endif


