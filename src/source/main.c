#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "library.h"
#include <unistd.h>

int var=0;
int main() {
		while(1){
		getchar();
		system("clear");
		printf("Menu\n");
		printf("1.Play\n");
		printf("2.Rules of the game\n");
		printf("3.Exit\n");
		printf("Select the menu item: ");
		scanf("%d", &var);
		if(var>0 && var<4)break;
		else{	getchar();
			printf("The wrong menu item is selected, press enter to continue\n");
			
		}
	}
	srand(time(0));
	int l = 0;
	while(1){
	if(var==1){
		system("clear");
		initWorld(World);
		l = Count(World);
			do {

				CopyPaste(CopyWorld,World);
				PrintWorld(CopyWorld);
				life(World);
				sleep(0.6);
				system("clear");
				puts("\n");
			} while (l != 0);
			return 0;
		}
	if(var==2){
		system("clear");
		rules();
		getchar();
		main();
		}
	if(var==3){
		return 0;
	}
}
}
