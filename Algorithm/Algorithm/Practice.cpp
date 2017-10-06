#include<stdio.h>
#pragma warning(disable: 4996)

int minSum = 999999;
int rgb[10001][3];

void compare(int num, int index, int sum) {

	sum += rgb[num][index];

	if (num == 0) {
		if (sum < minSum)
			minSum = sum;

		return;
	}

	for (int i = 0; i < 3; i++) {
		if (i != index)
			compare(num - 1, i, sum);
	}
}

int main(void) {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &rgb[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		compare(num - 1, i, sum);
	}

	printf("%d\n", minSum);

	return 0;
}