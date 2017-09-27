#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int sum = 0;
void sort(int *onDo, int start, int K, int index) {
	int temp, i, j, l;
	int *tempOnDo;
	tempOnDo = (int *)malloc(sizeof(int)*(K+1));
	for (l = 0; l < K; l++){
		tempOnDo[l] = onDo[l+start];
		//printf("%d ", tempOnDo[l]);
	}

	for (i = 0; i < K - 1; i++) {
		for (j = 0; j < K - 1 - i; j++) {
			if (tempOnDo[j] > tempOnDo[j + 1]) {
				temp = tempOnDo[j];
				tempOnDo[j] = tempOnDo[j + 1];
				tempOnDo[j + 1] = temp;
			}
		}
	}

	/*printf("-- 정렬 후 :");
	for (i = 0; i < K; i++) {
		printf("%d ", tempOnDo[i]);
	}*/

	sum += tempOnDo[index - 1];
	//printf("중간값: %d , 중간합: %d\n ", tempOnDo[index-1], sum);
}

int main()
{
	int N, K, i = 0, index;
	int *onDo;

	scanf("%d %d", &N, &K);
	index = (K + 1) / 2;
	onDo = (int *)malloc(sizeof(int)*(N+1));
	while (i < N) {
		scanf("%d", &onDo[i]);

		if (i < K - 1) {
			i += 1;
			continue;
		}

		sort(onDo, (i + 1) - K, K, index);
		i += 1;
	}
	printf("%d", sum);
	return 0;
}