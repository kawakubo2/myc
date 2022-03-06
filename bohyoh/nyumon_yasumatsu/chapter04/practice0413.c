#include <stdio.h>

int main(void)
{
	int i, n, sum = 0;

	printf("正の整数: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		sum += i;
	}

	printf("1から%dまでの和は%dです。\n", n, sum);
	
	return 0;
}
