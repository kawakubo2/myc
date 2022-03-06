#include <stdio.h>

int main(void)
{
	int i;
	float x = 0.00;
	float sum1 = 0.00;
	int sum2 = 0;
	for (i = 0; i <= 100; i++) {
		sum1 += x; 
		sum2 += i;
		x += 0.01;
		printf("sum1 = %f sum2 = %f\n", sum1, sum2 / 100.0);
	}
	return 0;
}
