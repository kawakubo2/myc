#include <stdio.h>

int main(void)
{
	int x, y;
	puts("二つの整数を入力してください。");
	printf("整数x: ");
	scanf("%d", &x);
	printf("整数y: ");
	scanf("%d", &y);

	printf("%dと%dの和は%d、積は%dです。\n", x, y, x + y, x * y);

	return 0;
}
