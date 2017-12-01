#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
void quickSort(int arr[], int originLeft, int originRight) {
	
	int pivot;
	for (int i = 0; i < 10; i++) {
		pivot = i;
		for (int j = i+1; j < 10; j++) {
			if (arr[pivot] < arr[j])
			{
				pivot = j;
			}
		}

		int temp = arr[pivot];
		arr[pivot] = arr[i];
		arr[i] = temp;
	}


}

int main() {

	int arr[10] = { 10,1,1,16,9,55,2,5,22,7 };


	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	cout << endl;

	quickSort(arr, 0, 9);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}


}