#include <stdio.h>
#include <time.h>
#include <string.h>
#pragma warning(disable:4996)

int d[10001];
int dn(int i) {

	int res = i;
	if (i >= 10000) {
		res += i / 10000;
		i %= 10000;
	}
	if (i >= 1000) {
		res += i / 1000;
		i %= 1000;
	}
	if (i >= 100) {
		res += i / 100;
		i %= 100;
	}
	if (i >= 10) {
		res += i /10;
		i %= 10;
	}
	return res += i;

}
int main() {

	/*Timer ���� ����*/
	clock_t before;
	double processTime;
	before = clock();

	for (int i = 1; i <= 10000; i++) {
		d[dn(i)] = 1;
		if (!d[i])
			printf("%d\n", i);
	}

	/*Timer ���*/
	processTime = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n�ɸ��ð��� %f�Դϴ�.\n", processTime);
	return 0;
}