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
		// �ش� ���� ã��
		auto it = find(cities.begin(), cities.end(), cityName);
		// �� ã���� ���, cache size�� 0�� �ƴϸ� ���� �� �߰�
		if (it == cities.end()){
			if (cities.size() >= cacheSize && cacheSize != 0)
				cities.erase(--it);
			time += 5;
		}
		// ã���� ��� �ش� ��ġ ����� ���� �߰�
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