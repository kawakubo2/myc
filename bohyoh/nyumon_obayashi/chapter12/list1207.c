#include <stdio.h>
#include <string.h>

#define NUMBER      5
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

void sort_by_height(Student s[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (s[j - 1].height > s[j].height) {
                swap_Student(&s[j - 1], &s[j]);
            }
        }
    }
}

void print_Students(const Student s[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%-8s %6d%6.1f%7ld\n", s[i].name, s[i].height, s[i].weight, s[i].schols);
    }
}

int main(void)
{
    int i;
    Student std[] = {
        { "Sato", 178, 61.2, 80000 },
        { "Sanaka", 175, 62.5, 73000 },
        { "Takao", 173, 86.2, 0 },
        { "Mike", 165, 72.3,  70000 },
        { "Masaki", 179, 77.5, 70000 },
    };

    puts("---< sort前 >---");
    print_Students(std, NUMBER);

    sort_by_height(std, NUMBER);

    puts("---< sort後 >---");
    print_Students(std, NUMBER);

    return 0;
}

