#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int maxSum = 0;
int tri[500][500];
int midSum[500][500] = { 0, };
int compare(const void *x, const void *y)
{
	int *a = (int *)x;
	int *b = (int *)y;

	return *a > *b ? -1 : 1;
}

int main(void) {
	int floor, sum = 0;
	scanf("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &tri[i][j]);
		}
	}

	midSum[0][0] = tri[0][0];
	for (int i = 0; i < floor - 1; i++) {
		for (int j = 0; j <= i; j++) {
			if (midSum[i + 1][j] < midSum[i][j] + tri[i + 1][j])
				midSum[i + 1][j] = midSum[i][j] + tri[i + 1][j];

			if (midSum[i + 1][j + 1] < midSum[i][j] + tri[i + 1][j + 1])
				midSum[i + 1][j + 1] = midSum[i][j] + tri[i + 1][j + 1];
		}
	}

	qsort(midSum[floor - 1], floor, sizeof(int), compare);
	printf("%d\n", midSum[floor - 1][0]);

	return 0;
}