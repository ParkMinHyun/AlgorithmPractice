#include<stdio.h>

#pragma warning(disable: 4996)

int fibo(int num) {
	if (num == 1 || num == 0)
		return num;
	else
		return fibo(num - 1) + fibo(num - 2);
}

int main(void) {

	int num;
	int i;

	printf("\n�Ǻ���ġ �� �Է� : ");
	scanf("%d", &num);

	printf("%d\n", fibo(num));



	return 0;

}


