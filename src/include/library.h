#ifndef LIBRARY_H
#define LIBRARY_H
#define WorldH 40
#define WorldW 40

int World[WorldH][WorldW];
int CopyWorld[WorldH][WorldW];

int initWorld(int world[WorldH][WorldW]);
int PrintWorld(int world[WorldH][WorldW]);
int menu();
void curse(int XPos, int YPos);
void rules();
int Count(int world[WorldH][WorldW]);
int CopyPaste(int copyworld[WorldH][WorldW],int world[WorldH][WorldW]);
int life(int world[WorldH][WorldW]);

#endif


