#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, max;
	puts("4つの整数を入力してください。");

	printf("整数1: ");
	scanf("%d", &n1);
	printf("整数2: ");
	scanf("%d", &n2);
	printf("整数3: ");
	scanf("%d", &n3);
	printf("整数4: ");
	scanf("%d", &n4);

	max = n1;
	if (max < n2) max = n2;
	if (max < n3) max = n3;
	if (max < n4) max = n4;

	printf("最大値は%dです。\n", max);

	return 0;
}
