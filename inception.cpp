#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale>

main(){
	setlocale(LC_ALL, "Russian");
	
	int i=0,j,n,m;
	printf("¬ведите n ");
	scanf("%d",n);
	printf("¬ведите m ");
	scanf("%d",m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j]=1;
			printf("%4d ",a[i][j]);
		}
		puts("\n");
	}
	
return 0;
}
