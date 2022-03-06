#include <stdio.h>
#include <string.h>

#define NAME_LEN 64

typedef struct student {
    char    name[NAME_LEN];
    int     height;
    float   weight;
    long    schols;
} Student;

Student scan_student() {
    Student student;
    printf("氏 名 : ");
    scanf("%s", student.name);
    printf("身　長 : ");
    scanf("%d", &student.height);
    printf("体　重 : ");
    scanf("%f", &student.weight);
    printf("奨学金 : ");
    scanf("%ld", &student.schols);

    return student;
}

int main(void)
{
    Student sanaka;

    sanaka = scan_student();

    printf("氏　名 = %s\n", sanaka.name);
    printf("身　長 = %d\n", sanaka.height);
    printf("体　重 = %.1f\n", sanaka.weight);
    printf("奨学金 = %ld\n", sanaka.schols);

    return 0;
}

