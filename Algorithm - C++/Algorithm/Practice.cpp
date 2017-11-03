#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <malloc.h>
#include <algorithm>
using namespace std;

int main(void) {
	int M, N, a,b,c;
	map<int, int> m;
	cin >> N >> M;

	while (M--) {
		cin >> a >> b >> c;
		for (int i = a - 1; i < b; i++)
			m[i] = c;
	}

	for (int i = 0; i < N; i++)
		cout << m[i] << ' ';


}