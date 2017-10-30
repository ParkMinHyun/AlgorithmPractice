#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;



int main() {

	list <int> v;
	vector<int> temp;
	int num, k;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		cin >> k;
		auto it = find(v.begin(), v.end(), k);
		if( it == v.end())
			v.push_back(k);
	}

	v.sort();
	for (int x : v) {
		cout << x << ' ';
	}

}