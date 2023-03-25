#include <stdio.h>

int main(void)
{
    int height, width;

    puts("長方形を表示します。");
    printf("高さ: "); fscanf(stdin, "%d", &height);
    printf("横幅: "); fscanf(stdin, "%d", &width);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}