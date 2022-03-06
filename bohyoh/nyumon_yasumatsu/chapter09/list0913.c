#include <stdio.h>

void put_strary2(const char s[][6], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("s[%d] = \"", i);
        int j = 0;
        while(s[i][j]) {
            putchar(s[i][j++]);
        }
        printf("\"\n");
    }
}

int main(void)
{
    char cs[][6] = {"Turbo", "NA", "DOHC"};
    put_strary2(cs, 3);

    return 0;
}

