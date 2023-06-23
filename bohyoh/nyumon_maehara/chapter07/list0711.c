#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
int main(void)
{
    double x1, y1;
    double x2, y2;

    printf("2点間の距離を求めます。\n");
    printf("点1・・・X座標: "); fscanf(stdin, "%lf", &x1);
    printf("         Y座標: "); fscanf(stdin, "%lf", &y1);
    printf("点2・・・X座標: "); fscanf(stdin, "%lf", &x2);
    printf("         Y座標: "); fscanf(stdin, "%lf", &y2);

    printf("距離は%fです。\n", dist(x1, y1, x2, y2));

    return 0;
}