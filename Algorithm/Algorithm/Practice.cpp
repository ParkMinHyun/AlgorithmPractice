#include<stdio.h>

#pragma warning(disable: 4996)

int main(void) {

	int num[11] = { 0,1,2,4};
	int t, n;

	for (int i = 4; i < 11; i++)
		num[i] = num[i - 1] + num[i - 2] + num[i - 3];

	for (scanf("%d", &t); t--;)
	{
		scanf("%d", &n);
		printf("%d\n", num[n]);
	}



	return 0;

}


