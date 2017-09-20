#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

/*Timer 변수 선언*/
clock_t before;
double processTime;

void checkProcessTime() {
	/*Timer 출력*/
	processTime = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n걸린시간은 %f입니다.\n", processTime);
}

int main() {
	before = clock();

	int A, B, C;
	int result;
	int checkNum[10] = { 0 };

	scanf("%d %d %d", &A, &B, &C);
	result = A*B*C;

	while (result > 0) {
		checkNum[result % 10] ++;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", checkNum[i]);
	}

	checkProcessTime();
	return 0;
}