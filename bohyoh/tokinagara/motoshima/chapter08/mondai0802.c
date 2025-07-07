#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x): (y))

int main(void)
{
  int a, b, c, d;
  printf("整数a: "); scanf("%d", &a);
  printf("整数b: "); scanf("%d", &b);
  printf("整数c: "); scanf("%d", &c);
  printf("整数d: "); scanf("%d", &d);

  int ans1 = max(max(a, b), max(c, d));
  int ans2 = max(max(max(a, b), c), d);
  int ans3 = max(a, max(b, max(c, d)));
  int ans4 = max(a, max(max(b, c), d));

  printf("最大値: %d\n", ans1);
  if (ans1 == ans2 && ans1 == ans3 && ans1 == ans4) {
    puts("すべての結果は等しい");
  } else {
    puts("いずれかの結果に誤りがある。");
  }

  

  return 0;
}

