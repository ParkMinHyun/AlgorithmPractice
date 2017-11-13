#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int main() {
	int n, input;
	cin >> n;

	// bitset �迭 ���� �� �Է�
	vector<bitset<16>> arr1, arr2;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr1.push_back(input);
	}
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr2.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 0; j--) {
			// or ��Ʈ ������ 
			if (arr1[i].test(j) | arr2[i].test(j))
				cout << "#";
			else
				cout << " ";
		}
		cout << '\n';
	}
}