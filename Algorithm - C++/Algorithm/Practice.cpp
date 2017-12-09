#include <stdio.h>

int main() {

	int num = 0;
	int binary[30];

	int index = 0;
	scanf("%d", &num);

	while (num) {
		binary[index ++] = num % 2;
		num /= 2;
	}

	for (int i = index - 1; i >= 0; i--)
		printf("%d",binary[i]);

	printf("\n");
}