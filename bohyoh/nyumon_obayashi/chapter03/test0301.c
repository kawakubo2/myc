#include <stdio.h>

int main(void)
{
    int age, gender, price;
    puts("性別と年齢で1ヶ月の掛け金を求めます。");

    do {
        printf("性別を入力してください 1.男性 2.女性 > ");
        scanf("%d", &gender);
    } while (gender != 1 && gender != 2);

    do {
        printf("年齢を入力してください > ");
        scanf("%d", &age);
    } while (age < 0);

    if (gender == 1) {
        if (age <= 20) {
            price = 2400;
        } else if (age <= 50) {
            price = 2800;
        } else if (age <= 70) {
            price = 3200;
        } else {
            price = 3600;
        }
    } else { 
        if (age <= 20) {
            price = 2000;
        } else if (age <= 50) {
            price = 2200;
        } else if (age <= 70) {
            price = 2400;
        } else {
            price = 2600;
        }
    }

    printf("1ヶ月の掛け金は%d円です。\n", price);

    return 0;
}

