#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER      6
#define NAME_LEN    64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

double calc_bmi(Student x)
{
    return x.weight / ((x.height / 100) * (x.height / 100)) ;
}

int height_order(Student a, Student b)
{
    return a.height > b.height;
}
int name_order(Student a, Student b)
{
    return strcmp(a.name, b.name) > 0;
}
int bmi_order(Student a, Student b)
{
    return calc_bmi(a) > calc_bmi(b);
}
int height_and_name_order(Student a, Student b)
{
    if (a.height > b.height) return 1;
    if (a.height == b.height && strcmp(a.name, b.name) > 0) return 1;
    return 0;
}


int higher_sort(Student a[], int n, int (*comparer)(Student, Student))
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (comparer(a[j - 1], a[j])) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
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
            if (strcmp(a[j - 1].name, a[j].name)) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

void sort_by_bmi(Student a[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (calc_bmi(a[j - 1]) >  calc_bmi(a[j])) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

void print_Students(Student a[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%-8s %6d%6.1f%7ld\n", a[i].name, a[i].height, a[i].weight, a[i].schols);
    }
}

int main(void)
{
    int i, sw;
    Student std[] = {
        { "Sato", 178, 61.2, 80000 },
        { "Sanaka", 175, 62.5, 73000 },
        { "Takao", 173, 86.2, 0 },
        { "Mike", 165, 72.3, 70000 },
        { "Endo", 178, 80.5, 60000 },
        { "Masaki", 179, 77.5, 70000 },
    };

    puts("---< sort前 >---");
    print_Students(std, NUMBER);

    printf("1.身長順 2.名前 3.BMI 4.身長 > 名前順 9.終了 : ");
    scanf("%d", &sw);

    if (sw == 1) {
        higher_sort(std, NUMBER, height_order);
    } else if (sw == 2) {
        higher_sort(std, NUMBER, name_order);
    } else if (sw == 3) {
        higher_sort(std, NUMBER, bmi_order);
    } else if (sw == 4) {
        higher_sort(std, NUMBER, height_and_name_order);
    } else if (sw == 9) {
        exit(0);
    }


    puts("---< sort後 >---");
    print_Students(std, NUMBER);

    return 0;
}

