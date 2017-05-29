#include <stdio.h>
#include "library.h"
#define N 80

void rules(){
	char str[N];
	FILE *f;
	f=fopen("rules/rules.txt","r");
	while(fgets(str,N,f)!=NULL)
		printf("%s",str);
		printf("\n");
		fclose(f);
}
