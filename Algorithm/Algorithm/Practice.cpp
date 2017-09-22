#include <stdio.h>
#include <string.h>
int main() {

	int num, len;
	char str[81];
	scanf("%d ", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		len = strlen(str);

		for (int j = 0; j < len; ) {
			if (str[j] == '%' && str[j + 1] == '2')
			{
				switch (str[j + 2])
				{
				case '0': printf(" "); break;
				case '1': printf("!"); break;
				case '4': printf("$"); break;
				case '5': printf("%c",37); break;
				case '8': printf("("); break;
				case '9': printf(")"); break;
				case 'a': printf("*"); break;
				default: printf("%c%c", str[j], str[j + 1]); --j; break;
				}
				j += 3;
			}
			else{
				printf("%c", str[j]);
				j++;
				if (j == len - 2) {
					printf("%c%c", str[j], str[j + 1]);
					break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}