#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int num, ave, max;
	vector<int> arr(10, 0);
	cin >> num;

	do {
		arr[num % 10]++;
		num /= 10;
	} while (num);

	arr[6] = arr[9] = ((double)(arr[6] + arr[9]) / 2) + 0.5;
	max = *max_element(arr.begin(), arr.end());

	cout << max;
}