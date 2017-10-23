#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#pragma warning(disable: 4996)

int main(void) {

	char str1[101], str2[101];
	char str3[101];
	int sum = 0, sum2 = 0;
	scanf("%s %s", str1, str2);
	strcpy(str3, str1);

	while (strstr(str1, str2) != NULL) {
		sum++;
		sprintf(str1, "%s", strstr(str1, str2)+strlen(str2));
	}

	while (strstr(str3, str2) != NULL) {
		sum2++;
		sprintf(str3, "%s", strstr(str3, str2) + 1);
	}

	printf("%d\n%d", sum,sum2);
	return 0;
}