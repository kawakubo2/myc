#include <stdio.h>

int main(void)
{
	int i;
	static double sd[5];

	for (i = 0; i < 5; i++) {
		printf("%lf\n", sd[i]);
	}

	return 0;
}

