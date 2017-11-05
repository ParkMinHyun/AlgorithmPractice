#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
	int cacheSize,time=0;
	string cityName;

	scanf("%d ", &cacheSize);
	list<string> cities;
	
	while (getline(cin, cityName, ',')) {
		auto it = find(cities.begin(), cities.end(), cityName);
		if (it == cities.end()){
			if (cities.size() >= cacheSize)
				cities.erase(--it);
			time += 5;
		}
		else {
			cities.erase(it);
			time += 1;
		}
		cities.insert(cities.begin(), cityName);
		cout << time << endl;
	}
	/*3
	Jeju,Pangyo,Seoul,NewYork,LA,Jeju,Pangyo,Seoul,NewYork,LA*/
	/*3
	Jeju,Pangyo,Seoul,Jeju,Pangyo,Seoul,Jeju,Pangyo,Seoul*/
}