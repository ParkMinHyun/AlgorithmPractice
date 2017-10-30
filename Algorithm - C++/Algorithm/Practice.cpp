#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;



int main() {

	typedef pair <int, int> ii;
	vector <ii> v;
	int n, k;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> k;
		v.push_back(ii(k, i));
	}

	int s = 0, l = n, p;
	for (int i = 0; i<n; i++) {
		printf("%d ", v[s].second);
		p = v[s].first;
		p += (p>0) ? -1 : 0;
		v.erase(v.begin() + s);
		s += p; 
		l--;
		if (!l) 
			break;
		if (s<0)
			s = l + s%l;
		s %= l;
	}
}