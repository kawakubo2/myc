#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n)
{
    int i, j;
    for (i = 0; i < n; i++) {
        v1[n - i - 1] = v2[i]; 
    }
}

void print_array(int v[], int n)
{
    int i;
    printf("{ ");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("}");
}

int main(void)
{
    int i;
    int nums1[] = {1, 2, 3, 4, 5, 6, 7};
    int nums2[7];
    printf("反転前\n");
    print_array(nums1, 7); putchar('\n');
    intary_rcpy(nums2, nums1, 7);
    printf("反転後\n");
    print_array(nums2, 7); putchar('\n');

    return 0;
}