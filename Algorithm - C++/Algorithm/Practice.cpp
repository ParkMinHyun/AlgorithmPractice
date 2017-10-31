#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <utility>
#include <algorithm>
using namespace std;
#pragma warning(disable : 4996)

int findColor(string str) {
	if (str._Equal("black")) {
		return 0;
	}
	else if (str._Equal("brown")) {
		return 1;
	}
	else if (str._Equal("red")) {
		return 2;

	}
	else if (str._Equal("orange")) {
		return 3;

	}
	else if (str._Equal("yellow")) {
		return 4;

	}
	else if (str._Equal("green")) {
		return 5;

	}
	else if (str._Equal("blue")) {
		return 6;

	}
	else if (str._Equal("violet")) {
		return 7;

	}
	else if (str._Equal("grey")) {
		return 8;

	}
	else if (str._Equal("white")) {
		return 9;

	}
}
int main() {
	typedef pair<int, int> pa;
	vector<pa> vec;

	int ten = 1;
	for (int i = 1; i <= 10; i++) {
		vec.push_back(make_pair(i - 1, ten));
		ten *= 10;
	}

	long long sum;
	for(int i=0; i<3; i++){
		string a;
		cin >> a;

		int temp = findColor(a);
		if (i == 0) {
			sum = vec[temp].first;
		}
		else if (i == 1) {
			sum *= 10;
			sum += vec[temp].first;
		}
		else {
			sum *= vec[temp].second;
		}
	}
	printf("%lld", sum);
}
