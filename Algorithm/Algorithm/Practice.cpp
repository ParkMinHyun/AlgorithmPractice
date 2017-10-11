#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable: 4996)

int size = 0, sum = 0;
int arr[101][101] = { 0, };
int number[101] = { 0, };
int check[101] = { 0, };
int queue[101] = { 0, };

int BFS(int arr[][101], int start, int target) {
	int front = 0, rear = 0, Pop, i;

	queue[0] = start;
	rear++;
	check[start] = 1;

	while (front < rear) {
		Pop = queue[front];
		front++;

		for (i = 1; i <= size; i++) {
			if (arr[Pop][i] == 1 && check[i] == 0) {
				queue[rear] = i;
				rear++;
				check[i] = 1;
				number[i] = number[Pop] + 1;
				if (target == i)
					return number[i];
			}
		}
	}
	return -1;
}

int main(void) {
	int edge, to, from, A, B;

	scanf("%d", &size);
	scanf("%d %d", &A, &B);
	scanf("%d", &edge);

	while (edge--) {
		scanf("%d %d", &to, &from);
		arr[to][from] = 1;
		arr[from][to] = 1;
	}

	printf("%d\n",BFS(arr, A, B));
	return 0;
}