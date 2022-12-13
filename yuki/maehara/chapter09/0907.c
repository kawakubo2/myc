#include <stdio.h>

int main(void)
{
    int ten[] = { 65, 90, 75 };

    for (int i = 0; i < sizeof(ten) / sizeof(ten[0]); i++) {
        printf("%d ", ten[i]);
    }
    printf("\n");

    printf("%lu\n", sizeof(ten));
    printf("%lu\n", sizeof(ten[0]));
    printf("%lu\n", sizeof(ten) / sizeof(ten[0]));

    printf("intのsize: %lu\n", sizeof(int));
    printf("longのsize: %lu\n", sizeof(long));
    printf("doubleのsize: %lu\n", sizeof(double));

    return 0;
}