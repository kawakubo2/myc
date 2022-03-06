#include <stdio.h>

int main(void)
{
	int i;
	int nums1[10];
	double nums2[10];

	for (i = 0; i < 10; i++) {
		printf("%d ", nums1[i]);
	}
	putchar('\n');
	for (i = 0; i < 10; i++) {
		printf("%lf ", nums2[i]);
	}
	putchar('\n');	
	return 0;
}
