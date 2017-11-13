#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;

	vector<int> a;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;
		a.push_back(input);
	}

	int maxSum = 0;
	sort(a.begin(), a.end());
	do {
		int sum = 0;
		for (int i = 0; i < N - 1; i++)
		{
			sum += abs(a[i] - a[i + 1]);
		}
		if (maxSum < sum)
			maxSum = sum;

	} while (next_permutation(a.begin(), a.end()));


	cout << maxSum << '\n';
}