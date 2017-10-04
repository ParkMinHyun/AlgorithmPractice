#include<stdio.h>
#pragma warning(disable: 4996)

int main() {
	int a, b, num;
	bool arr[1000000] = { 1 };

	scanf("%d %d", &a, &b);

	for (int i = 2; i <= b; i++) {
		for (int j = 2; i*j <= b; j++)
			arr[i*j] = 1;
	}

	arr[1] = 1;
	for (int i = a; i <= b; i++)
		if (!arr[i])
			printf("%d\n", i);
	return 0;
}