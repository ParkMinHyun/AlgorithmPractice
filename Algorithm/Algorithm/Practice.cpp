#include<stdio.h>
#pragma warning(disable: 4996)

int maxSum = 0;
int tri[500][500];
int num;

void compare(int floor, int index, int sum) {

	sum += tri[floor][index];

	if (floor == num) {
		if (sum > maxSum)
			maxSum = sum;
		return;
	}


	for (int i = index; i <= index + 1; i++) {
		compare(floor + 1, i, sum);
	}
}

int main(void) {
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++) {
			scanf("%d", &tri[i][j]);
		}
	}

	int sum = 0;
	compare(0, 0, sum);


	printf("%d\n", maxSum);

	return 0;
}