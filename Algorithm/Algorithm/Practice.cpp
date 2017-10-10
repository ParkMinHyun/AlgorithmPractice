#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

int size = 0, sum = 0;
int arr2[1001] = { 0, };
int arr3[1001] = { 0, };
int queue[1001] = { 0, };

void DFS(int **arr, int start, int first) {

	printf("%d ", start);
	for (int i = 1; i <= size; i++) {
		if (arr[start][i] == 1 && arr2[i] == 0) {
			arr2[i] = 1;
			DFS(arr, i, 0);
		}
	}
}

void BFS(int **arr, int start) {
	int front = 0, rear = 0, Pop, i;

	printf("%d ", start);
	queue[0] = start;
	rear++;
	arr3[start] = 1;

	while (front<rear) {
		Pop = queue[front];
		front++;

		for (i = 1; i <= size; i++) {
			if (arr[Pop][i] == 1 && arr3[i] == 0) {
				printf("%d ", i);
				queue[rear] = i;
				rear++;
				arr3[i] = 1;
			}
		}
	}

	return;
}

int main(void) {
	int edge, from, to, start;
	int **arr;

	scanf("%d %d %d", &size, &edge, &start);

	arr = (int **)malloc(sizeof(int **)*(size + 1));
	for (int i = 0; i <= size; i++) {
		arr[i] = (int *)malloc(sizeof(int *)*(size + 1));
	}

	while (edge--) {
		scanf("%d %d", &from, &to);
		arr[to][from] = 1;
		arr[from][to] = 1;
	}

	arr2[start] = 1;
	DFS(arr, start, 1);

	printf("\n"); 
	
	arr3[start] = 1;
	BFS(arr, start);

	return 0;
}