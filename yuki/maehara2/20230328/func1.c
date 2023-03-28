#include <stdio.h>

double get_rectangle_area(double width, double height);

int main(void)
{
    double w, h, area;
    puts("長方形の面積を求めます");
    printf("幅を入力してください: ");
    fscanf(stdin, "%lf", &w);
    printf("高さを入力してください: ");
    fscanf(stdin, "%lf", &h);
    area = get_rectangle_area(w, h);
    printf("幅が%f、高さが%fの長方形の面積は%fです。\n", w, h, area);
}

double get_rectangle_area(double width, double height)
{
    return width * height;
}