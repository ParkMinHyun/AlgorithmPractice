#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/*
* Description :
* Time complexity: O(N^2)
* Space complexity: O(N^2)
*/
int isEnableDrive(const vector<int> &E, const vector<int> &C) {

	bool flag = false;
	int charge = 0, index = 0;
	int remainSave = 0, tempRemainSave;

	for (int x : C)
		remainSave += x;


	for (int index = 0; index < E.size(); index++) {

		charge = 0;
		tempRemainSave = remainSave;
		for (int i = 0; i < index; i++)
			tempRemainSave -= E[i];

		for (int start = index; start < E.size(); start++) {
			charge += E[start];

			if (charge > tempRemainSave)
				return start;

			charge -= C[start];
			tempRemainSave -= C[start];

			if (charge < 0)
				break;
		}
	}

	return -1;
	/*for (int x : C)
		remainSave += x;

	for (int index = 0; index < E.size(); index++) {
		charge = 0;
		tempRemainSave = remainSave;
		for (int start = index; start < E.size(); start++) {
			charge += E[start];

			if (charge > tempRemainSave)
				return start;

			charge -= C[start];
			tempRemainSave -= C[start];
		}
		if (charge < 0)
			flag = true;
	}*/
}

int main(int argc, const char *argv[]) {
	int T = 0, N = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		vector<int> E, C;
		cin >> N;

		for (int i = 0; i < N; i++) {
			int energy = 0;
			cin >> energy;
			E.push_back(energy);
		}

		for (int i = 0; i < N; i++) {
			int cost = 0;
			cin >> cost;
			C.push_back(cost);
		}

		cout << isEnableDrive(E, C) << endl;
	}
}
