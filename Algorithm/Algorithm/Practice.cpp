#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996);

void leftRotatebyOne(char arr[], int n)
{
	int i, temp;
	temp = arr[0];
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];
	arr[i] = temp;
}
void leftRotate(char arr[], int d, int n)
{
	int i;
	for (i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

void rightRotatebyOne(char arr[], int n)
{
	int i, temp;
	temp = arr[strlen(arr)-1];
	for (i = n-1; i > 0; i--)
		arr[i] = arr[i-1];
	arr[0] = temp;
}
void rightRotate(char arr[], int d, int n)
{
	int i;
	for (i = 0; i < d; i++)
		rightRotatebyOne(arr, n);
}


int main()
{
	char str1[8], str2[32], str3[32],result[31];
	int rotate;

	scanf("%s %s %d %s", str1, str2, &rotate, str3);

	if (!strcmp(str1, "encrypt")) {
		for (int i = 0; i <= strlen(str2); i++) {
			if(str2[i] + (str3[i] - 97) > 122)
				result[i] = str2[i] + (str3[i] - 97) - 26;
			else
				result[i] = str2[i] + str3[i] - 97;
		}

		result[strlen(str2)] = '\0';

		if (rotate < 0)
			rightRotate(result, -rotate, strlen(result));
		else
			leftRotate(result, rotate, strlen(result));

	}
	else if(!strcmp(str1, "decrypt")) {

		if (rotate < 0)
			leftRotate(str3, -rotate, strlen(str3));
		else
			rightRotate(str3, rotate, strlen(str3));

		for (int i = 0; i <= strlen(str2); i++) {
			if (str3[i] - str2[i] > 0)
				result[i] = 'a' + str3[i] - str2[i];
			else
				result[i] = str3[i] - str2[i] + 123;
		}
	}
	//encrypt secretword -3 helloworld
	//decrypt secretword 3 cspkfcgzin
	for(int i =0; i<strlen(str3); i++)
		printf("%c", result[i]);
	printf("\n");
}