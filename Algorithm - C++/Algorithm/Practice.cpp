#include <cstdio>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;
#pragma warning(disable : 4996)

void bs(vector<int> a, int k) {
	int left = 0; 
	int right = a.size()-1;
	int mid;

	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] < k) {
			left = mid + 1;
		}
		else if (a[mid] > k)
			right = mid - 1;
		else
		{
			printf("1 ");
			return;
		}
	}

	printf("0 ");

}

int main() {

	vector<int> l1,l2;
	int num1, num2, k;
	scanf("%d", &num1);
	while (num1--)
	{
		cin >> k;
		l1.push_back(k);
	}

	sort(l1.begin(), l1.end());
	scanf("%d", &num2);
	for(int i=0; i<num2; i++)
	{
		cin >> k;
		bs(l1,k);
	}

}
