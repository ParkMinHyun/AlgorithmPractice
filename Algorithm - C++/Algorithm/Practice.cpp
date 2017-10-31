#include <cstdio>
#include <vector>
#include <list>
#include <set>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;
#pragma warning(disable : 4996)

typedef pair<int, int> pa;
vector<pa> vec;
void bs(int k) {
	int left = 0;
	int right = vec.size() - 1;
	int mid;

	while (left <= right) {
		mid = (left + right) / 2;
		if (vec[mid].first < k) {
			left = mid + 1;
		}
		else if (vec[mid].first > k)
			right = mid - 1;
		else
		{
			printf("%d ",vec[mid].second);
			return;
		}
	}

	printf("0 ");

}

int main() {


	int num1, num2, k;
	scanf("%d", &num1);
	while (num1--)
	{
		int i = 0;
		cin >> k;

		for (i = 0; i < vec.size(); i++) {
			if (vec[i].first == k){
				vec[i].second++;
				break;
			}
		}
		if (vec.size() == 0 || i == vec.size())
			vec.push_back(make_pair(k, 1));
	}

	sort(vec.begin(), vec.end());
	scanf("%d", &num2);
	for (int i = 0; i < num2; i++)
	{
		cin >> k;
		bs(k);
	}

}
