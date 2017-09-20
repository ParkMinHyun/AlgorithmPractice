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

	int num, cnt, sum = 0;
	char checkOX[80];


	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", checkOX);
		sum = 0;
		cnt = 0;
		for (int j = 0; j < strlen(checkOX); j++) {
			
			if (checkOX[j] == 'O'){
				cnt++;
				sum += cnt;
			}
			else{
				cnt = 0;
			}

		}
		printf("%d\n", sum);
		memset(checkOX, '\0', 80);
	}

	checkProcessTime();
	return 0;
}