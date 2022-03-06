#include <stdio.h>
#include <math.h>

int main(void)
{
	double area, length;
	puts("正方形の一辺の長さを求めます。");
	printf("正方形の面積を入力してください : ");
	scanf("%lf", &area);

	length = sqrt(area);

	printf("面積が%lfの正方形の一辺の長さは%lfです。\n", area, length);

	return 0;
}
	
