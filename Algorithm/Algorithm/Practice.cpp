#include <stdio.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)
int main() {

	/*Timer 변수 선언*/
	clock_t before;
	double result;
	before = clock();

	int sum=0;
	char arr[101];
	
	scanf("%s", arr);

	for (int i = 0; i < strlen(arr); i++) {
		if(i%10==0)
			printf("\n%c", arr[i]);
		else
			printf("%c", arr[i]);
	}

	/*Timer 출력*/
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n걸린시간은 %f입니다.\n",result);
	return 0;
}