#include <stdio.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)
int main() {

	/*Timer ���� ����*/
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

	/*Timer ���*/
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n�ɸ��ð��� %f�Դϴ�.\n",result);
	return 0;
}