#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct student {
    char    name[NAME_LEN];
    int     height;
    float   weight;
    long    schols;
} Student;

int main(void)
{
    Student sanaka;

    printf("氏　名: "); scanf("%s",sanaka.name);
    printf("身　長: "); scanf("%d",&sanaka.height);
    printf("体　重: "); scanf("%f",&sanaka.weight);
    printf("奨学金: "); scanf("%ld",&sanaka.schols);

    printf("氏　名 = %10s\n", sanaka.name);
    printf("身　長 = %10d\n", sanaka.height);
    printf("体　重 = %10.1f\n", sanaka.weight);
    printf("奨学金 = %10ld\n", sanaka.schols);

    return 0;
}

