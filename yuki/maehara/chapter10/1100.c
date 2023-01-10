#include <stdio.h>
#include <string.h>

typedef struct kamoku {
    char name[20];
    int score;
} KAMOKU;

typedef struct student {
    int id;
    char name[50];
    KAMOKU kamokus[3];
} STUDENT;

void print_student(STUDENT s);
int main(void);

int main(void)
{
    STUDENT data[] = {
        {10, "Yamada",    {{"国語", 100}, {"数学", 85}, {"英語", 60}}},
        {11, "Satou",     {{"国語", 85}, {"数学", 95}, {"英語", 80}}},
        {12, "Takahashi", {{"国語", 72}, {"数学", 68},  {"英語", 78}}},
    };

    for (int i = 0; i < 3; i++) {
        print_student(data[i]);
    }
    
    return 0;
}

void print_student(STUDENT s) 
{
    int total = 0;
    printf("出席番号: %d\n", s.id);
    printf("氏名: %s\n", s.name);
    total = 0;
    for (int i = 0; i < 3; i++) {
        printf("%s: %d\n", s.kamokus[i].name, s.kamokus[i].score);
        total += s.kamokus[i].score;
    }
    printf("合計: %d\n", total);
    printf("\n");
}