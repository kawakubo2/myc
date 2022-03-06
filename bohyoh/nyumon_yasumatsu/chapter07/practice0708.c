#include <stdio.h>

int main(void)
{
	printf("floatのサイズ      :%u\n", (unsigned)sizeof(float));
	printf("doubleのサイズ     :%u\n", (unsigned)sizeof(double));
	printf("long doubleのサイズ:%u\n", (unsigned)sizeof(long double));

	return 0;
}


