#include <stdio.h>

double mysqrt(double x)
{
  double EPSILON = 0.0000000000001;
  double hi = x;
  double lo = 0;
  while (1) {
    double mid = (hi + lo) / 2;
    double sqr = mid * mid;
    if (sqr > x) {
      hi = mid;
    } else if (sqr < x) {
      lo = mid;
    }
    double diff = sqr > x ? sqr - x : x - sqr;
    if (diff < EPSILON) {
      return mid;
    }
  }
  return -1;
}

int main(void)
{
  double x;
  printf("浮動小数点: ");
  scanf("%lf", &x);

  double a = mysqrt(x);

  printf("%lfの平方根は%.12f。\n", x, a);


  return 0;
}

