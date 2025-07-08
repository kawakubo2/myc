#include <stdio.h>

#define NUMBER 10

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}


void bsort1(int a[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (a[j - 1] > a[j]) swap(&a[j - 1], &a[j]);
    }
  }
}

void bsort2(int a[], int n)
{
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j < i; j++) {
      if (a[j] > a[j + 1]) {
        swap(&a[j], &a[j + 1]);
      }
    }
  }
}

void print_array(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}

int validate(int a[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      return 0;
    }
  }
  return 1;
}

int main(void)
{
  // bsort1用のデータ
  int a11[] = {51, 72, 23, 104, 35, 16, 87, 98, 49, 60};
  int a12[] = {16, 72, 23, 104, 35, 51, 87, 98, 49, 60}; // 最小値が一番左にあるパターン
  int a13[] = {16, 72, 23, 60, 35, 51, 87, 98, 49, 104}; // 最大値が一番右にあるパターン
  int a14[] = {60, 72, 23, 104, 35, 51, 87, 98, 49, 16}; // 最小値が一番右にあるパターン
  int a15[] = {104, 72, 23, 60, 35, 51, 87, 98, 49, 16}; // 最大値が一番左にあるパターン
  // bsort2用のデータ
  int a21[] = {51, 72, 23, 104, 35, 16, 87, 98, 49, 60};
  int a22[] = {16, 72, 23, 104, 35, 51, 87, 98, 49, 60}; // 最小値が一番左にあるパターン
  int a23[] = {16, 72, 23, 60, 35, 51, 87, 98, 49, 104}; // 最大値が一番右にあるパターン
  int a24[] = {60, 72, 23, 104, 35, 51, 87, 98, 49, 16}; // 最小値が一番右にあるパターン
  int a25[] = {104, 72, 23, 60, 35, 51, 87, 98, 49, 16}; // 最大値が一番左にあるパターン

  puts("=== bsort1 順不同パターン ===");
  puts("--- bsort1前 ---");
  print_array(a11, NUMBER);
  bsort1(a11, NUMBER);
  puts("--- bsort1後---");
  printf("判定: %c\n", validate(a11, NUMBER) ? 'o': 'x');
  print_array(a11, NUMBER);

  puts("=== bsort1 最小値が一番左にあるパターン ===");
  puts("--- bsort1前 ---");
  print_array(a12, NUMBER);
  bsort1(a12, NUMBER);
  puts("--- bsort1後---");
  printf("判定: %c\n", validate(a12, NUMBER) ? 'o': 'x');
  print_array(a12, NUMBER);

  puts("=== bsort1 最大値が一番右にあるパターン ===");
  puts("--- bsort1前 ---");
  print_array(a13, NUMBER);
  bsort1(a13, NUMBER);
  puts("--- bsort1後---");
  printf("判定: %c\n", validate(a13, NUMBER) ? 'o': 'x');
  print_array(a13, NUMBER);

  puts("=== bsort1 最小値が一番右にあるパターン ===");
  puts("--- bsort1前 ---");
  print_array(a14, NUMBER);
  bsort1(a14, NUMBER);
  puts("--- bsort1後---");
  printf("判定: %c\n", validate(a14, NUMBER) ? 'o': 'x');
  print_array(a14, NUMBER);

  puts("=== bsort1 最大値が一番左にあるパターン ===");
  puts("--- bsort1前 ---");
  print_array(a15, NUMBER);
  bsort1(a15, NUMBER);
  puts("--- bsort1後---");
  print_array(a15, NUMBER);

  puts("=== bsort2 順不同パターン ===");
  puts("--- bsort2前 ---");
  print_array(a21, NUMBER);
  bsort2(a21, NUMBER);
  puts("--- bsort2後---");
  print_array(a21, NUMBER);

  puts("=== bsort2 最小値が一番左にあるパターン ===");
  puts("--- bsort2前 ---");
  print_array(a22, NUMBER);
  bsort2(a22, NUMBER);
  puts("--- bsort2後---");
  print_array(a22, NUMBER);

  puts("=== bsort2 最大値が一番右にあるパターン ===");
  puts("--- bsort2前 ---");
  print_array(a23, NUMBER);
  bsort2(a23, NUMBER);
  puts("--- bsort2後---");
  print_array(a23, NUMBER);

  puts("=== bsort2 最小値が一番右にあるパターン ===");
  puts("--- bsort2前 ---");
  print_array(a24, NUMBER);
  bsort2(a24, NUMBER);
  puts("--- bsort2後---");
  print_array(a24, NUMBER);

  puts("=== bsort2 最大値が一番左にあるパターン ===");
  puts("--- bsort2前 ---");
  print_array(a25, NUMBER);
  bsort2(a25, NUMBER);
  puts("--- bsort2後---");
  print_array(a25, NUMBER);

  return 0;
}

