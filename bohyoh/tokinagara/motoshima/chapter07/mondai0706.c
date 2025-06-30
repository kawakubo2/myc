#include <stdio.h>

int count_bits(unsigned x)
{
  int count = 0;
  unsigned last_bit = 1U;
  while(x > 0) {
    if (x & last_bit == 1) count++;
    x >>= 1;
  }
  return count;
}

int int_bits(void)
{
  return count_bits(~0U);
}

int print_bits(unsigned x)
{
  unsigned mask = 1U;
  for (int i = int_bits() - 1; i >= 0; i--) {
    if (x >> i & mask) putchar('1');
    else putchar('0');
  }
  putchar('\n');
}

int main(void)
{
  // printf("int%d\n", int_bits());
  unsigned x;

  for (int i = 0; i < int_bits(); i++) {
    printf("%d", i % 10);
  }
  putchar('\n');

  print_bits(~0U);
  printf("%u\n", ~0U);  

  printf("符号なし整数: ");
  scanf("%u", &x);

  print_bits(x);

  return 0;
}

