#include <stdio.h>

void sum_diff(int a, int b, int *sum, int *diff)
{
	*sum = a + b;
	*diff = (a > b) ? a - b : b - a;
}

int main(void)
{
	int x = 10;
	int y = 25;
	int wa, sa;

	sum_diff(x, y, &wa, &sa);

	printf("xとyの和は%d\n", wa);
	printf("xとyの差は%d\n", sa);

	return 0;
}
