#include <stdio.h>

#define NAME_LEN    64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(void)
{
    struct student takao = { "Takao", 173, 86.2 };

    printf("氏　名 = %s\n", takao.name);
    printf("身　長 = %d\n", takao.height);
    printf("体　重 = %.1f\n", takao.weight);
    printf("奨学金 = %ld\n", takao.schols);

    return 0;
}

