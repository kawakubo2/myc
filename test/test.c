#include <stdio.h>
#include <math.h>

#define radius 1.0

double get_y(double x)
{
	return sqrt(radius * radius - x * x);
}

double get_area(double step)
{
	double x;

	double half_area = 0.0;
	
	for (x = -radius + step; x <= radius; x += step) {
		half_area += step * get_y(x);
	}

	return half_area * 2;
}

int in_area(double x, double y)
{
	return pow(x, 2) + pow(y, 2) <= pow(radius, 2);
}

int main(void)
{
	puts("========== 方法1 =========");
	double circle_area = pow(radius, 2) * M_PI;
	printf("mathを使った半径%.1fの円の面積: %.7lf\n", radius, circle_area);
	double delta = 1.0e-7;
	double step = 1.0;
	int counter = 0;
	while (1) {
		counter++;
		double calc_area = get_area(step);
		printf("計算した面積: %.7lf\n", calc_area);
		if (fabs(calc_area - circle_area) <= delta) {
			break;
		}
		if (counter > 50) {
			printf("%d回で誤差内に収まらなかった。\n", counter);
		}
		step /= 2.0;
	}
	printf("%d回で誤差内に収まった。\n", counter);

	puts("========== 方法1 =========");



	return 1;
}

