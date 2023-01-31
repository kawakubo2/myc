#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))

typedef struct  {
	double x;
	double y;
} Point;


typedef struct  {
	Point  pt;
	double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
	return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}


void put_info(Car c)
{
	printf("現在位置:(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("残り燃料: %.2f\n", c.fuel);
}

int move(Car *c, Point dest)
{
	double d = distance_of(c->pt, dest);
	if (d > c->fuel)
		return 0;
	c->pt = dest;
	c->fuel -= d;
	return 1;
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	int select_method;
	printf("移動方法 1.絶対座標 2.相対座標: ");
	scanf("%d", &select_method);

	while (1) {
		int select;
		Point dest;
		put_info(mycar);
		printf("移動しますか[yes...1/no...0]: ");
		scanf("%d", &select);
		if (select != 1) break;

		if (select_method == 1) {
			printf("目的地のX座標: ");  scanf("%lf", &dest.x);
			printf("　　　　Y座標: ");  scanf("%lf", &dest.y);

			if (!move(&mycar, dest))
				puts("\a燃料不足で移動できません。");
		} else if (select_method == 2) {
			double x_diff, y_diff;
			printf("X座標方向: "); scanf("%lf", &x_diff);
			printf("Y座標方向: "); scanf("%lf", &y_diff);
			dest.x = mycar.pt.x + x_diff;
			dest.y = mycar.pt.y + y_diff;
			if (!move(&mycar, dest))
				puts("\a燃料不足で移動できません。");
		} else {
			printf("1または2を選択してください。\n");
		}
	}

	return 0;
}
