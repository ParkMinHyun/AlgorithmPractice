#include<stdio.h>
#pragma warning(disable: 4996)

int m(int a, int b) { return a<b ? a : b; }
int N, i, R, G, B, r, g, b;
int main() {
	scanf("%d", &N);
	while (N--) {
		scanf("%d%d%d", &r, &g, &b);
		r += m(G, B);
		g += m(R, B);
		b += m(R, G);
		R = r, G = g, B = b;
	}
	printf("%d", m(m(R, G), B));
}