#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int *arr;
	int size = 1000;
	arr = (int *)malloc(sizeof(int) * size);

	// 입력받은 수 만큼 배열에 모두 초기화 해둔다
	for (int i = 2; i <= size; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= size; i++) {
		for (int j = 2; j <= size; j++) {

			// 자신과 같지않고 0으로 떨어지면 소수아님
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
