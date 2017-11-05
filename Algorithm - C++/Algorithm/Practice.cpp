#include <iostream>
#include <list>
#include <string>
using namespace std;

int main(void) {
	int cacheSize,time=0;
	string cityName;

	scanf("%d ", &cacheSize);
	list<string> cities;
	
	while (getline(cin, cityName, ',')) {
		// 해당 도시 찾기
		auto it = find(cities.begin(), cities.end(), cityName);
		// 못 찾았을 경우, cache size가 0이 아니면 삭제 후 추가
		if (it == cities.end()){
			if (cities.size() >= cacheSize && cacheSize != 0)
				cities.erase(--it);
			time += 5;
		}
		// 찾았을 경우 해당 위치 지우고 새로 추가
		else {
			cities.erase(it);
			time += 1;
		}
		if(cacheSize != 0)
			cities.insert(cities.begin(), cityName);
	}
	cout << time << '\n';
}

/*0
Jeju,Pangyo,Seoul,NewYork,LA*/
/*3
Jeju,Pangyo,Seoul,NewYork,LA,Jeju,Pangyo,Seoul,NewYork,LA*/
/*3
Jeju,Pangyo,Seoul,Jeju,Pangyo,Seoul,Jeju,Pangyo,Seoul*/