#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strCpy(char *dest, const char *src);

void main() {
	char string[100];

	strcpy(string, "���ڿ� �����Լ�");
	puts(string);

	strCpy(string, "change String");
	puts(string);
}

char *strCpy(char *originString, const char *changeString) {

	while (*changeString) {
		// ���ʴ�� ���Խ�Ű��
		*originString++ = *changeString++;
	}

	// �� ���ڿ� �����ϱ�
	*originString = '\0';

	return originString;
}