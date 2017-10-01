#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable: 4996)

int main() {
	int num;
	int **arr, **arr2;
	int *inputM1, *inputM2;

	scanf("%d", &num);
	arr = (int **)malloc(sizeof(int**)*(num));
	arr2 = (int **)malloc(sizeof(int**)*(num));
	inputM1 = (int *)malloc(sizeof(int*)*(num));
	inputM2 = (int *)malloc(sizeof(int*)*(num));

	for (int i = 0; i < num; i++)
		arr[i] = (int *)malloc(sizeof(int*)*(num));
	for (int i = 0; i < num; i++)
		arr2[i] = (int *)malloc(sizeof(int*)*(num));

	for (int i = 0; i < num; i++)
		scanf("%d", &inputM1[i]);
	for (int i = 0; i < num; i++)
		scanf("%d", &inputM2[i]);

	for (int i = 0; i < num; i++)
	{
		int square = num-1;
		for (int j = square; j >= 0; j--) {
			int squareNum = pow(2, j);
			if (inputM1[i] / squareNum == 1) {
				arr[i][num - 1 - j] = 1;
				inputM1[i] -= squareNum;
			}
			else
				arr[i][num - 1 - j] = 0;
			square--;
		}
	}
	for (int i = 0; i < num; i++)
	{
		int square = num - 1;
		for (int j = square; j >= 0; j--) {
			int squareNum = pow(2, j);
			if (inputM2[i] / squareNum == 1){
				arr2[i][num - 1 - j] = 1;
				inputM2[i] -= squareNum;
			}
			else
				arr2[i][num - 1 - j] = 0;
			square--;
		}
	}

	char **str;

	str = (char **)malloc(sizeof(char )*num);
	for(int i=0; i<num; i++)
		str[i] = (char *)malloc(sizeof(char *)*num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++) {
			if (arr[i][j] == 1 || arr2[i][j] == 1)
				str[i][j] = '#';
			else
				str[i][j] = ' ';
		}
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++) {
			printf("%c ", str[i][j]);
		}
		printf("\n");
	}
	return 0;
}