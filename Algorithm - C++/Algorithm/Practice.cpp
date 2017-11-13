#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(void) {
	int N, M;
	int a, b, c;
	cin >> N >> M;
	vector<int> d(N);
	fill(d.begin(), d.end(), 0);
	
	while (M--) {
		cin >> a >> b >> c;
		fill(d.begin() + (a - 1), d.begin() + b, c);

		for (int x : d) {
			cout << x << ' ';
		}
		cout << '\n';
	}


	/*int N, M;
	cin >> N >> M;
	vector<int> a(N);
	for (int x : a) {
		cout << x << ' ';
	}
	cout << '\n';
	fill(a.begin(), a.end(), 0);
	for (int x : a) {
		cout << x << ' ';
	}
	cout << '\n';*/
}
