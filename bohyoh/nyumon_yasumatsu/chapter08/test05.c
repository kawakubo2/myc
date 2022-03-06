#include <stdio.h>

#define sqr(x) ((x) * (x))

int main(void)
{
	int x = 10;
	printf("xの2乗:%d\n", sqr(x + 1));

	return 0;
}
