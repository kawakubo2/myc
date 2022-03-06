#include <stdio.h>

int main(void)
{
	int i;
	int nums[] = { 3, 2, 11, 5, 1, 20, 4 };
	int min = nums[0];
	int size = sizeof(nums) / sizeof(nums[0]);

	for (i = 0; i < size; i++) {
		if (nums[i] < min) min = nums[i];
	}

	printf("最小値: %d\n", min);

	return 0;
}
