#include <stdio.h>

void print_array(int data[], int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d ", *data++);
  }
  putchar('\n');
}  

int main(void)
{
  int data[] = { 5, 2, 11, 9 };
  print_array(data, 4);
  return 0;
}
