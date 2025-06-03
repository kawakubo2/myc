#include <stdio.h>

#define NUMBER 5

typedef struct {
  char name[128];
  double height;
  double weight;
} Student;

int write_Students(int n)
{
  FILE *fp;
  if ((fp = fopen("students.txt", "w")) == NULL) {
    return 1;
  }
  for (int i = 0; i < n; i++) {
    char name[128];
    double height, weight;
    printf("名前: "); scanf("%s", name); 
    printf("身長: "); scanf("%lf", &height);
    printf("体重: "); scanf("%lf", &weight);
    fprintf(fp, "%s %.1lf %.1lf\n", name, height, weight);
  }
  fclose(fp);
  return 0;
}

int main(void)
{
  if (write_Students(NUMBER) != 0) {
    puts("ファイルのオープンに失敗しました。");
    return 1;
  }
  puts("ファイルの書き込みに成功しました。");
  return 0;
}

