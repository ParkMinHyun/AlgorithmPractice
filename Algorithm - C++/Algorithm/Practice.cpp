#include <string>
#include <iostream>
#include <stack>
using namespace std;

void quickSort(int num[], int originLeft, int originRight)
{
	int left = originLeft;
	int right = originRight;
	int pivot = num[(left + right) / 2];
	int temp;

	while (left <= right) {
		while (num[left] < pivot)
			left++;

		while (num[right] > pivot)
			right--;

		if (left <= right) {
			temp = num[left];
			num[left] = num[right];
			num[right] = temp;

			left++;
			right--;
		}
	}

	if (left < originRight)
		quickSort(num, left, originRight);

	if (right > originLeft)
		quickSort(num, originLeft, right);

}


void printWithoutOverlapNum(int num[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (num[i] != num[i + 1])
			cout << num[i] << ' ';
	}
	cout << endl;
}

int main() {

	int arr[10] = { 11, 1, 3,40,123,40,12,3,55,1 };

	for (int num : arr)
		cout << num << ' ';

	quickSort(arr, 0, 9);
	cout << endl;
	printWithoutOverlapNum(arr, 10);

}