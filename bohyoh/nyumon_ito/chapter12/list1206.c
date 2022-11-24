#include <stdio.h>

typedef struct {
    int x;
    long y;
    double z;
} xyz;

xyz xyz_of(int x, long y, double z)
{
    xyz temp;
    temp.x = x;
    temp.y = y;
    temp.z = z;
    return temp;
}

int main(void) {
    xyz s = {0, 0, 0};

    s = xyz_of(12, 7654321, 35.689);

    printf("xyz.x = %d\n", s.x);
    printf("xyz.y = %ld\n", s.y);
    printf("xyz.z = %f\n", s.z);

    return 0;
}