#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void zarCard(string str1, string str2) {
	vector<string> vec1, vec2;
	// �빮�� ��ȯ
	transform(str1.begin(), str1.end(), str1.begin(), toupper);
	transform(str2.begin(), str2.end(), str2.begin(), toupper);

	// subSet ������
	for (int i = 0; i < str1.length() - 1; i++)
		if ((str1[i] >= 'A' && str1[i] <= 'Z') && (str1[i + 1] >= 'A' && str1[i + 1] <= 'Z'))
			vec1.push_back(str1.substr(i, 2));

	for (int i = 0; i < str2.length() - 1; i++)
		if ((str2[i] >= 'A' && str2[i] <= 'Z') && (str2[i + 1] >= 'A' && str2[i + 1] <= 'Z'))
			vec2.push_back(str2.substr(i, 2));

	vector<string> unionSet, intersectionSet;
	for (int i = 0; i < vec1.size(); i++) {
		auto it = find(vec2.begin(), vec2.end(), vec1[i]);

		// ã������ vec1[i]�� ������ ������
		if (it != vec2.end())
			intersectionSet.push_back(*it);

		// ã�� �� ã�� vec1[i]�� ������ ������
		unionSet.push_back(vec1[i]);
	}
	// ���� For���� Vec2�� ���� Find �˻� ������ �̹��� Vec1�� ���� Find �˻�
	for (int i = 0; i < vec2.size(); i++) {
		auto it = find(vec1.begin(), vec1.end(), vec2[i]);
		int pos = it - vec1.begin();
		if (it == vec1.end())
			unionSet.push_back(vec2[i]);
		else
			vec1.erase(vec1.begin() + pos);
	}

	double zardCal = ((double)intersectionSet.size() / unionSet.size());
	printf("%.0f\n", unionSet.size() == 0 ? 65536 : zardCal * 65536);
}

int main(void) {
	zarCard("FRANCE", "french");
	zarCard("handshake", "shake hands");
	zarCard("aa1+aa2", "AAAA12");
	zarCard("E=M*C^2", "e=m*c^2");
}
