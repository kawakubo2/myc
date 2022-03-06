#include <stdio.h>

int main(void)
{
	int i, j, n;
	puts("正方形を作ります。");
	printf("何段ですか: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
