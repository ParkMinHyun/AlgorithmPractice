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

void merge(int arr[], int start, int mid, int end) {
	int buf[11] = { 0 };

	int i = start, j = mid+1, k = start;
	while (i <= mid && j <= end) {
		if (arr[i] < arr[j])
			buf[k++] = arr[i++];
		else
			buf[k++] = arr[j++];
	}

	while (i <= mid)
		buf[k++] = arr[i++];

	while (j <= end)
		buf[k++] = arr[j++];

	for (i = start; i <= end; i++)
		arr[i] = buf[i];

}
void mergeSort(int arr[], int start, int end) {

	int mid = (start + end) / 2;

	if (start < end) {
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}

int main() {
	int arr[10] = { 11,1,6,4,55,13,24,2,31,19 };

	mergeSort(arr, 0, 9);

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}