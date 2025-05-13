#include <stdio.h>

int mystrcmp(const char *s1, const char *s2)
{
  while(1) {
    if (*s1 == '\0' || *s2 == '\0') break;
    if (*s1 > *s2) return *s1 - *s2;
    if (*s1 < *s2) return *s1 - *s2;
    s1++; s2++;
  }
  // 文字列の途中でナル文字が入っていた場合の対処
  if (*s1 == '\0' && *s2 == '\0') {
    return 0;
  } else if (*s1 == '\0') {
    return -(int)(*s2);
  } else {
    return (int)(*s1);
  }
}

int mystrncmp(const char *s1, const char *s2, int n)
{
  while(1) {
    if (*s1 == '\0' || *s2 == '\0') break;
    if (*s1 > *s2) return *s1 - *s2;
    if (*s1 < *s2) return *s1 - *s2;
    n--;
    if (n == 0) return 0;
    s1++; s2++;
  }
  // 文字列の途中でナル文字が入っていた場合の対処
  if (*s1 == '\0' && *s2 == '\0') {
    return 0;
  } else if (*s1 == '\0') {
    return -(int)(*s2);
  } else {
    return (int)(*s1);
  }
}

int main(void)
{
  char s1[128];
  char s2[128];
  int n;
  printf("文字列s1: "); scanf("%s", s1);
  printf("文字列s2: "); scanf("%s", s2);
  printf("何文字目まで比較しますか: "); scanf("%d", &n);

  printf("文字列s1\"%s\"と文字列s2\"%s\"は", s1, s2);
  int cp = mystrcmp(s1, s2);
  if (cp == 0) {
    printf("等しい。\n");
  } else if (cp > 0) {
    printf("s1が大きい。\n");
  } else {
    printf("s2が大きい。\n");
  }

  printf("文字列s1\"%s\"と文字列s2\"%s\"は%d番目までは", s1, s2, n);
  int cp2 = mystrncmp(s1, s2, n);
  if (cp2 == 0) {
    printf("等しい。\n");
  } else if (cp2 > 0) {
    printf("s1が大きい。\n");
  } else {
    printf("s2が大きい。\n");
  }

  return 0;
}

