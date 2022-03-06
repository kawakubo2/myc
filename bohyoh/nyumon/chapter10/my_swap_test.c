#include <stdio.h>

void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	puts("2つの整数の中身を入れ替えます。");
	int a, b;
	printf("整数a:");
	scanf("%d", &a);
	printf("整数b:");
	scanf("%d", &b);

	printf("入れ替え前: a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("入れ替え後: a=%d b=%d\n", a, b);

	return 0;
}
	
