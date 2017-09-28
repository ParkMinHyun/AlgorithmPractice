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


void quickSort(int arr[], int start, int end) {

	if (start >= end)
		return;

	int pivot, left, right;
	left = start;
	right = end;
	pivot = arr[left];

	while (start < end) {
		while ((arr[end] >= pivot) && (start < end))
			end--;

		if (start != end)
		{
			arr[start] = arr[end];
			start++;
		}

		for (int i = 0; i < 10; i++)
			printf("%d ", arr[i]);
		printf("\n");

		while ((arr[start] <= pivot) && (start < end))
			start++;

		if (start != end)
		{
			arr[end] = arr[start];
			end--;
		}

		for (int i = 0; i < 10; i++)
			printf("%d ", arr[i]);
		printf("\n");

	}

	arr[end] = pivot;
	quickSort(arr, left, start - 1);
	quickSort(arr, end + 1, right);

}

int main() {
	int arr[10] = { 11,1,6,4,55,13,24,2,31,19 };

	quickSort(arr, 0, 9);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}