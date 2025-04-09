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

unsigned make_mask(int pos)
{
  return 1U << pos;
}

unsigned set(unsigned x, int pos)
{
  unsigned mask = make_mask(pos);
  return x | mask;
}

unsigned reset(unsigned x, int pos)
{
  unsigned mask = ~(make_mask(pos));
  return x & mask;
}

unsigned inverse(unsigned x, int pos)
{
  unsigned mask = make_mask(pos);
  return x ^ mask;
}

int main(void)
{
  unsigned x, n;
 
  printf("非負の整数: "); scanf("%u", &x);
  printf("操作したい位置(最下位ビットからの位置): "); scanf("%u", &n);

  putchar('\n');
  printf("整数    = "); print_bits(x);          putchar('\n');

  unsigned set_number = set(x, n);
  printf("セット  = "); print_bits(set_number); putchar('\n');
  
  unsigned reset_number = reset(x, n);
  printf("リセット= "); print_bits(reset_number); putchar('\n');

  unsigned inverse_number = inverse(x, n);
  printf("反転=　　 "); print_bits(inverse_number); putchar('\n');

  return 0;
}

