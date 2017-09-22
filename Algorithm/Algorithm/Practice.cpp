#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996);

int main()
{
	int num,sum, alphabet[26] = { 0 }, alphabet2[26] = { 0 };
	char str1[101], str2[101];

	scanf("%d ", &num);
	for (int i = 0; i < num; i++) {
		sum = 0;
		for (int j = 0; j < 26; j++){
			alphabet[j] = 0;
			alphabet2[j] = 0;
		}

		scanf("%s %s", str1, str2);
		if (!strcmp(str1, str2)){
			printf("No.\n");
			continue;
		}

		for (int j = 0; j < strlen(str1); j++){
			if('a' <= str1[j] && str1[j] <= 'z')
				alphabet[str1[j] - 97] ++;
			else
				alphabet[str1[j] - 65] ++;
		}
		
		for (int j = 0; j < strlen(str2); j++)
			if ('a' <= str2[j] && str2[j] <= 'z')
				alphabet2[str2[j] - 97] ++;
			else
				alphabet2[str2[j] - 65] ++;
		
		for (int j = 0; j < 26; j++)
			if ( (alphabet[j] == alphabet2[j]) && alphabet[j] != 0)
				sum += alphabet[j];

		
		printf("%s\n",(sum!=strlen(str1))?"No.":"Yes");
	}
}