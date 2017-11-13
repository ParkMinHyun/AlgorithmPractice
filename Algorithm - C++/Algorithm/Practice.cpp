#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
	int N, M;
	int i, j;
	cin >> N >> M;
	vector<int> d;
	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}

	while (M--) {
		cin >> i >> j;
		swap((d.begin()+(i-1)), (d.begin() + (j - 1)));
	}

	for (int x : d) {
		cout << x << ' ';
	}
	cout << '\n';
}
