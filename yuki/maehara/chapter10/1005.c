#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    int kokugo;
    int suugaku;
    int eigo;
};

int main(void);
void print_student(struct student s);

int main(void) 
{
    struct student data[3] = {
        {10, "Yamada",    100,  85,  60},
        {11, "Satou",      85,  95,  80},
        {12, "Takahashi", 72,  68,  78},
    };

    for (int i = 0; i < 3; i++) {
        print_student(data[i]);
    }

    return 0;
}

void print_student(struct student s)
{
    printf("出席番号: %d\n", s.id);
    printf("氏名: %s\n", s.name);
    printf("国語: %d\n", s.kokugo);
    printf("数学: %d\n", s.suugaku);
    printf("英語: %d\n", s.eigo);
    printf("合計: %d\n", s.kokugo + s.suugaku + s.eigo);
    printf("\n");
}