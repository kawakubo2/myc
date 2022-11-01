#include <stdio.h>

int main(void)
{
    char name[48];
    printf("お名前は: ");
    fscanf(stdin, "%s", name);
    // fgets(name, 48, stdin);

    printf("こんにちは、%sさん！！\n", name);

    return 0;
}