#ifndef STRUCT_H
#define STRUCT_H
#define WorldH 40
#define WorldW 40

struct Point {
	unsigned live : 1;
};

struct Point World[WorldH][WorldW] = { 0 };
struct Point CopyWorld[WorldH][WorldW] = { 0 };

#endif 
