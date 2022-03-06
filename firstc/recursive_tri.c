#include <stdio.h>

void draw_triangle(int size)
{
        if (size > 1) {
            draw_triangle(size - 1);
        }

        for (int i = 0; i < size; i++) {
            printf("%s", "$");
        }
        putchar('\n');
}

int main(void)
{
        draw_triangle(3);
        return 0;
}
