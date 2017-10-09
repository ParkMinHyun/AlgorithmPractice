#include<stdio.h>
#pragma warning(disable: 4996)

int main(void) {
	int num,flag=0;
	int alphabet[26] = { 0, };

	scanf("%d", &num);
	while (num--) {
		char name[31];
		scanf("%s", name);

		alphabet[name[0] - 97] ++;
	}

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			printf("%c", i + 97);
			flag = 1;
		}
	}

	if (flag == 0)
		printf("PREDAJA");

	return 0;
}