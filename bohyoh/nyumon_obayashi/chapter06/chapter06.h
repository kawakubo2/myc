#ifndef CHAPTER06_H
#define CHAPTER06_H

int scan_pint(void)
{
    int tmp;
    do {
        printf("正の整数を入力してください : ");
        scanf("%d", &tmp);
        if (tmp <= 0)
                puts("\a正でない数を入力しないでください。");
    } while (tmp <= 0);
    return tmp;
}

int max_of(int v[], int n)
{
    int i;
    int max = v[0];
    for (i = 1; i < n; i++) {
        if (v[i] > max)
            max = v[i];
    }
    return max;
}

void print_array(const int v[], int n)
{
    int i;

    printf("{ ");
    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("}\n");
}

#endif

