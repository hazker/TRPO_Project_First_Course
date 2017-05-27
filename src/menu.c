#include <stdio.h>
#include <locale.h>
int var=0;
int menu(){
	while(1){
		setlocale(LC_CTYPE,"rus");
		system("cls");
		printf("Меню\n");
		printf("1.Играть\n");
		printf("2.Правила игры\n");
		printf("3.Выход\n");
		printf("Выберете пункт меню: ");
		scanf("%d", &var);
		if(var>0 && var<4)break;
		else{
			printf("Выбран неправильный пункт мнею, выберайте заного\n");
		}
	}
	return 0;
}
