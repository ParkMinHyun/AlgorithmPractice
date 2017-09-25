#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996);

int alphabet[26] = { 0 };

void bubbleSort(int *alphabet) {

	int temp;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j <  26 - (i + 1); j++) {
			if (alphabet[j] < alphabet[j+1])
			{
				temp = alphabet[j+1];
				alphabet[j+1] = alphabet[j];
				alphabet[j] = temp;
			}
		}
	}
}

int main() {

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

	bubbleSort(alphabet);

	if (alphabet[0] == alphabet[1])
		printf("?\n");
	else
		printf("%c\n", maxValue );

}