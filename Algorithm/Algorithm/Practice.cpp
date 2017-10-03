#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int compareLen(const void *a, const void*b) {
	return (strlen((char *)a) > strlen((char *)b)) ? 1 : strlen((char *)a) < strlen((char *)b) ? -1 : strcmp((char *)a, (char *)b);
}

int compare(const void *a, const void*b) {
	return strcmp((char *)a, (char *)b);
}

int main() {
	int num;
	char str[20000][51];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", str[i]);
	}

	qsort(str, num, sizeof(str[0]), compareLen);

	for (int j = 0; j < num; j++) {
		if (strcmp(str[j], str[j + 1])) {
			printf("%s\n", str[j]);
		}
	}

	_sleep(5000);
	return 0;
}