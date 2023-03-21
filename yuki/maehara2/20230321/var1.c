#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[64] = "山田太郎";
    printf("私の名前は%sです。\n", name);
    char name2[64] = "長曾我部源次郎";
    strcpy(name, name2);
    printf("私の名前は%sです。\n", name);
    printf("私の名前は%sです。\n", name2);
}