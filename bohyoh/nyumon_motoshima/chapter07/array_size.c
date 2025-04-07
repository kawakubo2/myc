#include <stdio.h>

int main(void)
{
  int v[][3] = {
    { 10, 11, 12 },
    { 20, 21, 22 },
    { 30, 31, 32 },
    { 40, 41, 42 }
  };

  printf("intの2次元配列のサイズ: %zu\n", sizeof(v));
  printf("intの2次元配列に%zu個の1次元配列が存在する。\n", sizeof(v) / sizeof(v[0]));
  printf("intの1次元配列に%zu個の要素が存在する。     \n", sizeof(v[0]) / sizeof(v[0][0]));

  return 0;
}

