#include <stdio.h>

int main(void)
{
	int a, b;
	puts("二つの整数を入力してください。");
	printf("整数a: ");
	scanf("%d", &a);
	printf("整数b: ");
	scanf("%d", &b);

	printf("%dと%dの平均は%fです。\n", a, b, (a + b) / 2.0);

	return 0;
}
