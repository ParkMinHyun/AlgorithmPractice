
#include<stdio.h>
#pragma warning(disable: 4996)
void hanoi(int n, char from, char temp, char to)
{
	if (n == 1)
		printf("%d %c %c\n", 1,from, to);
	else
	{
		hanoi(n - 1, from, to, temp);
		printf("%d %c %c\n", n, from, to);
		hanoi(n - 1, temp, from, to);

	}
}
int main() {

	int num;
	scanf("%d", &num);
	hanoi(num, 'A', 'B', 'C');
	return 0;
}