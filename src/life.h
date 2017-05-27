#ifndef LIFE_H
#define LIFE_H
#define WorldH 40
#define WorldW 40



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

#endif 
