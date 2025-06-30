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

int main(void)
{
  // printf("int%d\n", int_bits());
  unsigned x;
  int bits;

  printf("符号なし整数: ");
  scanf("%u", &x);
  printf("回転するビット数: ");
  scanf("%d", &bits);

  puts("--- 右回転前 ---");
  print_scaler();
  print_bits(x);

  unsigned right = rrotate(x, bits);

  puts("--- 右回転後 ---");
  print_scaler();
  print_bits(right);

  puts("--- 左回転前 ---");
  print_scaler();
  print_bits(x);

  unsigned left = lrotate(x, bits);

  puts("--- 左回転後 ---");
  print_scaler();
  print_bits(left);

  return 0;
}

