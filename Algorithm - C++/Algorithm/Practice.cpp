#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {
	string s;
	
 	while (getline(cin,s)) {
		int lower = 0;
		int upper = 0;
		int number = 0;
		int space = 0;

		for (char x : s) {
			if (x > 'a' && x <= 'z')
				lower += 1;
			else if (x > 'A' && x <= 'Z')
				upper += 1;
			else if (x >= '0' && x <= '9')
				number += 1;
			else if (x == ' ')
				space += 1;
		}
		cout << lower << ' ' << upper << ' ' << number << ' ' << space << '\n';
	}

	return 0;
}