

int life(int world[WorldH][WorldW]) {
	int l = 0;
	int h,w;
	for (h = 0; h<WorldW; h++) {
		for (w = 0; w<WorldH; w++) {
			l = 0;
			if (CopyWorld[h - 1][w - 1] == 1 && (h - 1) > 0 && (w - 1) > 0) {
				l++;
			}
			if (CopyWorld[h][w - 1] == 1 && (w - 1) > 0) {
				l++;
			}
			if (CopyWorld[h + 1][w - 1] == 1 && (h + 1) < WorldH && (w - 1) > 0) {
				l++;
			}
			if (CopyWorld[h + 1][w] == 1 && (h + 1) < WorldH) {
				l++;
			}
			if (CopyWorld[h + 1][w + 1] == 1 && (h + 1) < WorldH && (w + 1) < WorldW) {
				l++;
			}
			if (CopyWorld[h][w + 1] == 1 && (w + 1) < WorldH) {
				l++;
			}
			if (CopyWorld[h - 1][w + 1] == 1 && (h - 1) > 0 && (w + 1) < WorldW) {
				l++;
			}
			if (CopyWorld[h - 1][w] == 1 && (h - 1) > 0) {
				l++;
			}
			if (l>2 && CopyWorld[h][w] == 0) {
				World[h][w] = 1;
			}
			if ((l >= 2 && l <= 3) && CopyWorld[h][w] == 1) {
				World[h][w] = 1;
			}
			if ((l >= 4 || l <= 1) && CopyWorld[h][w] == 1) {
				World[h][w] = 0;
			}
		}
	}
	return l;
}
