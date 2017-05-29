#include <stdio.h>
#define N 80

int rules(){
	char str[N];
	FILE *f;
	f=fopen("rules/rules.txt","r");
	while(fgets(str,N,f)!=NULL)
		printf("%s",str);
		printf("\n");
		fclose(f);
		return 1;
	if(fgets(str,N,f))==NULL){
		return 0;
	}
}
