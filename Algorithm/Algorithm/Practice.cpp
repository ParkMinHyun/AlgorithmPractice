#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main()
{
	char ch;
	char from_a_txt[100];
	FILE *fileIn, *fileOut;

	fileIn = fopen("aa.txt", "r");
	fileOut = fopen("bb.txt", "w");

	if (fileIn != nullptr) {
		while (fscanf(fileIn, "%c", &ch) != EOF) {
			fprintf(fileOut, "%c", ch);

		}
		/*fgets(from_a_txt, 150, fileIn);
		fputs(from_a_txt, fileOut);*/
		//fprintf(fileOut, "%s", from_a_txt);
		fclose(fileIn);
		fclose(fileOut);
	}
	return 0;
}