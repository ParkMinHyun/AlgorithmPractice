#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void Sort(char str[][51], int size) {
	int len1, len2, k;
	char temp[51];

	for (int i = 0; i< size - 1; i++) {
		for (int j = 0; j<size - 1 - i; j++) {
			len1 = strlen(str[j]);
			len2 = strlen(str[j + 1]);
			if (len1 > len2 || (strcmp(str[j], str[j + 1])<1 && len1 == len2))
			{
				for (k = 0; k < len1; k++)
					temp[k] = str[j][k];
				temp[len1] = '\0';

				for (k = 0; k < len2; k++)
					str[j][k] = str[j + 1][k];
				str[j][len2] = '\0';

				for (k = 0; k < len1; k++)
					str[j + 1][k] = temp[k];
				str[j + 1][len1] = '\0';
			}
		}
	}
}

int main() {
	int num;
	char str[20000][51];

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
		scanf("%s", str[i]);

	Sort(str, num);

	for (int j = 0; j<num; j++) {
		if (strcmp(str[j], str[j + 1])) {
			printf("%s\n", str[j]);
		}
	}
}