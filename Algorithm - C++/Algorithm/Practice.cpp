#include <stdio.h>
#include <string.h>

int main() {

	char a[100];
	int sum = 0 ;

	scanf("%s", a);
	int len = strlen(a);

	for (int i = 0; i < len; i++) 
		sum = sum * 10 + (a[i] - '0');
	
	printf("%d", sum);
}