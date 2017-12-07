#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num = 0;

	for (int i = 2; i < 100; i++) {
		int cnt = 0;
		for(int j = 2; j <= i; j++) {

			if (i % j == 0)
			{
				cnt++;
			}
		}
		if (cnt == 1)
			printf("%d ", i);
	}

}
