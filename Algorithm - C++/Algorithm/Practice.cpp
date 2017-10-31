#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
vector<string> listen;
vector<string> print;

int main()
{
	int cnt = 0;
	char arr[21];
	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		cin >> arr;
		listen.push_back(arr);
	}
	sort(listen.begin(), listen.end());

	for (int i = 0; i < M; ++i) {
		cin >> arr;
		if (binary_search(listen.begin(), listen.end(), arr)) {
			print.push_back(arr);
			cnt++;
		}
	}

	sort(print.begin(), print.end());
	printf("%d\n", cnt);
	for (int i = 0; i < print.size(); i++) 
		printf("%s\n", print[i].c_str());
}
