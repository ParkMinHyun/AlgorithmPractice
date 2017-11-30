#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;
int main() {

	int a;
	char b[100];

	cin >> a;

	int index = 0;
	while (a) {
		b[index++] = a % 10 + '0';

		a /= 10;
	}
	printf("%s", b);
}