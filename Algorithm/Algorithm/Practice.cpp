#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

int main() {

	/*Timer 변수 선언*/
	clock_t before;
	double processTime;
	before = clock();

	int cnt = 0;
	char str[1000001];
	fgets(str,sizeof(str),stdin);
	str[strlen(str) - 1] = '\0';
	
	for (int i = 0; i < str[i]!='\0'; i++) {

		if (str[i] != 32)
		{
			for (int j = i; str[j] != 32; j++)
			{
				if (str[j + 1] == 32){
					cnt++;
					i += j - i + 1;
				}
			}
		}
	}
	printf("%d", cnt);

	/*Timer 출력*/
	processTime = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n걸린시간은 %f입니다.\n", processTime);
	return 0;
}