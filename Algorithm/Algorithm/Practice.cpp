#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
void leftMovebyOne(char arr[], int start, int end);

int main()
{
	char str[100];
	char croatia[8][4] = { { "c=" },{ "c-" },{ "dz=" },{ "d-" },{ "lj" },{ "nj" },{ "s=" },{ "z=" } };
	/*c=es=njak*/
	
	scanf("%s", str);
	int size = strlen(str);
	for (int i = 0; i < 8; i++)
	{
		char temp[100];
		for (int j = 0; j < size - 1; j++) {
			if (str[j] == 'd' && str[j + 1] == 'z')
			{
				if (j == size - 2)
					if (str[j + 2] == '=') {
						str[j] = '*';
						leftMovebyOne(str, j, strlen(str));
						leftMovebyOne(str, j, strlen(str));
					}
			}
			else {
				sprintf_s(temp, "%c%c", str[j], str[j + 1]);
				if (!strcmp(croatia[i], temp)) {
					str[j] = '*';
					leftMovebyOne(str,j+1,strlen(str));
				}
			}
		}
	}

	printf("%d\n", strlen(str));

	return 0;
}


void leftMovebyOne(char arr[], int start, int end)
{
	int i;
	for (i = start; i < end; i++)
		arr[i] = arr[i + 1];
}