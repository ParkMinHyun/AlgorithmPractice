#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int *arr;
	int size = 1000;
	arr = (int *)malloc(sizeof(int) * size);

	// �Է¹��� �� ��ŭ �迭�� ��� �ʱ�ȭ �صд�
	for (int i = 2; i <= size; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= size; i++) {
		for (int j = 2; j <= size; j++) {

			// �ڽŰ� �����ʰ� 0���� �������� �Ҽ��ƴ�
			if (arr[j] != i && arr[j] % i == 0) {  
				arr[j] = 0;
			}
		}
	}

	for (int i = 2; i <= size; i++) {
		if (arr[i] != 0)
			printf("%d ", arr[i]);
	}

	free(arr);
}
