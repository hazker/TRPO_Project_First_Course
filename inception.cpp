#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>//random
#include <ctime>

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
void random(){
	bool justice=1;
		for(int h=0;h<WorldW;h++){
			for(int w=0;w<WorldH;w++){
				World[h][w]=rand()%2;
		}
	}
}
main(){
srand(time(0));
random();
initWorld();
return 0;
}
