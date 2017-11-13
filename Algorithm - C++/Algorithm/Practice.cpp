#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main() {

	vector<int> a = { 1, 3, 4, 5, 7, 7, 8 };
	int max = *max_element(a.begin(), a.end());
	for(int i=1; i<=max; i++){
		auto one = equal_range(a.begin(), a.end(), i).first;
		auto two = equal_range(a.begin(), a.end(), i).second;
		cout << two - one << '\n';

		cout << count(a.begin(),a.end(),i) << '\n';
		cout << "==========================\n";
	}
}