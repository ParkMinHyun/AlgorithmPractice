#include <iostream>
#include <vector>
#include <set>

using namespace std;

void main() {

	int size;
	cin >> size;

	int sum = 0;
	for (int i = 1; i <= size; i++) {
		if (size % i == 0)
			sum++;
	}
	cout << sum;
}