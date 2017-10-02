#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

typedef struct WORDBOOK
{
	int len;
	char word[51];
}wordBook;

wordBook wb[20001];

void Sort(int size) {
	int k;
	wordBook w;

	for (int i = 0; i < size - 1; i++)
		for (int j = 0; j < size - 1 - i; j++)
			if (wb[j].len > wb[j + 1].len ||
				(strcmp(wb[j].word, wb[j + 1].word) == 1 && wb[j].len == wb[j + 1].len))
			{
				w = wb[j];
				wb[j] = wb[j + 1];
				wb[j + 1] = w;
			}
}

int main() {
	int num;

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", wb[i].word);
		wb[i].len = strlen(wb[i].word);
	}

	Sort(num);

	for (int j = 0; j < num; j++) {
		if (strcmp(wb[j].word, wb[j + 1].word))
			printf("%s\n", wb[j].word);
	}

	return 0;
}