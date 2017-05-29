#include <stdio.h>
#include <stdlib.h>
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

int PrintWorld(struct Point world[WorldH][WorldW]) {
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
	return 0;
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
int CopyPaste(struct Point copyworld[WorldH][WorldW],struct Point world[WorldH][WorldW]) {
	int h,w;
	for (h = 0; h<WorldW; h++) {
		for (w = 0; w<WorldH; w++) {
			copyworld[h][w] = world[h][w];
		}
	}
	return 0;
}


