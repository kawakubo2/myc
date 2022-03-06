#include <stdio.h>

int min21(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int min22(int a, int b)
{
	int min = a;
	if (b < min) min = b;
	return min;
}

int min23(int a, int b)
{
	return (a < b) ? a: b;
}

int main(void)
{
	int a, b;
	puts("二つの整数を入力してください。");
	printf("整数a: "); scanf("%d", &a);
	printf("整数b: "); scanf("%d", &b);

	printf("最小値は%dです。\n", min21(a, b));
	printf("最小値は%dです。\n", min22(a, b));
	printf("最小値は%dです。\n", min23(a, b));

	return 0;
}
