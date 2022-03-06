#include <stdio.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void swap(Student *s1, Student *s2)
{
    Student *temp = s1;
    s1 = s2;
    s2 = temp;
}

void print_student(Student *s[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%4.1lf(%s)\n", s[i]->height, s[i]->name);
    }
}

void student_sort(Student *s[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j > i; j--) {
            if (s[j - 1]->height > s[j]->height) {
                swap(s[j - 1], s[j]);
            }
        }
    }
}

int main(void)
{
    FILE *fp;
    int ninzu = 0;
    char name[100];
    double height, weight;
    Student **students;
    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        Student s;
        while  (fscanf(fp, "%s%lf%lf", s.name, &s.height, &s.weight) == 3) {
            *(students[ninzu]) = s;
            ninzu++;
        }
        student_sort(students, ninzu);
        print_student(students, ninzu);
    }

    return 0;
}


