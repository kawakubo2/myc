#include <stdio.h>

#define sqr(x) ((x) * (x))

int main(void)
{
	int    n;
	double x;

	printf("整数を入力してください:");
	scanf("%d", &n);
	printf("その数の2乗は%dです。\n", sqr(n));

	printf("実数を入力してください:");
	scanf("%lf", &x);
	printf("その数の2乗は%lfです。\n", sqr(x));

	return 0;
}

