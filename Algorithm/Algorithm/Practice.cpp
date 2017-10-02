#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

void lenSort(char str[][51],int size) {
	int len1, len2;
	char *temp;

	for(int i=0; i< size-1; i++){
		for(int j=0; j<size-1-i; j++){
			len1 = strlen(str[j]);
			len2 = strlen(str[j+1]);
			if (len1 > len2 || (strcmp(str[j],str[j+1])<1 && len1==len2))
			{
				temp = str[j];
				strcpy(str[j], str[j + 1]);
				strcpy(str[j+1], temp);
			}
		}
	}
}
int main() {
	int num;
	char str[20000][51];

	scanf("%d", &num);
	for (int i = 0; i < num; i++)
		scanf("%s", str[i]);

	lenSort(str,num);

	for (int i = 0; i < num; i++)
		scanf("%s", str[i]);
}