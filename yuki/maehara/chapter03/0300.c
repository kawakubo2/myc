#include <stdio.h>

#define BUFFER_SIZE 256

int main(void);
int main(void)
{
    printf("名前を入力してください。");
    char* name[BUFFER_SIZE];
    fscanf(stdin, "%s", name);
}