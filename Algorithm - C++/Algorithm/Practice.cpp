#include <stdio.h>
#include <algorithm>
#include <map>

using namespace std;
#pragma warning(disable: 4996)

int main(void) {
	map<int,int> m;
	int M, N,input;

	scanf("%d", &M);
	while (M--) {
		scanf("%d", &input);
		m[input] = 1;
	}

	scanf("%d", &N);
	while (N--) {
		scanf("%d", &input);
		printf("%d\n", (m[input] == 1) ? 1 : 0);
	}
}