#include <stdio.h>
#include <time.h>

#pragma warning(disable:4996)
int main() {

	/*Timer ���� ����*/
	clock_t before;
	double result;
	before = clock();

	int n,sum=0;
	char arr[101];

	scanf("%d", &n);
	scanf("%s", arr);

	for (int i = 0; i < n; i++) {
		sum += arr[i] - 48;
	}
	printf("%d", sum);

	/*Timer ���*/
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n�ɸ��ð��� %f�Դϴ�.\n",result);
	return 0;
}