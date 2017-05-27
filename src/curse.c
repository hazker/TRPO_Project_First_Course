#include <stdio.h>
#include <time.h>
void setcurse(int x, int y)
{ 
COORD coord; 
coord.X = x; 
coord.Y = y; 
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); 
};
