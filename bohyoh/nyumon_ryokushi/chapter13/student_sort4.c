#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void print_students(Student **students, int size)
{
    int i = 0;
    while (size--) {
        printf("%-10s: %4.1lfcm\n", (*students)->name, (*students)->height);
        students++;
    }
}

void swap(Student *s1, Student *s2)
{
    Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

void students_sort(Student **students, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j > i; j--) {
            if (students[j - 1]->height > students[j]->height) {
                swap(students[j-1], students[j]);
            }
        }
    }
}


int main(void)
{
    int i;
    int ninzu = 0;

    FILE *fp;
    fp = fopen("hw.dat", "r");
    if (fp == NULL) {
        printf("ファイルがオープンできません。\n");
        exit(EXIT_FAILURE);
    }
    Student **students = (Student **)malloc(sizeof(Student) * 100);
    if (students == NULL) {
        printf("studentsの確保に失敗しました。\n");
        exit(EXIT_FAILURE);
    }
    Student **temp = students;

    printf("**student = %p\n", students);

    Student *s;
    while (1) {
        s = (Student *)malloc(sizeof(Student));
        if ((fscanf(fp, "%s%lf%lf", s->name, &s->height, &s->weight)) != 3) {
            break;
        }
        *students = s;
        ninzu++;
        students++;
    }

    puts("---< ソート前 >---");
    print_students(temp, ninzu);

    students_sort(temp, ninzu); 

    puts("---< ソート後 >---");
    print_students(temp, ninzu);

    /*
     * mallocで確保した配列の領域を解放する前に、
     * mallocで確保した配列の要素も開放する必要
     * があるのか不明
     */
    for (i = 0; i < ninzu; i++) {
        free(temp[i]);
    }

    free(temp);

    return 0;
}

