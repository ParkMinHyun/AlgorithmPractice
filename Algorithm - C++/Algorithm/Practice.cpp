#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strCpy(char *dest, const char *src);

void main() {
	char string[100];

	strcpy(string, "문자열 복사함수");
	puts(string);

	strCpy(string, "change String");
	puts(string);
}

char *strCpy(char *originString, const char *changeString) {

	while (*changeString) {
		// 차례대로 대입시키기
		*originString++ = *changeString++;
	}

	// 끝 문자열 정리하기
	*originString = '\0';

	return originString;
}