#include <stdio.h>
#include <time.h>
//#include <windows.h>
//#include <windowsx.h>
#include <stdlib.h>
#include "function.c"
#include "life.c"
#include "menu.c"
#include "rules.c"

int var=0;
int main() {
		while(1){
		system("cls");
		printf("Menu\n");
		printf("1.Play\n");
		printf("2.Rules of the game\n");
		printf("3.Exit\n");
		printf("Select the menu item: ");
		scanf("%d", &var);
		if(var>0 && var<4)break;
		else{
			printf("The wrong menu item is selected, press any button to continue\n");
			//system("pause>nul");
		}
	}
	//menu();
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
				system("cls");
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
