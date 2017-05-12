#include <stdio.h>
//#include <stdlib>//random
#include <time.h>
#include <windows.h>

#include "library.h"



void initWorld(Point world[WorldH][WorldW]) {
	for (int h = 0; h<WorldW; h++) {
		for (int w = 0; w<WorldH; w++) {
			int rn = rand() % 2;
			if (rn == 1) {
				rn = rand() % 3;
				if (rn == 1) {
					world[h][w].live = 1;
				}
				else {
					world[h][w].live = 0;
				}
			}
		}
	}
}
void PrintWorld(Point world[WorldH][WorldW]) {
	for (int h = 0; h<WorldW; h++) {
		for (int w = 0; w<WorldH; w++) {
			if (world[h][w].live == 1) {
				printf("#");
			}
			else {
				printf(".");
			}
		}
		printf("\n");
	}
}

int Count(Point world[WorldH][WorldW]) {
	int count = 0;
	int i, j;
	for (i = 0; i<WorldW; i++) {
		for (j = 0; j<WorldH; j++) {
			if (world[i][j].live == 1) {
				count++;
			}
		}
	}
	return count;
}
void CopyPaste() {
	for (int h = 0; h<WorldW; h++) {
		for (int w = 0; w<WorldH; w++) {
			CopyWorld[h][w] = World[h][w];
		}
	}
}

void life(Point world[WorldH][WorldW]) {
	int l = 0;
	for (int h = 0; h<WorldW; h++) {
		for (int w = 0; w<WorldH; w++) {
			l = 0;
			if (world[h - 1][w - 1].live == 1 && (h - 1) >= 0 && (w - 1) >= 0) {
				l++;
			}
			if (world[h][w - 1].live == 1 && (w - 1) >= 0) {
				l++;
			}
			if (world[h + 1][w - 1].live == 1 && (h + 1) <= WorldH && (w - 1) >= 0) {
				l++;
			}
			if (world[h + 1][w].live == 1 && (h + 1) <= WorldH) {
				l++;
			}
			if (world[h + 1][w + 1].live == 1 && (h + 1) <= WorldH && (w + 1) <= WorldW) {
				l++;
			}
			if (world[h][w + 1].live == 1 && (w + 1) <= WorldH) {
				l++;
			}
			if (world[h - 1][w + 1].live == 1 && (h - 1) >= 0 && (w + 1) >= 0) {
				l++;
			}
			if (world[h - 1][w].live == 1 && (h - 1) >= 0) {
				l++;
			}
			if (l>2 && World[h][w].live == 0) {
				world[h][w].live = 1;
			}
			if ((l >= 2 && l <= 3) && world[h][w].live == 1) {
				world[h][w].live = 1;
			}
			if ((l >= 4 || l <= 1) && world[h][w].live == 1) {
				world[h][w].live = 0;
			}
		}
	}
	//system("pause>nul");
}
