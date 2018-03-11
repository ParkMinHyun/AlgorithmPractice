#include <iostream>
#include <vector>
#include <set>

using namespace std;

void main() {
	int num;
	float sum = 0.0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int temp;
		cin >> temp;
		sum += temp;
	}

	int inputNum = num;
	while (1) {
		if (sum / num >= 9.5)
			break;

		sum += 10;
		num++;
	}

	cout << num - inputNum << endl;
}