#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>//random
#include <ctime>

#define WorldH 20
#define WorldW 20

struct Point{
	unsigned live:1;
};

Point World[WorldH][WorldW]={0};

void initWorld(){
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			int rn=rand()%2;
			if(rn==1){
				World[h][w].live=1;
			}else{
				World[h][w].live=0;
				}
		}
	}
}
void printWorld(){
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			if(World[h][w].live==1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

unsigned int count (Point World[][WorldH]){
	unsigned int count=0;
	unsigned i,j;
	for (i=0;i<WorldH;i++){
		for (j=0;j<World; j++){
			if (World[i][j].live=1)
			count++;
		}
	}
	return count;
}

main(){
srand(time(0));
initWorld();
printWorld();
return 0;
}
