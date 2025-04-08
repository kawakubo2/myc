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

unsigned rrotate(unsinged x, int n)
{
  int r = n % int_bits();
  for (int i = 0; i < r; i++) {
    unsigned lowest = x & 1U;
    r >>= 1;
    lowest <<= int_bits() - 1;
    r |= lowest;
  }
  
}

int main(void)
{
  unsigned x, n;
 
  printf("非負の整数: "); scanf("%u", &x);
  printf("シフトするビット数: "); scanf("%u", &n);

  putchar('\n');
  printf("整数    = "); print_bits(x);      putchar('\n');
  printf("左%dビットシフト\n", n);
  printf("(%u << %u) == (%d * power(2, %u)): %d\n", x, n, x, n, x << n == x *  power(2, n));
  printf("%d == %d\n", x << n, x * power(2, n));

  printf("右%dビットシフト\n", n);
  printf("(%u >> %u) == (%d / power(2, %u)): %d\n", x, n, x, n, x >> n == x /  power(2, n));
  printf("%d == %d\n", x >> n, x / power(2, n));


  return 0;
}

