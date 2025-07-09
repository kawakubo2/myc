#include <stdio.h>

int gcd(int a, int b)
{
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int get_int(char *prompt)
{
  int n;
  do {
    printf("正の整数%s: ", prompt); scanf("%d", &n);
  } while (n <= 0);
  return n;
}

int main(void)
{
  puts("2つの正の整数a, bを入力してください");
  int a = get_int("a");
  int b = get_int("b");

  int c = gcd(a, b);

  printf("%dと%dの最大公約数は%dです。\n", a, b, c);

  return 0;
}

