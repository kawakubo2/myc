#include <stdio.h>

int main(void)
{
	int a, b;

	puts("二つの整数を入力してください。");
	printf("整数a: ");
	scanf("%d", &a);
	printf("整数b: ");
	scanf("%d", &b);

	printf("%dを%dで割ると、商は%d、余りは%dです。\n", a, b, a / b, a % b);

	return 0;
}
