#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#pragma warning(disable: 4996)

int main() {

	char str[20], effect[10];
	int score[3], k = 0, l = 0, m = 0, len, sum = 0;

	scanf("%s", str);
	len = strlen(str);

	for (int i = 0; i < len; i++) {
		if (50 <= str[i] && str[i] <= 57)
			score[k++] = str[i] - 48;
		else if (str[i] == 49)
		{
			if (str[i + 1] == 48)
				score[k++] = 10;
			else
				score[k++] = 1;
		}
		else if (str[i] == 'S' || str[i] == 'D' ||
			str[i] == 'T' || str[i] == '*' || str[i] == '#')
			effect[l++] = str[i];
	}

	for (int i = 0; i < l; i++)
	{
		switch (effect[i])
		{
		case 'S': score[m++] *= 1; break;
		case 'D': score[m] = pow(score[m], 2); m++; break;
		case 'T': score[m] = pow(score[m], 3); m++; break;
		case '*':
			if (i == 1)
				score[0] *= 2;
			else {
				score[m - 1] *= 2;
				score[m - 2] *= 2;
			}
			break;
		case '#':
			if (i == 1)
				score[0] *= -1;
			else {
				score[m - 1] *= -1;
			}
			break;
		}
	}

	for (int i = 0; i < k; i++)
		sum += score[i];

	printf("%d\n", sum);
	return 0;
}