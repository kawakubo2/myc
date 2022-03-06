#include <stdio.h>

int main(void)
{
	int n1, n2, n3, min;
	puts("3つの整数を入力してください。");
	printf("整数1: ");
	scanf("%d", &n1);
	printf("整数2: ");
	scanf("%d", &n2);
	printf("整数3: ");
	scanf("%d", &n3);

	min = n1;
	if (min > n2) min = n2;
	if (min > n3) min = n3;

	printf("最小値は%dです。\n", min);

	return 0;
}
