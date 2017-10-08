#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int h, w;
void compare(int bat[][50], int check[][50], int y, int x) {

	// 밭(bat) 배열에 배추있으면 이 지점에서 재귀이용해 4방향 검사
	// 그리고 check 배열에 배추 있다고 표시
	if (x - 1 >= 0)
		if (bat[y][x - 1] == 1 && check[y][x - 1] == 0) {
			check[y][x - 1] = 1;
			compare(bat, check, y, x - 1);
		}

	if (y - 1 >= 0)
		if (bat[y - 1][x] == 1 && check[y - 1][x] == 0) {
			check[y - 1][x] = 1;
			compare(bat, check, y - 1, x);
		}

	if (x + 1 < w)
		if (bat[y][x + 1] == 1 && check[y][x + 1] == 0) {
			check[y][x + 1] = 1;
			compare(bat, check, y, x + 1);
		}

	if (y + 1 < h)
		if (bat[y + 1][x] == 1 && check[y + 1][x] == 0) {
			check[y + 1][x] = 1;
			compare(bat, check, y + 1, x);
		}
}

int main(void) {
	int num, x, y, k, sum = 0;
	scanf("%d", &num);

	while (num--) {
		int bat[50][50] = { 0, };
		int check[50][50] = { 0, };
		sum = 0;

		scanf("%d %d %d", &h, &w, &k);

		while (k--) {
			scanf("%d %d", &y, &x);
			bat[y][x] = 1;
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (check[i][j] == 0 && bat[i][j] == 1) {
					compare(bat, check, i, j);
					sum++;
				}
			}
		}
		printf("%d\n", sum);
	}

	return 0;
}