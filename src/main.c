#include <stdio.h>
#include <time.h>
#include "struct.h"
#include "library.h"

int main() {
	srand(time(0));
	int l = 0;
	initWorld(World);
	l = Count(World);
	do {
		CopyPaste();
		PrintWorld(CopyWorld);
		//system("pause>nul");
		life(World);
		system("cls");
		puts("\n");

	} while (l != 0);
	return 0;
}
