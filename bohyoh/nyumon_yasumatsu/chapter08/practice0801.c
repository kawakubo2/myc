#include <stdio.h>

#define diff(x, y) ((x) - (y))

int main(void)
{
	int n1, n2;
	puts("2つの整数を入力してください。");
	printf("整数n1 : ");
	scanf("%d", &n1);
	printf("整数n2 : ");
	scanf("%d", &n2);
	printf("diffテスト:n1とn2の差は%dです。\n", diff(n1, n2));

	double x1, x2;
	puts("2つの実数を入力してください。");
	printf("実数1 : ");
	scanf("%lf", &x1);
	printf("実数2 : ");
	scanf("%lf", &x2);
	printf("diffテスト:n1とn2の差は%lfです。\n", diff(x1, x2));

	return 0;
}
