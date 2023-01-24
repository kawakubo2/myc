#include <stdio.h>

struct xyz {
    int x;
    long y;
    double z;
};

struct xyz scan_xyz(void)
{
    struct xyz result;
    printf("x: "); fscanf(stdin, "%d", &result.x);
    printf("y: "); fscanf(stdin, "%ld", &result.y);
    printf("z: "); fscanf(stdin, "%le", &result.z);
    return result;
}

int main(void)
{
    struct xyz a = scan_xyz();
    printf("x: %d\n", a.x);
    printf("y: %ld\n", a.y);
    printf("z: %.12f\n", a.z);

    return 0;
}