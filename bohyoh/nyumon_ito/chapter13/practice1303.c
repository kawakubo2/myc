#include <stdio.h>
#include <string.h>

#define NUMBER 100

typedef struct {
    char name[128];
    double height;
    double weight;
} Student;

void swap_Stundet(Student *a, Student *b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sort(Student s[], int ninzu)
{
    int i, j;
    for (i = 0; i < ninzu - 1; i++) {
        for (j = ninzu -1; j > i; j--) {
            if (s[j - 1].height > s[j].height) {
                swap_Stundet(&s[j - 1], &s[j]);
            }
        }
    }
}

int main(void)
{
    int i = 0;
    int ninzu;
    Student s[NUMBER];
    FILE *fp;
    char name[128];
    double height;
    double weight;

    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("ファイルがオープンできません。\n");
    } else {
        while (fscanf(fp, "%s%lf%lf", name, &height, &weight) == 3) {
            strcpy(s[i].name, name);
            s[i].height = height;
            s[i].weight = weight;
            // printf("%s %lf %lf\n", s[i].name, s[i].height, s[i].weight);
            i++;            
        }
        fclose(fp);
        ninzu = i;
        sort(s, i);
        for (i = 0; i < ninzu; i++) {
            printf("%-10s %5.1f%5.1f\n", s[i].name, s[i].height, s[i].weight);
        }
    }
    return 0;
}