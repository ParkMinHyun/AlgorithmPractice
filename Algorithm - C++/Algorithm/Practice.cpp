#include <string>
#include <cstdio>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
	priority_queue<int> pq;
	list<int> li;
	int N, input;
	cin >> N;

	while (N--) {
		cin >> input;

		if (input == 0) {
			if (pq.size() == 0)
				cout << 0 << '\n';
			else {
				cout << -pq.top() << '\n';
				pq.pop();
				
			}
		}
		else if (input > 0) {
			pq.push(-input);
		}
	}
}
