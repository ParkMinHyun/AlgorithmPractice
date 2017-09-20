#include <stdio.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)
int main() {

	/*Timer 변수 선언*/
	clock_t before;
	double result;
	before = clock();

	int number;
	int count = 0;
	int A, B, C, Add;
	scanf("%d", &number);
	Add = number;

	while (Add != number || count == 0) {
		A = Add / 10;
		B = Add % 10;
		C = (A + B) % 10;
		A = B; B = C;
		Add = A * 10 + B;
		count++;
	}

	printf("%d\n", count);



	/*Timer 출력*/
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n걸린시간은 %f입니다.\n",result);
	return 0;
}