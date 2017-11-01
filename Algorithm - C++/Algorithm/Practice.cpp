#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int num, sum = 1;
	int arr[10] = { 0 };
	scanf("%d", &num);

	do{

		if (num % 10 == 6 && arr[9] < arr[6])
			arr[9] ++;
		else if (num % 10 == 9 && arr[6] < arr[9])
			arr[6] ++;
		else
			arr[num % 10]++;

		num /= 10;
	} while (num);

	int max = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("%d = %d\n", i, arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
}