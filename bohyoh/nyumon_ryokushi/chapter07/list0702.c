#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("この処理系のchar型は");

    if (CHAR_MIN) {
        printf("符号付き型です。\n");
    } else {
        printf("符号無し型です。\n");
    }

    return 0;
}

