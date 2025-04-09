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

void print_nbits(unsigned x, unsigned n)
{
  int i = int_bits();
  i = (n < i) ? n - 1: i - 1;
  for (; i >= 0; i--) {
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

unsigned make_mask(int from_pos, int n)
{
  unsigned result = 0U;
  for (int i = 0; i < n; i++) {
    result = result | 1U << (from_pos - i);
  }
  return result;
}

unsigned set(unsigned x, int pos, int n)
{
  unsigned mask = make_mask(pos, n);
  return x | mask;
}

unsigned reset(unsigned x, int pos, int n)
{
  unsigned mask = ~(make_mask(pos, n));
  return x & mask;
}

unsigned inverse(unsigned x, int pos, int n)
{
  unsigned mask = make_mask(pos, n);
  return x ^ mask;
}

int main(void)
{
  for (unsigned i = 0; i <= 65535U; i++) {
    printf("%5u ", i);
    print_nbits(i, 16);
    printf(" %06o %04X\n", i, i);
  }
  return 0;
}

