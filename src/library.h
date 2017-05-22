#ifndef LIBRARY_H
#define LIBRARY_H

#define WorldH 40
#define WorldW 40

struct Point {
	unsigned live : 1;
};

struct Point World[WorldH][WorldW] = { 0 };
struct Point CopyWorld[WorldH][WorldW] = { 0 };

int initWorld(struct Point world[WorldH][WorldW]);
void PrintWorld(struct Point world[WorldH][WorldW]);
int Count(struct Point world[WorldH][WorldW]);
void CopyPaste();
void life(struct Point world[WorldH][WorldW]);

#endif


