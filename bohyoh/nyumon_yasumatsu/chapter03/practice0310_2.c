#include <stdio.h>

int main(void)
{
	int a, b, c, count = 0;
	puts("三つの整数を入力してください");
	
	printf("整数A : ");
	scanf("%d", &a);
	printf("整数B : ");
	scanf("%d", &b);
	printf("整数C : ");
	scanf("%d", &c);

	if (a == b) count++;
	if (b == c) count++;
	if (c == a) count++;

	if (count == 3) puts("三つの数は等しいです。\n");
	if (count == 1)	puts("二つの値が等しいです。\n");
	if (count == 0) puts("三つの値は異なります。\a\n");

	return 0;
}
