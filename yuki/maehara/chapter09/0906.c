#include <stdio.h>

int main(void)
{
    unsigned char name[] = "ABC 123 結城浩";

    for (int i = 0; name[i] != '\0'; i++) {
        printf("%02x ", name[i]);
    }
    printf("\n");
    printf("%s\n", &name[0]);
    return 0;
}