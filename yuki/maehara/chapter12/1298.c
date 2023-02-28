#include <stdio.h>

void print_array(int n[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
}

int main(void)
{
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    print_array(numbers, size);
}