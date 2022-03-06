#include <stdio.h>

void multiply_by_2(int *x)
{
	*x = *x * 2;
}

int main(void)
{
	int n = 5;
	multiply_by_2(&n);
	printf("n=%d\n", n);

	return 0;
}

