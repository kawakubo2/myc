#include <stdio.h>

void put_count()
{
  static int count;
  printf("put_count: %d回目\n", ++count);
}

int main(void)
{
  for (int i = 0; i < 3; i++) {
    put_count();
  }
  return 0;
}

