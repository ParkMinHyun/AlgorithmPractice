#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

int stack[10000];
int size=0;

void push(int data) {
	if (size > 10000)
		return;

	stack[size++] = data;
}

int pop(int data) {
	if (size == 0)
		return -1;

	return stack[--size];
}

int top() {
	if (size == 0)
		return -1;

	return stack[size-1];
}

int empty() {
	if (size == 0)
		return 1;
	else
		return 0;
}

int sizeOfStack() {
	return size;
}

int main(void)
{
	int num, data;
	char input[10];
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", input);
		if (!strcmp("push", input)) {
			scanf("%d", &data);
			push(data);
		}
		else if (!strcmp("pop", input)) {
			printf("%d\n", pop(data));
		}
		else if (!strcmp("top", input)) {
			printf("%d\n", top());

		}
		else if (!strcmp("empty", input)){
			printf("%d\n", empty());
		}
		else if (!strcmp("size", input)) {
			printf("%d\n", sizeOfStack());
		}
	}
}