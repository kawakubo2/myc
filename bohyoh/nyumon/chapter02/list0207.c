#include <stdio.h>

int main(void)
{
	double vx, vy;
	
	puts("二つの実数を入力してください: ");
	printf("実数vx: ");
	scanf("%lf", &vx);
	printf("実数vy: ");
	scanf("%lf", &vy);

	printf("%f + %f = %.2f\n", vx, vy, vx + vy);
	printf("%f - %f = %.2f\n", vx, vy, vx - vy);
	printf("%f * %f = %.2f\n", vx, vy, vx * vy);
	printf("%f / %f = %.2f\n", vx, vy, vx / vy);

	return 0;
}
