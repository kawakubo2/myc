#include <stdio.h>

int main(void)
{
	int a, b;
	puts("二つの整数を入力してください。");
	printf("整数a#整数b: ");
	scanf("%d#%d", &a, &b);

	printf("%dと%dの和は%dで積は%dです。\n", a, b, a + b, a * b);
	return 0;
}
