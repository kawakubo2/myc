#include <stdio.h>
#include <string.h>

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

void sort_by_name(Student a[], int n)
{
  for (int i = 0; i < n - 1; i++) {
    for (int j = n - 1; j > i; j--) {
      if (strcmp(a[j - 1].name, a[j].name) > 0) {
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

Student scan_Student()
{
  Student s;
  printf("名前: "); scanf("%s", s.name);
  printf("身長: "); scanf("%d", &s.height);
  printf("体重: "); scanf("%lf", &s.weight);
  return s;
}

int main(void)
{
  Student std[NUMBER];

  puts("5名分のStudentを入力してください");
  for (int i = 0; i < NUMBER; i++) {
    std[i] = scan_Student();
  }

  puts("ソート前");
  print_Student(std, NUMBER);

  int sw;
  while (1) {
    printf("1.身長でソート 2.名前でソート: ");
    scanf("%d", &sw);
    if (sw == 1) {
      sort_by_height(std, NUMBER);
      break;
    } else if(sw == 2) {
      sort_by_name(std, NUMBER);
      break;
    } else {
      puts("1または2を選択してください。");
    }
  }

  puts("ソート");
  print_Student(std, NUMBER);

  return 0;
}

