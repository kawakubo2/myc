#include <stdio.h>

#define NAME_LEN    64

typedef struct student {
    char name[NAME_LEN];
    int  height;
    float weight;
    int score[5];
    long schols;
} Student;

int main(void)
{
    int i;
    Student sanaka = { "Sanaka", 175, 90.5, { 82, 67, 58, 80, 77 }, 73000 };
    Student temp = sanaka;

    printf("氏　名 = %s\n", sanaka.name);
    printf("身　長 = %d\n", sanaka.height);
    printf("体　重 = %.1f\n", sanaka.weight);
    printf("成　績 = { ");
    for (i = 0; i < 5; i++) {
        printf("%d, ", sanaka.score[i]);
    }
    printf("}\n");

    printf("奨学金 = %ld\n", sanaka.schols);

    printf("氏　名 = %s\n", temp.name);
    printf("身　長 = %d\n", temp.height);
    printf("体　重 = %.1f\n", temp.weight);
    printf("成　績 = { ");
    for (i = 0; i < 5; i++) {
        printf("%d, ", temp.score[i]);
    }
    printf("}\n");
    printf("奨学金 = %ld\n", temp.schols);

    return 0;
}

