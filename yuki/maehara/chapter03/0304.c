#include <stdio.h>

int main(void);

int main(void)
{
    printf("%f\n", 12.34);
    printf("%6f\n", 12.34);
    printf("%6.0f\n", 12.34);
    printf("%6.1f\n", 12.34);
    printf("%0.1f\n", 12.34);

    return 0;
}