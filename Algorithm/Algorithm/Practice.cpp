#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996);

int main() {

	char str[101];
	int len,sum=0, flag = 0, num;

	scanf("%d ", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		int a[26] = { 0 };

		for (int i = 0; str[i]; i++) {
			a[str[i] - 97] = 1;
			if (str[i] != str[i + 1] && a[str[i+1] - 'a'] == 1) {
				sum++;
				break;
			}
		}
	}

	printf("%d\n",num-sum);
	return 0;
}