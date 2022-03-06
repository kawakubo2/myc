#include <stdio.h>

int main(void)
{
	int x = 8;
	int y = 5;
	int *p1 = &x;
	int *p2 = &y;

	puts("ポイント入れ替え前");
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	int *temp = p1;
	p1 = p2;
	p2 = temp;

	puts("ポイント入れ替え後");
	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);

	return 0;
}
