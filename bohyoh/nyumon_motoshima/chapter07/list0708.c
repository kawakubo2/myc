#include <stdio.h>

int count_bits(unsigned int x)
{
  int bits = 0;
  while(x) {
    if (x & 1U) {
      bits++;
    }
    x >>= 1;
  }
  return bits;
}

int int_bits(void) {
  return count_bits(~0U); 
}

void print_bits(unsigned int x)
{
  for (int i = int_bits() - 1; i >= 0; i--) {
    putchar(((x >> i) & 1U) ? '1': '0');
  }
}

int main(void)
{
  unsigned n;
 
  printf("非負の整数: "); scanf("%u", &n);

  putchar('\n');
  printf("もとの値 = "); print_bits(n); putchar('\n');
  printf("セット　 = "); print_bits(n | 1U); putchar('\n');
  printf("リセット = "); print_bits(n & ~1U); putchar('\n');
  printf("反転　　 = "); print_bits(n ^ 1U); putchar('\n');

  return 0;
}

