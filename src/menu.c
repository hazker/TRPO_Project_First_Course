#include <stdio.h>
int var=0;
int menu(){
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
			printf("The wrong menu item is selected, choose again\n");
		}
	}
	return 0;
}
