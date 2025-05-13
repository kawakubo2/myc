#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char str[128];
  printf("文字列: "); scanf("%s", str);

  int n = atoi(str);
  long int ln = atol(str);
  long long lln = atoll(str);

  printf("n:   %d\n", n);
  printf("ln:  %ld\n", ln);
  printf("lln: %lld\n", lln);

  printf("nのサイズ: %lu\n", sizeof(n));
  printf("lnのサイズ: %lu\n", sizeof(ln));
  printf("llnのサイズ: %lu\n", sizeof(lln));

  return 0;
}

