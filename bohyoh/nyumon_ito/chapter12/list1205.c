#include <stdio.h>

#define NAME_LEN 64

typedef struct student {
    char name[NAME_LEN];
    int height;
    double weight;
    long schols;
} Student;

void hiroko(Student *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80)  std->weight = 80;
}

int main(void)
{
    Student sanaka = {"Sanaka", 175, 62.5, 73000};
    Student suzuki = sanaka;
    hiroko(&sanaka);

    printf("氏　名 = %s\n", sanaka.name);
    printf("身　長 = %d\n", sanaka.height);
    printf("体　重 = %.1f\n", sanaka.weight);
    printf("奨学金 = %ld\n", sanaka.schols);

    printf("氏　名 = %s\n", suzuki.name);
    printf("身　長 = %d\n", suzuki.height);
    printf("体　重 = %.1f\n", suzuki.weight);
    printf("奨学金 = %ld\n", suzuki.schols);

    return 0;
}