#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#pragma warning(disable:4996)

/*Timer ���� ����*/
clock_t before;
double processTime;

void checkProcessTime() {
	/*Timer ���*/
	processTime = (double)(clock() - before) / CLOCKS_PER_SEC;
	printf("\n�ɸ��ð��� %f�Դϴ�.\n", processTime);
}

int main() {
	before = clock();

	int num,temp = 0;
	char arr[80];

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < num; i++) {
		printf("%d ", arr[i]);
	}
	checkProcessTime();
	return 0;
}