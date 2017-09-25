#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string str;
int main()
{
	cin >> str;
	int pos = 0;

	string croatia[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string del;
	string star = "*";

	for (int i = 0; i < 8; i++)
	{
		del = croatia[i];

		if (str.find(del) != string::npos)
		{
			while ((pos = str.find(del)) != string::npos)
			{
				str.erase(pos, del.length());
				str.insert(pos, star);
			}
		}
	}

	cout << str.size() << endl;

	return 0;
}