#include <stdio.h>

int main(void)
{
  char lang1[] = "Python";
  char lang2[] = "Java";
  char lang3[] = "Go";
  char lang4[] = "C#";
  char lang5[] = "JavaScript";
  char lang6[] = "TypeScript";

  printf("%-8s\n", lang1);
  printf("%-8s\n", lang2);
  printf("%-8s\n", lang3);
  printf("%-8s\n", lang4);
  printf("%-8s\n", lang5);
  printf("%-8s\n", lang6);

  puts("--- 文字列の配列 ---");
  char langs[][11] = {
    "Python",
    "Java",
    "Go",
    "C#",
    "JavaScript",
    "TypeScript"
  };

  for (int i = 0; i < 6; i++) {
    printf("langs[%d] = \"%s\"\n", i, langs[i]);
  }

  return 0;
}

