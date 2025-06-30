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

void print_scaler()
{
  for (int i = 0; i < int_bits(); i++) {
    printf("%d", i % 10);
  }
  putchar('\n');
}

unsigned lrotate(unsigned x, int n);

unsigned rrotate(unsigned x, int n)
{
  if (n < 0) {
    return lrotate(x, -n);
  }
  n %= int_bits();
  return x >> n | x << int_bits() - n;
}

unsigned lrotate(unsigned x, int n)
{
  if (n < 0) {
    return rrotate(x, -n);
  }
  n %= int_bits();
  return x << n | x >> int_bits() - n;
}

unsigned make_mask(int pos)
{
  return lrotate(1U, pos);
}

unsigned set(unsigned x, int pos)
{
  return x | make_mask(pos);
}

unsigned reset(unsigned x, int pos)
{
  return x & ~make_mask(pos);
}

unsigned inverse(unsigned x, int pos)
{
  return x ^ make_mask(pos);
}

int main(void)
{
  unsigned x;
  int pos;

  printf("符号なし整数: ");
  scanf("%u", &x);
  printf("ビット操作する位置: ");
  scanf("%d", &pos);

  puts("--- set ---");
  unsigned set_int = set(x, pos);
  print_scaler();
  print_bits(set_int);
  puts("--- reset ---");
  unsigned reset_int = reset(x, pos);
  print_scaler();
  print_bits(reset_int);
  puts("--- inverse ---");
  unsigned inverse_int = inverse(x, pos);
  print_scaler();
  print_bits(inverse_int);

  return 0;
}