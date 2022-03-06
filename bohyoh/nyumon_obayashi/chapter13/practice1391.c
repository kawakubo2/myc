#include <stdio.h>

typedef struct {
    char name[60];
    double height;
    double weight;
} Student;

void swap_student(Student *s1, Student *s2) {
    Student tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int height_comparer(Student a, Student b) {
    return a.height > b.height;
}

void sort_students(Student students[], int n, int (*filter)(Student, Student))
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (filter(students[j - 1], students[j]) > 0) {
                swap_student(&students[j - 1], &students[j]);
            }
        }
    }
}
void print_students(Student students[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%-10s %5.1f %5.1f\n", students[i].name, students[i].height, students[i].weight);
    }
}

int main(void)
{
    FILE *fp;
    Student students[100];
    int count = 0;

    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("\aファイルをオープンできません。\n");
    } else {
        while(fscanf(fp, "%s%lf%lf", students[count].name, &(students[count].height), &(students[count].weight)) == 3) {
            count++;
        }
        fclose(fp);
        puts("---< 身長順にソート前 >---");
        print_students(students, count);

        sort_students(students, count, height_comparer);

        puts("---< 身長順にソート後 >---");
        print_students(students, count);
    }
}