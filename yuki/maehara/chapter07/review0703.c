#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int upper_count, lower_count, alpha_count, space_count;
    upper_count = lower_count = alpha_count = space_count = 0;
    int c = getchar();
    while (c != EOF) {
        if (isupper(c)) {
            upper_count++;
        }
        if (islower(c)) {
            lower_count++;
        }
        if (isalpha(c)) {
            alpha_count++;
        }
        if (isspace(c)) {
            space_count++;
        }
        c = getchar();
    }
    printf("uppercase: %3d\n", upper_count);
    printf("lowercase: %3d\n", lower_count);
    printf("alphabet : %3d\n", alpha_count);
    printf("space    : %3d\n", space_count);

    return 0;
}