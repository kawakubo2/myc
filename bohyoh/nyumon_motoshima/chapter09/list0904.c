#include <stdio.h>

int main(void)
{
  char name[48];

  printf("名前: "); scanf("%s", name);

  printf("こんにちは、%sさん！！\n", name);

  return 0;
}

