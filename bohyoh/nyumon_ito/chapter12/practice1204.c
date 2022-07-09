#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    double weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

void sort_by_name(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (strcmp(a[j - 1].name, a[j].name) > 0) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void)
{
    int i, sw;

    Student std[NUMBER];

    puts("5名分の生徒情報を入力してください");
    for (i = 0; i < NUMBER; i++) {
        scanf("%s %d %lf %ld", 
            std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
    }
    for (i = 0; i < NUMBER; i++) {
        printf("%-8s %6d%6.1f%7ld\n",
            std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    printf("ソートの方法を選択してください\n");
    printf("1.身長順 2.名前順: ");
    scanf("%d", &sw);
    if (sw == 1) {
        sort_by_height(std, NUMBER);
    } else if (sw == 2) {
        sort_by_name(std, NUMBER);
    } else {
        puts("1または2を選択してください。");
        return 1;
    }

    puts("\n身長順にソートしました。");
    for (i = 0; i < NUMBER; i++) {
        printf("%-8s %6d%6.1f%7ld\n",
            std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    return 0;
}