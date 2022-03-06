#include <stdio.h>

int main(void)
{
	int i, j, n;
	puts("下向き数字のピラミッドを作ります");
	printf("何段ですか: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i - 1; j++) {
			putchar('-');
		}
		for (j = 1; j <= 2 * (n - i) + 1  ; j++) {
			printf("%d", i % 10);
		}
		for (j = 1; j <= i - 1; j++) {
			putchar('-');
		}
		putchar('\n');
	}
	return 0;
}
