#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void print_students(Student students[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        printf("%-10s: %4.1lfcm\n", students[i].name, students[i].height);
    }
}

void students_sort(Student students[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = size - 1; j > i; j--) {
            if (students[j - 1].height > students[j].height) {
                Student temp = students[j - 1];
                students[j - 1] = students[j];
                students[j] = temp;
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
    Student students[100];
    while (1) {
        Student s;
        if ((fscanf(fp, "%s%lf%lf", s.name, &s.height, &s.weight)) != 3) {
            break;
        }
        students[ninzu] = s;
        ninzu++;
    }

    puts("---< ソート前 >---");
    print_students(students, ninzu);

    students_sort(students, ninzu); 

    puts("---< ソート後 >---");
    print_students(students, ninzu);

    return 0;
}

