#include <stdio.h>
#include <string.h>

#define ROW 100
#define STR_LEN 128

void put_strary(const char s[][STR_LEN], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (strcmp(s[i], "$$$$$") == 0) {
            break;
        }
        printf("s[%d] = %s\n", i, s[i]);
    }
}

int main(void)
{
    int i;
    char cs[][STR_LEN] = {""};
    for (i = 0; i < ROW; i++) {
        printf("s[%d]: ", i);
        scanf("%s", cs[i]);
        if (strcmp(cs[i],"$$$$$") == 0) break;
    }

    put_strary(cs, ROW);

    return 0;
}