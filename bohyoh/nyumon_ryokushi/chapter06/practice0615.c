#include <stdio.h>

int count = 0;

void put_count()
{
    printf("put_count: %d回目\n", ++count);
}

int main(void)
{
    int i;

    for (i = 0; i < 3; i++) {
        put_count();
    }

    return 0;
}
