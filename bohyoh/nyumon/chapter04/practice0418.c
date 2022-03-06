#include <stdio.h>

int main(void)
{
	int i, n;
	printf("何個*を表示しますか:");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		putchar('*');
		if (i % 5 == 0) {
			putchar('\n');
		}
	}
	putchar('\n');

	return 0;
}
