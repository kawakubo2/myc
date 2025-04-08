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

unsigned sub(unsigned x, unsigned y)
{
  return x + (~y + 1);
  //         2の補数
}

int main(void)
{
  unsigned a, b;
  printf("a: "); scanf("%d", &a);
  printf("b: "); scanf("%d", &b);
  
  unsigned c = sub(a, b);
  printf("%u - %u = %u\n", a, b, c);
  // putchar('\n');
  // printf("a     = "); print_bits(a);     putchar('\n');
  // printf("b     = "); print_bits(b);     putchar('\n');
  // printf("a & b = "); print_bits(a & b); putchar('\n');
  // printf("a | b = "); print_bits(a | b); putchar('\n');
  // printf("a ^ b = "); print_bits(a ^ b); putchar('\n');
  // printf("~a    = "); print_bits(~a);    putchar('\n');
  // printf("~b    = "); print_bits(~b);    putchar('\n');

  return 0;
}

