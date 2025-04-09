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

unsigned power(unsigned n, unsigned p)
{
  unsigned result = 1;
  for (int i = 0; i < p; i++) {
    result *= n;
  }
  return result;
}

// unsigned rrotate(unsigned x, int n)
// {
//   int r = n % int_bits();
//   for (int i = 0; i < r; i++) {
//     unsigned lowest = x & 1U;
//     x >>= 1;
//     lowest <<= int_bits() - 1;
//     x |= lowest;
//   }
//   return x;
// }

unsigned rrotate(unsigned x, int n)
{
  int r = n % int_bits();
  return x >> r | x << int_bits() - r;
}

unsigned lrotate(unsigned x, int n)
{
  int r = n % int_bits();
  return x << r | x >> int_bits() - r;
}

int main(void)
{
  unsigned x, n;
 
  printf("非負の整数: "); scanf("%u", &x);
  printf("シフトするビット数: "); scanf("%u", &n);

  putchar('\n');
  printf("整数    = "); print_bits(x);      putchar('\n');
  printf("右%dビット回転\n", n % int_bits());
  unsigned r = rrotate(x, n);
  printf("回転後  = "); print_bits(r);      putchar('\n');

  printf("左%dビット回転\n", n % int_bits());
  unsigned l = lrotate(x, n);
  printf("回転後  = "); print_bits(l);      putchar('\n');

  return 0;
}

