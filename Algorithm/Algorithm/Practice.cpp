#include<stdio.h>
#pragma warning(disable: 4996)

int gcd(int m, int n) {
	if (n == 0)
		return m;

	return gcd(n, m%n);
}

int lcm(int m, int n)
{
	return (m*n) / gcd(m, n);
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	printf("%d %d\n", gcd(m, n),lcm(m,n));
}