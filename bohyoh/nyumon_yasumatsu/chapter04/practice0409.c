#include <stdio.h>

int main(void)
{
	int i = 0, n;
	printf("正の整数: ");
	scanf("%d", &n);
	
	puts("解法1");
	while (i < n) {
		if (i++ % 2 == 0) {
			putchar('+');
		} else {
			putchar('-');
		}
	}
	putchar('\n');

	puts("解法2");
	i = 0;
	while (i < n) {
		printf("%c", i++ % 2 == 0 ? '+': '-');
	}
	putchar('\n');

	return 0;
}
