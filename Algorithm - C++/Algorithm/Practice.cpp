#include <string>
#include <iostream>

using namespace std;

void checkStr(string str)
{
	int alphabet[28] = { 0 };

	int len = str.size();
	for (int i = 0; i < len; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			alphabet[str[i] - 'a']++;
		}
	}

	for (int i = 0; i < 28; i++) {
		if (alphabet[i] != 0)
		{
			printf("%c%d", i + 97, alphabet[i]);
		}
	}

}
int main() {

	string str;

	cin >> str;

	checkStr(str);

}