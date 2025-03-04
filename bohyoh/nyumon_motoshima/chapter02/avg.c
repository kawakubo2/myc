#include <stdio.h>

int main(void)
{
    int age1, age2;

    printf("一人目の年齢: "); scanf("%d", &age1);
    printf("二人目の年齢: "); scanf("%d", &age2);

    printf("二人の平均年齢は%.1f\n", (age1 + age2) / 2.0);
    printf("二人の平均年齢は%.1f\n", (double)(age1 + age2) / 2);

    return 0;
}