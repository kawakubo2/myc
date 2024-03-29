#include <stdio.h>
#include <math.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;
    double y;
} Point;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

int main(void)
{
    Point crnt, dest;

    printf("現在地のX座標: "); scanf("%lf", &crnt.x);
    printf("　　　　y座標: "); scanf("%lf", &crnt.y);
    printf("目的地のX座標: "); scanf("%lf", &dest.x);
    printf("　　　　y座標: "); scanf("%lf", &dest.y);

    printf("目的地までの距離は%.2fです。\n",
        distance_of(crnt, dest));

    return 0;
}