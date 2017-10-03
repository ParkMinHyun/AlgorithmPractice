#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {
	int a, b, num;
	bool arr[1000001] = { 1 };

	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++)
		if (i % 2 == 0 || i % 3 == 0)
			arr[i] = 1;

	arr[2] = arr[3] = 0;
	for (int i = a; i <= b; i++)
		if (arr[i] != 1)
			printf("%d\n", i);

	return 0;
}