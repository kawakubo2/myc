#include <stdio.h>
int add(int x, int y)
{
	return x + y;
}

int main(void)
{
	int a, b;
	puts("2つの整数の和を求めます。");
	printf("整数a: "); scanf("%d", &a);
	printf("整数b: "); scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, add(a, b));
	return 0;
}
