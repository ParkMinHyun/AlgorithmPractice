#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int compare(const void *x, const void *y)
{
	char *a, *b;
	a = (char *)x;
	b = (char *)y;

	if (strlen(a) > strlen(b)) return 1;
	else if (strlen(a) < strlen(b)) return -1;
	else return strcmp(a,b);
}

int main() {
	int num;
	char str[20000][51];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", str[i]);
	}

	qsort(str, num, sizeof(str[0]), compare);

	for (int j = 0; j < num; j++) {
		if (strcmp(str[j], str[j + 1])) {
			printf("%s\n", str[j]);
		}
	}
	return 0;
}