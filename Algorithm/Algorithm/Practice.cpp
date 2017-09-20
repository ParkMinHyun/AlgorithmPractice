#include <stdio.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)
int main() {

	/*Timer 변수 선언*/
	clock_t before;
	double processTime;
	before = clock();

	int middleResult = 0;
	int result, sum, cnt = 0;

	for (int i = 1; i <= 10000; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++)
		{
			sum = j;
			middleResult = j;

			while (middleResult>0) {
				sum += middleResult % 10;
				middleResult = middleResult / 10;
			}
			if (sum == i){
				cnt++;
				break;
			}
		}
		if(cnt == 0)
			printf("%d\n", i);
	}
	



	/*Timer 출력*/
	processTime = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n걸린시간은 %f입니다.\n", processTime);
	return 0;
}