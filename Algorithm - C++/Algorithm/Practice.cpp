#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <stdio.h>

void printWithoutOverlapNum(int num[], int size)
{
	int checkNum[1000] = { 0 };

	for (int i = 0; i < size; i++)
	{
		checkNum[num[i]] ++;
		if (checkNum[num[i]] <= 1)
			printf("%d ", num[i]);
	}
	printf("\n");
}

int main() {

	int arr[10] = { 11, 1, 3,40,123,40,12,3,55,1 };

	printWithoutOverlapNum(arr, 10);

}