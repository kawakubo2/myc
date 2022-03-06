/*
    5人の学生を名前、身長、BMIのいずれかで昇順にソート
*/

#include <stdio.h>
#include <string.h>

#define NUMBER      5
#define NAME_LEN   64

typedef struct {
    char  name[NAME_LEN];
    int   height;
    float weight;
    long  schols;
} Student;

double bmi(Student s)
{
    s.height *= 0.01;

    return s.weight / (s.height * s.height);
}

void swap_Student(Student *x, Student *y)
{
    Student temp = *x;
    *x = *y;
    *y = temp;
}

int bmi_comparer(Student a, Student b)
{
    return bmi(a) > bmi(b);
}

int name_comparer(Student a, Student b)
{
    return strcmp(a.name, b.name);
}

int height_comparer(Student a, Student b)
{
    return a.height > b.height;
}

void mysort(Student a[], int n, int  (*comparer)(Student, Student))
{
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--)
            if (comparer(a[j - 1], a[j]) > 0)
                swap_Student(&a[j - 1], &a[j]);
    }
}


int main(void)
{
    int i, sj = 0;
    Student std[] = {
        {"Sato",    178, 61.2, 80000},
        {"Sanaka",  175, 62.5, 73000},
        {"Takao",   173, 86.2, 0},
        {"Mike",    165, 72.3, 70000},
        {"Masaki",  179, 77.5, 70000},
    };

/*    puts("各学生の情報を入力してください。");
    for (i = 0; i < NUMBER; i++){
        printf("名　前：");
        scanf("%s", std[i].name);
        printf("身　長：");
        scanf("%d", &std[i].height);
        printf("体　重：");
        scanf("%f", &std[i].weight);
        printf("奨学金：");
        scanf("%ld", &std[i].schols);
    } */

    puts("---ソート前---");
    for (i = 0; i < NUMBER; i++)
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

    do {
        printf("名前‥１か身長‥２かBMI‥３でソートします。番号を入力してください：");
        scanf("%d", &sj);
        if(sj == 1)
            mysort(std, NUMBER, name_comparer);
        else if (sj == 2)
            mysort(std, NUMBER, height_comparer);
        else if (sj == 3)
            mysort(std, NUMBER, bmi_comparer);
        else
            printf("１か２か３を入力してください。\n");
    } while((sj != 1) && (sj != 2) && (sj != 3));

    puts("\n---ソート後---");
    for (i = 0; i < NUMBER; i++) 
        printf("%-8s %6d%6.1f%7ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);

    return 0;
}