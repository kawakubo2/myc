#include <stdio.h>

int main(void)
{
    char name1[128];
    char name2[128];
    int age1, age2;

    puts("2人の平均年齢を計算します");
    printf("1人目の名前を入力してください。");
    fscanf(stdin, "%s", name1);
    printf("%sさんの年齢を入力してください。", name1);
    fscanf(stdin, "%d", &age1);

    printf("2人目の名前を入力してください。");
    fscanf(stdin, "%s", name2);
    printf("%sさんの年齢を入力してください。", name2);
    fscanf(stdin, "%d", &age2);
    
    printf("%sさんと%sさんの平均年齢は%.1f歳です。\n", \
            name1, name2, (age1 + age2) / 2.0);

    return 0;
}