#include <stdio.h>

#define NAME_LEN 64

struct student {
  char   name[NAME_LEN];
  int    height;
  double weight;
};

void set_stdweight(struct student *s)
{
  if ((*s).weight <= 0) {
    (*s).weight = ((*s).height - 100) * 0.9;
  }
}

int main(void)
{
  struct student takao = {"Takao", 173};

  set_stdweight(&takao);

  printf("氏名=%s\n", takao.name);
  printf("身長=%d\n", takao.height);
  printf("体重=%.1f\n", takao.weight);

  return 0;
}

