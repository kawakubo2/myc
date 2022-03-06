#include <stdio.h>

int main(void)
{
    int hit_number = 481;
    int numbers[] = { 131353, 201731, 889101, 181990, 512481 };
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 1000 == hit_number) {
            printf("%dは%sです\n", numbers[i], "当たり");
        } else {
            printf("%dは%sです\n", numbers[i], "外れ");
        }
    }
    return 0;
}