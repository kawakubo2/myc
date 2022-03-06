#ifndef CHAPTER05_H
#define CHAPTER05_H

void print_array(const int v[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("v[%d] = %d\n", i,  v[i]);
    }
}

void print_array_d(const double v[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("v[%d] = %lf\n", i, v[i]);
    }
}

#endif

