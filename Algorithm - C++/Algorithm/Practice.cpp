#include <stdio.h>
#include <stdlib.h>

int main() {

	int **path;

	int w, h;
	scanf("%d %d", &w, &h);

	path = (int **)malloc(sizeof(int)*h);
	for (int i = 0; i < h; i++)
		path[i] = (int *)malloc(sizeof(int)*w);

	for (int i = 0; i < h; i++)
		path[i][0] = 1;

	for (int i = 0; i < w; i++)
		path[0][i] = 1;

	for (int i = 1; i < h; i++)
		for (int j = 1; j < w; j++)
			path[i][j] = path[i][j - 1] + path[i - 1][j];

	printf("%dX%d 크기의 가능한 경로 수는: %d\n", w,h, path[h-1][w-1]);


	
}