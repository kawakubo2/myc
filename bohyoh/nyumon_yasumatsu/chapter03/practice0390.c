#include <stdio.h>
#define N 30
int main(void)
{
	int i, max, min;
	int nums[] = { 32, 12, 0, -12, 123, 83, 139, -83, -31, 81,
		       83, 151, 99, -1243, 18, 100, 38, 10, 38, 4};
	
	max = nums[0];
	min = nums[0];

	for (i = 1; i < 20; i++) {
		if (nums[i] > max) max = nums[i];
		if (nums[i] < min) min = nums[i];
	}

	printf("最大値:%d\n", max);
	printf("最小値:%d\n", min);

	return 0;
}
