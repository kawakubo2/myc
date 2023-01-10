#include <stdio.h>
#include <string.h>

struct kamoku {
    char name[20];
    int score;
};
struct student {
    int id;
    char name[50];
    struct kamoku kamokus[5];
};

void print_student(struct student s);
int main(void);

int main(void)
{
    struct student taro;
    taro.id = 10;
    strcpy(&taro.name[0], "Yamada");
    char kamoku_names[][20] = {"国語", "数学", "英語", "理科", "社会"};
    int scores[] = { 100, 85, 60, 95, 73 };
    for (int i = 0; i < 5; i++) {
        strcpy(taro.kamokus[i].name, kamoku_names[i]);
        taro.kamokus[i].score = scores[i];
    }
    print_student(taro);
    return 0;
}

void print_student(struct student s) 
{
    int total = 0;
    printf("出席番号: %d\n", s.id);
    printf("氏名: %s\n", s.name);
    total = 0;
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", s.kamokus[i].name, s.kamokus[i].score);
        total += s.kamokus[i].score;
    }
    printf("合計: %d\n", total);
    printf("\n");
}