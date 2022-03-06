#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 31; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("fizzbuzz\n");
        } else if (i % 3 == 0) {
            printf("fizz\n");
        } else if (i % 5 == 0) {
            printf("buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}

