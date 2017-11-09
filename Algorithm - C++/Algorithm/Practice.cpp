#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int check[7][7], sum, checkNum;
char arr[7][7] = { { 'T','T', 'T', 'A', 'N', 'T' },{ 'R','R', 'F', 'A', 'C', 'C' },{ 'R','R', 'R', 'F', 'C', 'C' },
{ 'T','R', 'R', 'R', 'A', 'A' },{ 'T','T', 'M', 'M', 'M', 'F' },{ 'T','M', 'M', 'T', 'T', 'J' } };

void friendsBlockGame(int w, int h) {

	checkNum = 0;

	// check √ ±‚»≠
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			check[i][j] = 0;

	for (int i = 0; i < h - 1; i++) {
		for (int j = 0; j < w - 1; j++) {
			if (arr[i][j] != 'Z' &&
				arr[i][j] == arr[i][j + 1] &&
				arr[i][j] == arr[i + 1][j] &&
				arr[i][j] == arr[i + 1][j + 1]) {

				check[i][j] = check[i][j + 1] = check[i + 1][j] = check[i + 1][j + 1] = 1;
				checkNum++;
			}
		}
	}

	if (checkNum == 0)
		return;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (check[i][j] == 1) {
				sum++;

				for (int k = i; k > 0; k--) {
					arr[k][j] = arr[k - 1][j];
					arr[k - 1][j] = 'Z';
				}
			}
		}
	}

	friendsBlockGame(w, h);
}
int main(void) {
	friendsBlockGame(6, 6);
	cout << sum << '\n';
}
