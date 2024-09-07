#include <stdio.h>
#include <math.h>

#define END_OF_PRIME -1

void find_prime_numbers(int numbers[], int max_num)
{
    int index = 0;
    for (int i = 2; i <= max_num; i++) {
        int divider_flag = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0)
            {
                divider_flag = 0;
                break;
            }
        }
        if (divider_flag == 0) continue;
        numbers[index] = i;
        index++;
    }
    numbers[index] = END_OF_PRIME;
}

void print_primes(int primes[], int max_num)
{
    for (int i = 0; i < max_num; i++) {
        if (primes[i] == END_OF_PRIME) break;
        printf("%d ", primes[i]);
    }
    printf("\n");
}

int main(void)
{
    int n;
    printf("n: ");
    fscanf(stdin, "%d", &n);
    int nums[n];
    find_prime_numbers(nums, n);
    print_primes(nums, n);

    return 1;
}