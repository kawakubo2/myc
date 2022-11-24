#include <stdio.h>

int sum(int n[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += n[i];
	}
	return sum;

}

int main(void)
{
	int total;
	int numbers[] = {1, 2, 3, 4};
	int s = sizeof(numbers) / sizeof(numbers[0]);
	printf("number of array: %d\n", s);
	printf("total: %d\n", sum(numbers, s));

	return 0;
}
