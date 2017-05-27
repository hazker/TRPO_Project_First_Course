#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <windowsx.h>

#include "struct.h"
#include "library.h"
#include "function.c"
#include "curse.c"
#include "menu.c"

int main() {
	menu();
	srand(time(0));
	int l = 0;
	if(var==1){
		initWorld(World);
		l = Count(World);
			do {
				CopyPaste();
				PrintWorld(CopyWorld);
				//system("pause>nul");
				life(World);
				setcurse(0,0);
				//system("cls");
				puts("\n");
			} while (l != 0);
		}
	if(var==2){
		}
	if(var==3){
		return 0;
	}
}
