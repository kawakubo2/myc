#include <stdio.h>

int main(int argc, char const *argv[])
{
    int score;
    do {
        printf("点数(0-100): ");
        scanf("%d", &score);
    } while (score < 0 || score > 100);

    printf("点数: %d\n", score);

    return 0;
}
