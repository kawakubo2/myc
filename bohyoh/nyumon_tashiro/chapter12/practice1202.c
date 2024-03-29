#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

void hiroko(struct student *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80) std->weight = 80;
}

int main(void)
{
    char name[NAME_LEN];
    struct student sanaka;
    printf("名前: ");
    fscanf(stdin, "%s", name);
    strcpy(sanaka.name, name);
    printf("身長: ");
    fscanf(stdin, "%d", &sanaka.height);
    printf("体重: ");
    fscanf(stdin, "%f", &sanaka.weight);
    printf("奨学金: ");
    fscanf(stdin, "%ld", &sanaka.schols);

    hiroko(&sanaka);

    printf("名前 = %s\n", sanaka.name);
    printf("身長 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奨学金 = %ld\n", sanaka.schols);

    return 0;
}