#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
	int N, M;
	int a, b;
	cin >> N >> M;
	vector<int> d;
	for(int i=1; i<=N;i++) {
		d.push_back(i);
	}

	while (M--) {
		cin >> a >> b;
		reverse(d.begin() + (a - 1), d.begin() + (b));
	}

	for (int x : d) {
		cout << x << ' ';
	}
	cout << '\n';
}
