#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <cstdio>

using namespace std;

double fibo[2000];

int main()
{
	fibo[0] = 1;
	fibo[1] = 1;

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		fibo[i + 2] = fibo[i + 1] + fibo[i];
	}

	for (int i = 0; i < num; i++) {
		cout << fibo[i] << endl;
	}
}

