#include <stdio.h>
#include <time.h>
//#include <windows.h>
//#include <windowsx.h>
#include <stdlib.h>
#include "library.h"

int var=0;
int main() {
	int var=0;
	menu(var);
	srand(time(0));
	int l = 0;
	while(1){
	if(var==1){
		system("cls");
		initWorld(World);
		l = Count(World);
			do {
				CopyPaste(CopyWorld,World);
				PrintWorld(CopyWorld);
				//system("pause>nul");
				life(World);
				//setcurse(0,0);
				
				puts("\n");
			} while (l != 0);
			return 0;
		}
	if(var==2){
		system("cls");
		rules();
		system("pause>nul");
		main();
		}
	if(var==3){
		return 0;
	}
}
}
