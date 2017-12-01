#include <string>
#include <iostream>
#include <stack>
using namespace std;

bool checkStr(string str)
{
	stack<char> checkStack;
	int len = str.size();

	for (int i = 0; i < len; i++) {
		if (str[i] == '{' || str[i] == '(' || str[i] == '[')
		{
			checkStack.push(str[i]);
		}

		else if (str[i] == '}' || str[i] == ')' || str[i] == ']')
		{
			if (checkStack.empty())
				return 0;

			if ( (checkStack.top() == '{' && str[i] == '}') 
				|| (checkStack.top() == '(' && str[i] == ')')
				|| (checkStack.top() == '[' && str[i] == ']'))
				
				checkStack.pop();
		}
	}

	if (!checkStack.empty())
		return 0;
	else
		return 1;
}
int main() {

	string str;

	cin >> str;

	if (checkStr(str) == 1)
		cout << "컴파일 성공!";
	else
		cout << "실패";

}