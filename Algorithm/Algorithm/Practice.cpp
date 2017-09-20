#include <stdio.h>
#include <time.h>

#pragma warning(disable:4996)
int main() {

	/*Timer 변수 선언*/
	clock_t before;
	double result;
	before = clock();

	int arr[10][10];
	int num;
	int i, j;
	scanf("%d", &num);

	for (i = 0; i<num; i++)
	{
		for (j = 0; j<num; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	int temp;
	for (i = 0; i<num; i++)
	{
		for (j = i + 1; j<num; j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}

	for (i = 0; i<num; i++)
	{
		for (j = 0; j<num; j++)
		{
			if (j == num - 1)
				printf("%d", arr[i][j]);
			else
				printf("%d ", arr[i][j]);
		}
		if (i != num - 1)
			printf("\n");
	}


	/*Timer 출력*/
	result = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n걸린시간은 %f입니다.\n",result);
	return 0;
}