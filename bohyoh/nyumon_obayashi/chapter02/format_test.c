#include <stdio.h>

int main(void)
{
    int i;
    int n[] = { 52, 25, 88, 79, 100 };
    double x[] = { 32.2452353, 52.5253, 12.23526, 5.9887, 28.3875 };
    char name[][20] = { "山田太郎", "横山花子", "田中一郎", "山本久美子", "鈴木次郎" };

    for (i = 0; i < 5; i++) {
        printf("%2d%5.2f%5s\n", n[i], x[i], name[i]);
    }

    return 0;
}
