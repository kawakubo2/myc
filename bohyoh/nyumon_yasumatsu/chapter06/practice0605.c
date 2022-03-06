#include <stdio.h>

int sumup(int n)
{
	int total = 0;
	for (int i = 1; i <= n; i++) {
		total += i;
	}
	return total;
}

int main(void)
{
	int n;
	puts("1～nまでの和を求めます。");
	printf("整数n: ");
	scanf("%d", &n);

	printf("1～%dまでの全整数の和は%dです。\n", n, sumup(n));
	
	return 0;
}
