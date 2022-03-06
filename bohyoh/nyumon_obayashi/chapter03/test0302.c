#include <stdio.h>

int get_gender(void)
{
    int gender;
    do {
        printf("性別を入力してください 1.男性 2.女性 > ");
        scanf("%d", &gender);
    } while (gender != 1 && gender != 2);
    return gender;
}

int get_age(void)
{
    int age;
    do {
        printf("年齢を入力してください > ");
        scanf("%d", &age);
    } while (age < 0);
    return age;
}

int calc_fee(int gender, int age)
{
    int price;
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
    return price;
}

int main(void)
{
    int age, gender, price;
    puts("性別と年齢で1ヶ月の掛け金を求めます。");

    gender = get_gender();
    age    = get_age();
    price  = calc_fee(gender, age);

    printf("掛け金は%d円です。\n", price);

    return 0;
}

