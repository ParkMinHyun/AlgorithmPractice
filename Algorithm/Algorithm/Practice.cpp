#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main()
{
	char from_a_txt[100];
	FILE *fileIn, *fileOut;
	fileIn = fopen("aa.txt", "r");
	fileOut = fopen("bb.txt", "w");

	if (fileIn != nullptr) {
		fscanf(fileIn, "%s", from_a_txt);
		fprintf(fileOut, "%s", from_a_txt);
		fclose(fileIn);
		fclose(fileOut);
	}

	return 0;
}