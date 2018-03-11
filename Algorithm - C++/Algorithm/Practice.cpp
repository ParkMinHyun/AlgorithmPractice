#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;

void main() {
	cin >> N;

	vector<int> arr(N, 0);
	for (int i = 0; i < N; i++) {
		int size;
		cin >> size;
		arr[i] = size;
	}

	for (int i = 1; i < arr.size()-1; i++) {
		if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1] ||
			arr[i - 1] > arr[i] && arr[i] < arr[i + 1] )
			continue;

		arr.erase(arr.begin() + i);
		i--;
	}

	cout << arr.size();
}