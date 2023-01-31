#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64
typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y)
{
    Student tmp = *x;
    *x = *y;
    *y = tmp;
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

void print_Student(Student a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%-8s %6d%6.1f%7ld\n",
        a[i].name, a[i].height, a[i].weight, a[i].schols);
    }
}

int main(void)
{
    int i;
    Student std[] = {
        { "Sato",   178, 61.2, 80000 },
        { "Sanaka", 175, 62.5, 73000 },
        { "Takao",  173, 86.2, 0 },
        { "Mike",   165, 72.3, 70000 },
        { "Masaki", 179, 77.5, 70000 },
    };
    print_Student(std, NUMBER);

    sort_by_height(std, NUMBER);

    printf("\n身長順にソートしました。\n");
    print_Student(std, NUMBER);

    return 0;
}