#include <stdio.h>
#include <math.h>

int main(void)
{
    puts("正方形の面積からその1辺の長さを求めます。");
    double area;
    printf("正方形の面積: "); fscanf(stdin, "%lf", &area);
    printf("1辺の長さ: %lf\n", sqrt(area));

    return 0;
}