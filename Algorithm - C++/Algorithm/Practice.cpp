#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int d=0;
	int n, m;
	int sum = 0;
	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		string a = to_string(i);

		int size = a.size();
		int sum = 0;
		for (int j = 0; j < size/2; j++) {
			if (a[j] == a[size - j - 1])
			{
				sum++;
			}
		}

		if (sum == size / 2)
			d++;
	}
	cout<< d<< endl;

	return 0;
}
