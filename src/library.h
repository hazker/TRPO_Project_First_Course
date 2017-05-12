#ifndef LIBRARY_H
#define LIBRARY_H
const int WorldH=40;
const int WorldW=40;

struct Point {
	unsigned live : 1;
};

Point World[WorldH][WorldW] = { 0 };
Point CopyWorld[WorldH][WorldW] = { 0 };

void initWorld(Point world[WorldH][WorldW]);
void PrintWorld(Point world[WorldH][WorldW]);
int Count(Point world[WorldH][WorldW]);
void CopyPaste();
void life(Point world[WorldH][WorldW]);

#endif


