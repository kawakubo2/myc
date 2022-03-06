#include <stdio.h>

int add(int, int);

int main(void)
{
	int a, b;
	puts("2つの整数を加算します");
	printf("整数a: ");
	scanf("%d", &a);
	printf("整数b: ");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, add(a, b));

	return 0;
}

int add(int x, int y)
{
	return x + y;
}
