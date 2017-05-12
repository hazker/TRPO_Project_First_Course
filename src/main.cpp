#include <stdio.h>
//#include <stdlib>
#include <windows.h>
#include "library.h"

int main() {
	//srand(time(0));
	int l = 0;
	initWorld(World);
	l = Count(World);
	do {
		CopyPaste();
		PrintWorld(CopyWorld);
		//system("pause>nul");
		life(World);
		//l=L(World,CopyWorld);
		Sleep(100);
		system("cls");
		//puts("\n");
		l = Count(World);
		printf("Count alive points: %d\n", l);
	} while (l != 0);
	return 0;
}
