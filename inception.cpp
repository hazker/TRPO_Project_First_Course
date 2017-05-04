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
				printf("#");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

void life(){
	int l=0;
		for(int h=0;h<WorldW;h++){
			for(int w=0;w<WorldH;w++){
			if(World[h+1][w+1].live==1){
				l++;
			}
			if(World[h][w+1].live==1){
				l++;
			}
			if(World[h+1][w].live==1){
				l++;
			}
			if(World[h-1][w+1].live==1){
				l++;
			}
			if(World[h+1][w-1].live==1){
				l++;
			}
			if(World[h-1][w].live==1){
				l++;
			}
			if(World[h][w-1].live==1){
				l++;
			}
			if(World[h][w+1].live==1){
				l++;
			}
			if(World[h][w+1].live==1){
				l++;
			}
			if(World[h-1][w-1].live==1){
				l++;
			}
			if(l==3 && World[h][w].live==0){
				World[h][w].live=1;
			}
			if((l==2 || l==3) && World[h][w].live==1){
				World[h][w].live=1;
			}
			else{
				World[h][w].live=0;
			}
		}
	}
}

main(){
srand(time(0));
initWorld();
printWorld();
system("PAUSE");
while(1){
	puts("\n");
	life();
	printWorld();
	system("PAUSE");
}
return 0;
}
