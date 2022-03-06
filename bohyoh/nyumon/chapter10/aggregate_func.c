#include <stdio.h>
#define NUMBER 10

void aggregate_func(int a[], int size, int *sum, int *avg, int *max, int *min)
{
	int i;
	*sum = *avg = 0;
	*max = a[0];
	*min = a[0];
	for (i = 0; i < size; i++) {
		*sum += a[i];
		if (a[i] > *max) *max = a[i];
		if (a[i] < *min) *min = a[i];
	}
	*avg = *sum / size;
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
	int a[NUMBER] = { 42, 98, 12, 100, 73, 88, 59, 8, 60, 93 };
	int sum, avg, max, min;
	
	aggregate_func(a, NUMBER, &sum, &avg, &max, &min);
	puts("対象配列");
	print_array(a, NUMBER);

	printf("合計:%d\n", sum);	
	printf("平均:%d\n", avg);	
	printf("最大:%d\n", max);	
	printf("最小:%d\n", min);	

	return 0;
}
