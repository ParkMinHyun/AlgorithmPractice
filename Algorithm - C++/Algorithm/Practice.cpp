#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(void) {
	int score[3] = { 0 };
	int sum = 0, index = 0;
	string str;

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		int temp = 0;
		if (str[i] >= '0' && str[i] <= '9')
		{
			// 10�� ��� temp�� 10 ������ i+1 ��ŭ �̵�
			if (str[i] == '1' && str[i + 1] == '0'){
				temp = 10;
				i++;
			}
			// 1~9�� ��� temp�� �ش� ���� ����
			else
				temp = str[i] - 48;

			// �� �� S,D,T �Ǻ� �� Score ������ ����
			switch (str[i + 1])
			{
			case 'S':score[index++] = temp; break;
			case 'D':score[index++] = pow(temp, 2); break;
			case 'T':score[index++] = pow(temp, 3); break;
			default: break;
			}

			// �ɼ� ���
			switch (str[i + 2])
			{
			case '*':
				score[index - 1] *= 2;
				if (index >= 2)
					score[index - 2] *= 2;
				break;
			case '#':
				score[index - 1] *= -1; 
				break;
			default: break;
			}
		}
	}
	for (int i = 0; i < 3; i++)
		sum += score[i];

	cout << sum << '\n';
}