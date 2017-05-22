#include <stdio.h>
#include <time.h>

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
		
		//system("cls");
		//puts("\n");
		l = Count(World);
		printf("Count alive points: %d\n", l);
	} while (l != 0);
	return 0;
}
