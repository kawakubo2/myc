#include <stdio.h>

void reverse_array(int a[], int n)
{
  for (int i = 0; i < n / 2; i++) {
    int temp = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = temp;
  }
}

void print_array(int a[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  putchar('\n');
}
int main(void)
{
  int nums[] = {5, 11, -3, 4, 8, 7, 21};

  int n = sizeof(nums) / sizeof(nums[0]);

  puts("--- 反転前 ---");
  print_array(nums, n);
  
  reverse_array(nums, n);

  puts("--- 反転後 ---");
  print_array(nums, n);

  return 0;
}

