#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int num=0, arr[1001], max = 0, subMax = 0;
	int subSum[1001] = { 1 };

	scanf("%d %d", num, arr[0]);

	for (int i = 1; i < num; i++) {
		cin >> arr[i];
		subMax = 0;
		subSum[i] = 1;

		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && subMax < subSum[j])
			{
				subMax = subSum[j];
				subSum[i] = subMax + 1;
			}
		}
		if (max < subSum[i])
			max = subSum[i];
	}
	cout << max;
}