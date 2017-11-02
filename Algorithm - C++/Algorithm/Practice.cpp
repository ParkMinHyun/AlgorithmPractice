
#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;

int main(void) {
	string s1[10];
	string s;
	int cnt=0,i = 0;
	
 	while (cin >> s) {
		s1[i++] = s;
		cnt += 1;
	}

	cout << cnt << endl;
	return 0;
}