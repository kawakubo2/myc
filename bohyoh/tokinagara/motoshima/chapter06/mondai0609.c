#include <stdio.h>

#define NUMBER 7

void pass_exam_students(int score[], int n)
{
  puts("------< 合格者 >------");
  for (int i = 0; i < n; i++) {
    if (score[i] >= 60) {
      printf("%d: %d\n", i + 1, score[i]);
    }
  }
}

int main(void)
{
  int scores[NUMBER];
  for (int i = 0; i < NUMBER; i++) {
    printf("%d: ", i + 1); scanf("%d", &scores[i]);
  }

  pass_exam_students(scores, NUMBER);

  return 0;
}

