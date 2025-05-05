#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (argc != 4) {
    puts("引数は3個入力してください。");
    return -1;
  }

  double upperbase = atof(argv[1]);
  double lowerbase = atof(argv[2]);
  double height    = atof(argv[3]);

  printf("%lf\n", (upperbase + lowerbase) * height / 2);

  return 0;
}