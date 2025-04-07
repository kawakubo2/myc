#include <stdio.h>

int fx = 0; // ファイル有効範囲 + 静的記憶域期間
void func(void)
{
  static int sx = 0; // ブロック有効範囲 + 静的記憶域期間
  int        ax = 0; // ブロック有効範囲 + 自動記憶域期間

  printf("%3d%3d%3d\n", ax++, sx++, fx++);
}
int main(void)
{

  int i;
  puts(" ax sx fx");
  puts("---------");
  for (i = 0; i < 10; i++) {
    func();
  }
  puts("---------");

  return 0;
}

