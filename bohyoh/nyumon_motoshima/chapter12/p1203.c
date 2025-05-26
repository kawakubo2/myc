#include <stdio.h>

#define NAME_LEN 64

typedef struct student {
  char   name[NAME_LEN];
  int    height;
  double weight;
} Student;

Student scan_Student()
{
  Student s;
  printf("氏名: "); scanf("%s", s.name);
  printf("身長: "); scanf("%d", &s.height);
  printf("体重: "); scanf("%lf", &s.weight);
  return s;
}

int main(void)
{
  Student s = scan_Student();

  printf("氏名=%s\n", s.name);
  printf("身長=%d\n", s.height);
  printf("体重=%.1f\n", s.weight);

  return 0;
}

