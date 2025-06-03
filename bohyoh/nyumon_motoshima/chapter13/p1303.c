#include <stdio.h>

#define NUMBER 6

typedef struct {
  char name[100];
  double height;
  double weight;
} Student;

int scan_Students(FILE *f, Student students[], int n)
{
  for (int i = 0; i < n; i++) {
    Student s;
    if (fscanf(f, "%s%lf%lf", 
        students[i].name, &students[i].height, &students[i].weight) == 3) {
      
    } else {
      fclose(f);
      return 1;
    }
  }
  fclose(f);
  return 0;
}

void sort_by_height(Student students[], int n)
{
  for (int i = 0; i < NUMBER - 1; i++) {
    for (int j = NUMBER - 1; j > i; j--) {
      if (students[j - 1].height > students[j].height) {
        Student tmp = students[j];
        students[j] = students[j - 1];
        students[j - 1] = tmp;
      }
    }
  }
}

void print_Students(Student students[], int n)
{
  for (int i = 0; i < NUMBER; i++) {
    printf("%-10s%5.1f%5.1f\n", 
      students[i].name,
      students[i].height,
      students[i].weight
    );
  }
}

int main(void)
{
  FILE *f;
  f = fopen("hw.txt", "r");
  if (f == NULL) {
    puts("ファイルがオープンできませんでした。");
    return 1;
  }

  Student students[NUMBER];
  int result = scan_Students(f, students, NUMBER);
  if (result != 0) {
    puts("データの読み取りに失敗しました。");
    return 2;
  }
  sort_by_height(students, NUMBER);

  print_Students(students, NUMBER);

  return 0;
}

