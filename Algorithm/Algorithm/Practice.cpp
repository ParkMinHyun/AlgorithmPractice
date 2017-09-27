#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void leftMovebyOne(char arr[], int start, int end);
int main()
{
	char str[101];
	char croatia[8][4] = { { "c=" },{ "c-" },{ "dz=" },{ "d-" },{ "lj" },{ "nj" },{ "s=" },{ "z=" } };
	
	scanf("%s", str);
	int size = strlen(str);
	for (int i = 0; i < 8; i++)
	{
		char *temp;
		for (int j = 0; j < size - 1; j++) {
			char str2[101];

			if (str[j] == 'd' && str[j + 1] == 'z')
			{
				if (j != size - 2) {
					if (str[j + 2] == '=') {
						str[j] = '*';
						leftMovebyOne(str, j + 1, size);
						leftMovebyOne(str, j + 1, size);
					}
				}
			}
			else {
				sprintf(str2, "%c%c", str[j], str[j + 1]);
				if (!strcmp(croatia[i], str2)) {
					str[j] = '*';
					leftMovebyOne(str, j + 1, size);
				}
			}
		}
	}

	printf("%d\n", strlen(str));

	return 0;
}
void leftMovebyOne(char arr[], int start, int end)
{
	int i;;
	for (i = start; i < end; i++)
		arr[i] = arr[i + 1];
}