#include <stdio.h>

int pow2(int n)
{
  int result = 1;
  for (int i = 0; i < n; i++) {
    result *= 2;
  }
  return result;
}
int main(void)
{
  int x = 100;

  int a1 = x * pow2(3);
  int a2 = x << 3;

  printf("%dに2の3乗を乗算した結果     : %d\n", x, a1);
  printf("%dを左に3ビットシフトした結果: %d\n", x, a2); 

  puts("-----------------------------------");

  int a3 = x / pow2(3);
  int a4 = x >> 3;

  printf("%dに2の3乗を除算した結果  : %d\n", x, a3);
  printf("%dを右ビットシフトした結果: %d\n", x, a4); 

  return 0;
}

