#include <stdio.h>

int twice(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		v[i] *= 2;
	}
}

int main(void)
{
	int i;
	int nums[] = { 1, 2, 3, 4, 5,};
	twice(nums, 5);

	for (i = 0; i < 5; i++) {
		printf("%d ", nums[i]);
	}
	putchar('\n');

	return 0;
}
