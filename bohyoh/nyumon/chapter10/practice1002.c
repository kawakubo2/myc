#include <stdio.h>
#define NUMBER 5

void adjust_point(int *n)
{
	if (*n < 0) *n = 0;
	if (*n > 100) *n = 100;
}

void print_array(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	putchar('\n');
}

int main(void)
{
	int i;
	int a[NUMBER] = { 0, 50, 100, -1, 101 };
	puts("---< 調整前 >---");
	print_array(a, NUMBER);
	for (i = 0; i < NUMBER; i++) {	
		adjust_point(&a[i]);
	}
	
	puts("---< 調整後 >---");
	print_array(a, NUMBER);

	return 0;
}

