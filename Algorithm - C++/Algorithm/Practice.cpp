#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

struct Person {
	string name;
	int age,order;
};
bool cmp(const Person &u, const Person &v) {
	return make_pair(u.age, u.order) < make_pair(v.age, v.order);
}
int main(void) {
	int n;
	cin >> n;

	vector<Person> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i].age >> a[i].name;
		a[i].order = i;
	}

	sort(a.begin(), a.end(), cmp);

	for (Person x : a) {
		cout <<  x.age << ' ' <<  x.name << '\n';
	}
}
