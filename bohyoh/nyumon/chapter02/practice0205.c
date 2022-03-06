#include <stdio.h>

int main(void)
{
	int a, b;
	puts("二つの整数を入力してください。");
	printf("整数a: ");
	scanf("%d", &a);
	printf("整数b: ");
	scanf("%d", &b);

	printf("%dは%dの%.2f%%です\n", a, b, (double)a / b * 100);

	return 0;
}
