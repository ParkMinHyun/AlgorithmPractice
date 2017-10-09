#include<stdio.h>
#pragma warning(disable: 4996)

int size = 0, sum = 0;
int arr2[101] = { 0, };
void search(int arr[][101], int from) {
	// 1번 컴퓨터에서 연결 된 모든 컴퓨터 재귀로 검사 시작함. arr2는 중복피해서 불 필요한 검사 안하려고 생성 
	for (int i = 2; i <= size; i++) {
		if (arr[from][i] == 1 && arr2[i] != 1) {
			sum++;
			arr2[i] = 1;
			search(arr, i);
		}
	}
}

int main(void) {
	int ganSun, from, to;
	int arr[101][101] = { 0, };
	scanf("%d", &size);
	scanf("%d", &ganSun);

	while (ganSun--) {
		scanf("%d %d", &from, &to);
		arr[to][from] = 1;
		arr[from][to] = 1;
	}

	search(arr, 1);
	
	printf("%d\n", sum);
	return 0;
}