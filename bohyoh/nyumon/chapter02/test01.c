#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int total = 0;
	int nums[] = { 2, 5, 4, 3, 2 };
	int size = sizeof(nums) / sizeof(nums[0]);
	for (int i = 0; i < size; i++) {
		total += nums[i];
	}

	printf("平均: %.2f\n", (double)total / size);
	return 0;
}
