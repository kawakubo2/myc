#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	double a, b, c, d;
	puts("4つの数値の最大値を求めます。");
	printf("a : ");
	scanf("%lf", &a);
	printf("b : ");
	scanf("%lf", &b);
	printf("c : ");
	scanf("%lf", &c);
	printf("d : ");
	scanf("%lf", &d);

	printf("a=%lf, b=%lf, c=%lf, d=%lf の最大値は%lfです。\n",\
		a, b, c, d, max(max(a, b), max(c, d))); 
	printf("a=%lf, b=%lf, c=%lf, d=%lf の最大値は%lfです。\n",\
		a, b, c, d, max(max(max(a, b), c), d)); 

	return 0;
}

