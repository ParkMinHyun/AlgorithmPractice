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

	int alphabet[26];
	for (int i = 0; i < 26; i++)
		alphabet[i] = -1;

	char str[100];

	fgets(str, sizeof(str), stdin);
	//str[strlen(str) - 1] = '\0';

	for (int i = 0; i < strlen(str); i++) {
		if(alphabet[str[i] - 97] == -1)
			alphabet[str[i] - 97] = i ;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d\n",alphabet[i]);
	}
	checkProcessTime();
	return 0;
}