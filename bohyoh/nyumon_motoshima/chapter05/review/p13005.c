#include <stdio.h>

#define NUMBER 10

int copy_positive_array(const int a[], int b[], int height)
{
  int count = 0;
  for (int i = 0; i < height; i++) {
    if (a[i] > 0) {
      b[count++] = a[i];
    }
  }
  return count;
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
  int a[NUMBER] = { 1, 2, -3, 4, -2, 0, -5, 5, 8, 1};
  int b[NUMBER];
  int positive_count;
  puts("--- a ---");
  print_array(a, NUMBER);
  puts("aの要素をbにコピー");
  puts("--- b ---");
  positive_count = copy_positive_array(a, b, NUMBER);

  print_array(b, positive_count);
  
  return 0;
}

