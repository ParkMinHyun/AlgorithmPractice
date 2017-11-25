#include <iostream>
#include <vector>
#include <string>

#define MAXNUM 255
using namespace std;

bool selectWeight(const int data[][2], int result[], int N, int W) {

	int num=0;
	bool flag = false;
	for (int i = N-1; i >= 0 ; i--) {
		for (int j = 0; j < data[i][1]; j++) {
			if (W >= data[i][0] && W - data[i][0] >= 0) {
				W -= data[i][0];
				result[i] ++;
				flag = true;
			}
		}
	}

	if (flag == true)
	{
		if (W != 0)
			return false;

		return true;
	}
	return false;
}

int main(int argc, const char *argv[]) {
	int TC, W, N;
	cin >> TC;

	for (int tc = 1; tc <= TC; ++tc) {
		cin >> W;
		cin >> N;

		int data[MAXNUM][2];
		int result[MAXNUM];

		for (int i = 0; i < N; ++i) {
			cin >> data[i][0] >> data[i][1];
			result[i] = 0;
		}

		cout << "#" << tc << endl;
		if (!selectWeight(data, result, N, W)) {
			cout << "FAIL" << endl;
		}
		else {
			for (int i = 0; i < N; ++i) {
				cout << data[i][0] << " " << result[i] << endl;
			}
		}
	}
	return 0;
}