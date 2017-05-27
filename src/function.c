#include <stdio.h>
#include <time.h>
#include "library.h"

int initWorld(struct Point world[WorldH][WorldW]) {
	int h,w;
	for (h = 0; h<WorldW; h++) {
		for (w = 0; w<WorldH; w++) {
			int rn = rand() % 2;
			if (rn == 1) {
				rn = rand() % 7;
				if (rn == 1) {
					world[h][w].live = 1;
				}
				else {
					world[h][w].live = 0;
				}
			}
		}
	}
	return 0;
}
void PrintWorld(struct Point world[WorldH][WorldW]) {
	int h,w;
	for (h = 0; h<WorldW; h++) {
		for (w = 0; w<WorldH; w++) {
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

int Count(struct Point world[WorldH][WorldW]) {
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
	int h,w;
	for (h = 0; h<WorldW; h++) {
		for (w = 0; w<WorldH; w++) {
			CopyWorld[h][w] = World[h][w];
		}
	}
}

void life(struct Point world[WorldH][WorldW]) {
	int l = 0;
	int h,w;
	for (h = 0; h<WorldW; h++) {
		for (w = 0; w<WorldH; w++) {
			l = 0;
			if (CopyWorld[h - 1][w - 1].live == 1 && (h - 1) > 0 && (w - 1) > 0) {
				l++;
			}
			if (CopyWorld[h][w - 1].live == 1 && (w - 1) > 0) {
				l++;
			}
			if (CopyWorld[h + 1][w - 1].live == 1 && (h + 1) < WorldH && (w - 1) > 0) {
				l++;
			}
			if (CopyWorld[h + 1][w].live == 1 && (h + 1) < WorldH) {
				l++;
			}
			if (CopyWorld[h + 1][w + 1].live == 1 && (h + 1) < WorldH && (w + 1) < WorldW) {
				l++;
			}
			if (CopyWorld[h][w + 1].live == 1 && (w + 1) < WorldH) {
				l++;
			}
			if (CopyWorld[h - 1][w + 1].live == 1 && (h - 1) > 0 && (w + 1) < WorldW) {
				l++;
			}
			if (CopyWorld[h - 1][w].live == 1 && (h - 1) > 0) {
				l++;
			}
			if (l>2 && CopyWorld[h][w].live == 0) {
				World[h][w].live = 1;
			}
			if ((l >= 2 && l <= 3) && CopyWorld[h][w].live == 1) {
				World[h][w].live = 1;
			}
			if ((l >= 4 || l <= 1) && CopyWorld[h][w].live == 1) {
				World[h][w].live = 0;
			}
		}
	}
	//system("pause>nul");
}

