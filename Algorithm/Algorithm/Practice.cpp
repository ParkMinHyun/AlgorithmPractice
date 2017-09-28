
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

void selectionSort(int arr[]) {

	int i;
	int temp;
	for (i = 0; i < 9; i++) {
		temp = i;
		for (int j = i + 1; j < 10; j++) {
			if (arr[temp] > arr[j])
				temp = j;
		}
		swap(&arr[temp], &arr[i]);
		
	}
}
int main() {
	int arr[10] = { 11,1,6,6,55,13,24,2,31,19 };

	selectionSort(arr);

	for (int i = 0; i < 10; i++)
		printf("%d ",arr[i]);
	printf("\n");

	return 0;
}