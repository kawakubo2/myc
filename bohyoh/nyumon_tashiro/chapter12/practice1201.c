#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(void)
{
    struct student takao = {"Takao", 173, 86.2};


    printf("氏　名のアドレス = %p\n", &takao.name);
    printf("身　長 のアドレス= %p\n", &takao.height);
    printf("体　重のアドレス = %p\n", &takao.weight);
    printf("奨学金のアドレス = %p\n", &takao.schols);

    return 0;
}