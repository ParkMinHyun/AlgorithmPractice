#include <stdio.h>
#include <stdlib.h>


int width, height;
void find(int **path, int h, int w) {

	if (h == height)
		return;

	if (w == width)
		return;

	path[h][w] = path[h - 1][w] + path[h][w - 1];

	find(path, h + 1, w);
	find(path, h, w + 1);
}

int main() {

	int **path;

	scanf("%d %d", &height, &width);

	path = (int **)malloc(sizeof(int)*height);
	for (int i = 0; i < height; i++)
		path[i] = (int *)malloc(sizeof(int)*width);

	for (int i = 0; i < height; i++)
		path[i][0] = 1;

	for (int j = 0; j < width; j++)
		path[0][j] = 1;

	find(path, 1, 1);
	printf("%dX%d 크기의 가능한 경로 수는: %d\n", width, height, path[height-1][width-1]);
}