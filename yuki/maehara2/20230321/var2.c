#include <stdio.h>
#include <math.h>

int main(void)
{
    double height, weight;
    char name[64];
    printf("名前: ");
    fscanf(stdin, "%s", name);
    printf("身長(cm): ");
    fscanf(stdin, "%lf", &height);
    printf("体重(kg): ");
    fscanf(stdin, "%lf", &weight);

    printf("%sさんのBMI値は%.1fです。\n",
        name, weight / pow(height / 100, 2));

    return 0;
}