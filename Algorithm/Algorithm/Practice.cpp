#include<stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable: 4996)

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void insertionSort(int arr[]) {

	int i,j;
	int temp;
	for (i = 1; i < 10; i++) {
		j = i - 1;
		while (j >= 0 && arr[j] > arr[j + 1]) {
			swap(&arr[j], &arr[j+1]);
			j--;
		}
	}
}

int main() {
	int arr[10] = { 11,1,6,4,55,13,24,2,31,19 };

	insertionSort(arr);

	for (int i = 0; i < 10; i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}