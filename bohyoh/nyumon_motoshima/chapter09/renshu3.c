#include <stdio.h>

void del_nodigit(char s[])
{
  int i = 0;
  int j = 0;
  while(s[i]) {
    if (s[i] >= '0' && s[i] <= '9') {
      s[j] = s[i];
      j++;
    }
    i++;
  }
  s[j] = '\0';
}

int main(void)
{
  char str[128];
  printf("文字列: "); scanf("%s", str);

  del_nodigit(str);
  printf("数字文字以外除去後: %s\n", str);

  return 0;
}

