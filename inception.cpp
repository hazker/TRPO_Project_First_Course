#include <stdio.h>
#include <conio.h>
#include <math.h>

#define WorldH 20
#define WorldW 20

int World[WorldH][WorldW]={0};
void initWorld(){
		for(int h=0;h<WorldW;h++){
			for(int w=0;w<WorldH;w++){
				printf("%d ",World[h][w]);
		}
		printf("\n");
	}
}
main(){
initWorld();

	
return 0;
}
