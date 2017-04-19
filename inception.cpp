#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale>

main(){
	int i=0,j,n=30,m=30,a[30][30];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			a[i][j]=1;
			printf("%4d ",a[i][j]);
		}
		puts("\n");
	}
return 0;
}
