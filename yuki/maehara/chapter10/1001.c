#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    int kokugo;
    int suugaku;
    int eigo;
};

void print_student(struct student s);

int main(void)
{
    struct student taro;
    struct student jiro;

    taro.id = 10;
    strcpy(taro.name, "Yamada"); // &taro.name[0] == taro.name
    taro.kokugo = 100;
    taro.suugaku = 85;
    taro.eigo = 60;

    jiro = taro;

    jiro.id = 11;
    strcpy(jiro.name, "次郎");
    jiro.kokugo = 99;

    printf("-------------\n");
    print_student(taro);
    printf("-------------\n");
    print_student(jiro);
}

void print_student(struct student s)
{
    printf("出席番号: %d\n", s.id);
    printf("名前: %s\n", s.name); // &s.name[0]と同じ意味
    printf("国語: %d\n", s.kokugo);
    printf("数学: %d\n", s.suugaku);
    printf("英語: %d\n", s.eigo);
    printf("合計: %d\n", s.kokugo + s.suugaku + s.eigo);
}