#include <stdio.h>
#include <locale.h>
int var=0;
int menu(){
	while(1){
		setlocale(LC_CTYPE,"rus");
		system("cls");
		printf("����\n");
		printf("1.������\n");
		printf("2.������� ����\n");
		printf("3.�����\n");
		printf("�������� ����� ����: ");
		scanf("%d", &var);
		if(var>0 && var<4)break;
		else{
			printf("������ ������������ ����� ����, ��������� ������\n");
		}
	}
	return 0;
}
