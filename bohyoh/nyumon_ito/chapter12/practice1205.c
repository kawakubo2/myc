#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point pt;
    double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
    printf("現在位置: (%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("残り燃料: %.2fリットル\n", c.fuel);
}

int move_absolute(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);
    if (d > c->fuel) {
        return 0;
    }
    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int move_relative(Car *c, Point relative)
{
    Point newPos = { c->pt.x + relative.x, c->pt.y + relative.y };
    double d = distance_of(c->pt, newPos);
    if (d > c->fuel) {
        return 0;
    }
    c->pt = newPos;
    c->fuel -= d;
    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};
    int s;
    printf("移動方法: 1.絶対座標 2.相対座標: ");
    scanf("%d", &s);
    if (s != 1 && s != 2) {
        return -1;
    }
    while (1) {
        int select;
        Point dest;
        put_info(mycar);
        printf("移動しますか　yes---1 no---2 : ");
        scanf("%d", &select);
        if (select != 1) break;
        if (s == 1) {
            printf("目的地のX座標: "); scanf("%lf", &dest.x);
            printf("       Y座標: "); scanf("%lf", &dest.y);
            if (!move_absolute(&mycar, dest)) {
                puts("\a燃料不足で移動できません。");
            }
        } else if (s == 2) {
            printf("X座標の移動距離: "); scanf("%lf", &dest.x);
            printf("Y座標の移動距離: "); scanf("%lf", &dest.y);
            if (!move_relative(&mycar, dest)) {
                puts("\a燃料不足で移動できません。");
            }
        }
    }
    return 0;
}