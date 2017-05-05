#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>//random
#include <ctime>

#define WorldH 40
#define WorldW 40

struct Point{
	unsigned live:1;
};

Point World[WorldH][WorldW]={0};
Point CopyWorld[WorldH][WorldW]={0};

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
void PrintWorld(Point World[WorldH][WorldW]){
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

unsigned int Count (Point World[][WorldH]){
	unsigned int count=0;
	unsigned i,j;
	for (i=0;i<WorldH;i++){
		for (j=0;j<WorldW; j++){
			if (World[i][j].live=1)
			count++;
		}
	}
	return count;
}

void CopyPaste(){
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			CopyWorld[h][w]=World[h][w];
		}
	}
}

int life(){
	int l=0;
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			l=0;
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
			}else{
				World[h][w].live=0;
			}
		}
	}
}
/*int L(Point World[][WorldW],Point CopyWorld[][WorldW]){
	int l=0;
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			if(World[h][w].live==1 && CopyWorld[h][w].live==1){
				l++;
			}
		}
		return l;
	}
}*/

main(){
srand(time(0));
//int l=0;
initWorld();
do{
	CopyPaste();
	PrintWorld(CopyWorld);
	system("PAUSE");
	life();
	//l=L(World,CopyWorld);
	puts("\n");
//	printf("%d", l);
}while(Count!=0);

return 0;
}
