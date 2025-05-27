#include <stdio.h>

#define NAME_LEN 64
#define NUMBER 5

typedef struct student {
  char   name[NAME_LEN];
  int    height;
  double weight;
} Student;

void swap_Student(Student *x, Student *y) 
{
  Student temp = *x;
  *x = *y;
  *y = temp;
}

void sort_by_height(Student a[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (a[j - 1].height > a[j].height) {
        swap_Student(&a[j - 1], &a[j]);
      }
    }
  }
}

void print_Student(const Student s[], int n)
{
  for (int i = 0; i < n; i++) {
    printf("%-8s %5d%6.1f\n", s[i].name, s[i].height, s[i].weight);
  }
}

int main(void)
{
  Student std[] = {
    {"Sato",   178, 61.2},
    {"Sanaka", 175, 62.5},
    {"Takao",  173, 86.2},
    {"Mike",   165, 72.3},
    {"Masaki", 179, 77.5}
  };

    puts("身長でソートする前");
    print_Student(std, NUMBER);

    sort_by_height(std, NUMBER);

    puts("身長でソートした後");
    print_Student(std, NUMBER);

  return 0;
}

