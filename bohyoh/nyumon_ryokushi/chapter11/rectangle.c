#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double width, height;

    if (argc != 3) {
        printf("引数の数が違います。\n");
        printf("使用法: rectangle 幅 高さ\n");
        printf("使用例: rectangle 5.3 4.23\n");
        return -1;
    }

    width = atof(argv[1]);
    height = atof(argv[2]);

    printf("面積:%lf\n", width * height);

    return 0;
}

