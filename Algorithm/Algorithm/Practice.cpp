#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996);

int main() {

	char str[1000000];
	int len,sum=0, flag = 0, num;

	scanf("%d ", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		len = strlen(str);
		flag = 0;

		for (int i = 0; i < len; i++) {
			for(int j=0; j<i; j++)
				if (str[i] != str[i - 1] && str[j] == str[i]) {
					flag = 1;
					break;
				}
		}
		if (flag == 1)
			sum++;
	}

	printf("%d\n",num-sum);
	return 0;
}