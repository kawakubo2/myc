#include <stdio.h>

int main(void)
{
    int i;
    char *products[] = { "K0021", "B330", "A120", "C12" };
    int prices[] = { 2000, 1500, 600, 3000 };

    printf("%5s %5s\n", "name", "price");
    printf("-----------\n");
    for (i = 0; i < 4; i++) {
        printf("%-5s %5d\n", products[i], prices[i]);
    }

    return 0;
}

