#include <stdio.h>

struct xyz {
  int x;
  long y;
  double z;
};

struct xyz scan_xyz()
{
  struct xyz result;
  printf("x: "); scanf("%d", &result.x); 
  printf("y: "); scanf("%ld", &result.y);
  printf("z: "); scanf("%lf", &result.z);

  return result;
}

int main(void)
{
  struct xyz someone = scan_xyz();

  printf("x: %d\n", someone.x);
  printf("y: %ld\n", someone.y);
  printf("z: %lf\n", someone.z);

  return 0;
}

