#include <stdio.h>

int main(void)
{

	int i, n;
	printf("整数値: ");
	scanf("%d", &n);

	puts("===< 奇数の列挙 >===");
	puts("解法1");
	for (i = 0; i <= n; i++) {
		if (i % 2 != 0) {
			printf("%d ", i);
		}
	}
	putchar('\n');

	puts("解法2");
	for (i = 1; i <= n; i += 2) {
		printf("%d ", i);
	}
	putchar('\n');

	return 0;
}
