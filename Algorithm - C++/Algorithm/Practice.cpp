#include <string>
#include <iostream>
using namespace std;
#pragma warning(disable : 4996)

int main() {
	string text;
	int num;

	cin >> text >> num;

	int cursorIndex = text.size();
	while (num--) {
		char input;
		string t;

		cin >> input;
		switch (input)
		{
		case 'P':
			cin >> t;
			text.insert(cursorIndex, t);
			cursorIndex++;
			break;
		case 'L':
			if (cursorIndex != 0)
				cursorIndex--;
			break;
		case 'D':
			if (cursorIndex != text.size())
				cursorIndex++;
			break;
		case 'B':
			if (cursorIndex != 0) {
				text.erase(cursorIndex - 1, 1);
				cursorIndex--;
			}
			break;
		default:
			break;
		}
		cout << cursorIndex << ' ' << text << '\n';
	}
	cout << text << '\n';
}
