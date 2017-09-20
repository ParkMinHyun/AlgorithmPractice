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

void findMaxAlphabet(int *alphabetNum, char *str) {
	int max = 0;
	int findIndex = 0;

	char alphabetStr[26] = { 'A','B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U','V', 'W', 'X', 'Y', 'Z' };

	for (int i = 0; i < 26; i++) {
		if (max < alphabetNum[i]){
			max = alphabetNum[i];
			findIndex = i;
		}

		else if (max == alphabetNum[i] && i != 0){
			findIndex = -1;
		}
	}
	if(findIndex != -1)
		printf("%c\n", alphabetStr[findIndex]);
	else
		printf("?\n");

}

int main() {
	before = clock();

	int alphabetNum[26] = { 0 };
	char str[1000000];

	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0';
	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		if ('A' <= str[i] && str[i] <= 'Z')
			alphabetNum[str[i] - 65] ++;
		else
			alphabetNum[str[i] - 97] ++;
	}

	findMaxAlphabet(alphabetNum,str);

	checkProcessTime();
	return 0;
}