#include <stdio.h>

#define swap(type, a, b) {type (t); (t) = (a); (a) = (b); (b) = (t);}

int main(void)
{
	int n1, n2;
	puts("2つの整数を入れ替えます。");
	printf("整数n1 : ");
	scanf("%d", &n1);
	printf("整数n2 : ");
	scanf("%d", &n2);

	printf("入れ替え前: a = %d, b = %d\n", n1, n2);
	swap(int, n1, n2);
	printf("入れ替え後: a = %d, b = %d\n", n1, n2);

	double x1, x2;
	puts("2つの実数を入れ替えます。");
	printf("実数x1 : ");
	scanf("%lf", &x1);
	printf("実数x2 : ");
	scanf("%lf", &x2);

	printf("入れ替え前: a = %lf, b = %lf\n", x1, x2);
	swap(double, x1, x2);
	printf("入れ替え後: a = %lf, b = %lf\n", x1, x2);

	return 0;
}

