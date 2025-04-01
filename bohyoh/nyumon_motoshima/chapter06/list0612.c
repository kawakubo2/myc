#include <stdio.h>


void set_zero(int v[], int n)
{
  for (int i = 0; i < n; i++) {
    v[i] = 0;
  }
}

void print_array(const int v[], int n)
{
  printf("{ ");
  for (int i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
  printf("}\n");
}

int main(void)
{
  int ary1[] = {1, 2, 3, 4, 5};
  int ary2[] = {3, 2, 1};

  printf("ary1 = "); print_array(ary1, 5);
  printf("ary2 = "); print_array(ary2, 3);

  set_zero(ary1, 5);
  set_zero(ary2, 3);

  printf("ary1 = "); print_array(ary1, 5);
  printf("ary2 = "); print_array(ary2, 3);

  return 0;
}
