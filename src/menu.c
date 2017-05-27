#include <stdio.h>
int var=0;
int menu(){
	while(1){
		system("cls");
		printf("Меню\n");
		printf("1.Играть\n");
		printf("2.Правила игры\n");
		printf("3.Выход\n");
		printf("Выбор пункта меню: ");
		scanf("%d", &var);
		if(var>0 && var<4)break;
		else{
			printf("Выбран неправильный пункт меню, \n");
		}
	}
	return 0;
}
