#include <stdio.h>
#include <cstdlib>//random
#include <ctime>
#include <windows.h>

#define WorldH 20
#define WorldW 20

struct Point{
	unsigned live:1;
};

Point World[WorldH][WorldW]={0};
Point CopyWorld[WorldH][WorldW]={0};

int initWorld(Point world[WorldH][WorldW]){
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			int rn=rand()%6;
			if(rn==1){
				world[h][w].live=1;
			}else{
				world[h][w].live=0;
				}
		}
	}
}
void PrintWorld(Point world[WorldH][WorldW]){
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			if(world[h][w].live==1){
				printf("#");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int Count (Point world[WorldW][WorldH]){
	int count=0;
	int i,j;
	for (i=0;i<WorldH;i++){
		for (j=0;j<WorldW; j++){
			if (world[i][j].live==1){
				count++;
			}
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
int life(Point world[WorldW][WorldH]){
	int l=0;
	for(int h=0;h<WorldW;h++){
		for(int w=0;w<WorldH;w++){
			l=0;
				if(world[h-1][w-1].live==1 && (h-1)>=0 && (w-1)>=0) {
					l++;
				}
				if(world[h][w-1].live==1 && (w-1)>=0){
					l++;
				}
				if(world[h+1][w-1].live==1 && (h+1)<=WorldH && (w-1)>=0){
					l++;
				}
				if(world[h+1][w].live==1 && (h+1)<=WorldH){
					l++;
				}
				if(world[h+1][w+1].live==1 && (h+1)<=WorldH && (w+1)<=WorldW){
					l++;
				}
				if(world[h][w+1].live==1 && (w+1)<=WorldH){
					l++;
				}
				if(world[h-1][w+1].live==1 && (h-1)>=0 && (w+1)>=0){
					l++;
				}
				if(world[h-1][w].live==1 && (h-1)>=0 ){
					l++;
				}
			//////////////////////////
			if(l==3 && World[h][w].live==0){
				world[h][w].live=1;
			}
			if((l==2 || l==3) && world[h][w].live==1){
				world[h][w].live=1;
			}else{
				world[h][w].live=0;
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
int main(){
srand(time(0));
int l=0;
initWorld(World);
l=Count(World);
	do{
		CopyPaste();
		PrintWorld(CopyWorld);
	//	system("pause>nul");
		life(World);
		//l=L(World,CopyWorld);
		Sleep(5);
		system("cls");
		//puts("\n");
		l=Count(World);
		printf("%d", l);
	}while(l!=0);

return 0;
}
