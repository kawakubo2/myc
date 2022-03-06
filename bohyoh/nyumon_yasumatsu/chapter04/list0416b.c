#include <stdio.h>

int main(void)
{
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (i * j > 40) {
				goto abc;
			}
			printf("%3d", i * j);
		}
		putchar('\n');
	}
abc:
	return 0;
}
