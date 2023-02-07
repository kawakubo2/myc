#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void swap(Student *s1, Student *s2)
{
    Student tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}


void sort_students(Student *students, int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j > i; j--) {
            if (students[j - 1].height > students[j].height) {
                swap(&students[j - 1], &students[j]);
            }
        }
    }
}

void print_students(Student *students, int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("名前: %s 身長: %.1f 体重: %.1f\n", 
            students[i].name, students[i].height, students[i].weight);
    }
}

int main(void)
{
    int i = 0;
    FILE *fp;
    Student students[100];
    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("ファイルがオープンできません。");
    } else {
        while (fscanf(fp, "%s%lf%lf", students[i].name, &students[i].height, &students[i].weight) == 3) {
            i++;
        }
    }
    printf("---------< sort前 >---------\n");
    print_students(students, i);
    sort_students(students, i);
    printf("---------< sort後 >---------\n");
    print_students(students, i);
}