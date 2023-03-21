#include <stdio.h>

/*
標準体重 = 22(bmi値) * (身長/100 の2乗)
*/
int main(void)
{
    for (int h = 155; h <= 190; h += 5) {
        printf("%3dcm: %.2fkg\n", h, (h - 100) * 0.9);
    }
}