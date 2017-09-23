#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996);

char str1[101], str2[101];

void sort(char *str) {
	char temp;
	for (int i = 0; i < strlen(str); i++) {
		for (int j = i + 1; j < strlen(str); j++) {
			if (str[i] < str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}
int main()
{
	int num;

	scanf("%d ", &num);
	for (int i = 0; i < num; i++) {

		scanf("%s %s", str1, str2);
		if (!strcmp(str1, str2)) {
			printf("No.");
			printf("\n");
			continue;
		}

		sort(str1);
		sort(str2);

		if (!strcmp(str1, str2))
			printf("Yes");
		else
			printf("No.");

		printf("\n");
	}
}