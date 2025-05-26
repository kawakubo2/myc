#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
  char   name[NAME_LEN];
  int    height;
  double weight;
};

int main(void)
{
  struct student sanaka;
  strcpy(sanaka.name, "Sanaka");
  sanaka.height = 175;
  sanaka.weight = 62.5;

  printf("氏名=%s\n", sanaka.name);
  printf("身長=%d\n", sanaka.height);
  printf("体重=%.1f\n", sanaka.weight);

  return 0;
}

