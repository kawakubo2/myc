#include <stdio.h>

int main(void)
{
	int i, n;

	printf("正の整数: ");
	scanf("%d", &n);

	puts("-- 縦方向に表示 --");
	i = 0;
	while (i++ < n) {
		printf("%c\n", '*');
	}

	puts("-- 横方向に表示 --");
	i = 0;
	while (i++ < n) {
		printf("%c", '*');
	}
	printf("\n");

	return 0;
}
