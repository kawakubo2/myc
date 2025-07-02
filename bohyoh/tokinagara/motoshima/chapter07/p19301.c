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

unsigned rev_of(unsigned x)
{
  return ~x;
}

unsigned all0(void)
{
  return 0U;
}

unsigned all1(void)
{
  return ~0U;
}

void setLSB(unsigned *x)
{
  *x = *x | 1U;
}

void resetLSB(unsigned *x)
{
  *x = *x & ~1U;
}

void invLSB(unsigned *x)
{
  *x = *x ^ 1U;
}

int LSBof(unsigned *x)
{
  return (int)(*x & 1U);
}

int Bitof(unsigned *x, int n)
{
  unsigned tmp = *x >> n;
  return LSBof(&tmp);
}

int main(void)
{
  unsigned n = 12345678;
  printf("n             = ");
  print_bits(n);
  printf("rev_of(n)     = ");
  print_bits(rev_of(n));
  printf("all0()        = ");
  print_bits(all0());
  printf("all1()        = ");
  print_bits(all1());
  printf("n             = ");
  print_bits(n);
  printf("setLSB(&n)    = ");
  unsigned m = n;
  setLSB(&m);
  print_bits(m);
  printf("resetLSB(&n)  = ");
  m = n;
  resetLSB(&m);
  print_bits(m);
  printf("invLSB(&n)    = ");
  m = n;
  invLSB(&m);
  print_bits(m);

  printf("LSBof(&n)     = %d\n", LSBof(&n));
  printf("Bitof(&n, 3)  = %d\n", Bitof(&n, 3));
  printf("Bitof(&n, 3)  = %d\n", Bitof(&n, 4));


  return 0;
}

