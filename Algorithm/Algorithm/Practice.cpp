#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996);

int main() {

	int alphabet[26] = { 0 };
	char str[1000000];
	int len, flag = 0, max = 0;
	char maxValue;

	scanf("%s", str);
	len = strlen(str);

	for (int i = 0; i < len; i++)
	{
		if ('a' <= str[i] && str[i] <= 'z') 
			str[i] = str[i] - 32;
		alphabet[str[i]-65] ++;

		if (max < alphabet[str[i] - 65]){
			max = alphabet[str[i] - 65];
			maxValue = str[i];
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if ( max == alphabet[i]){
			flag ++;
		}
	}

	if (flag > 1)
		printf("?\n");
	else
		printf("%c\n", maxValue );

}