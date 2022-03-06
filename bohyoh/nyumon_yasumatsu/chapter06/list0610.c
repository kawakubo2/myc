#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);
void print_array(void);

int main(void)
{
	extern int tensu[];
	int i;

	printf("%d人の点数を入力してください。\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d : ", i + 1);
		scanf("%d", &tensu[i]);
	}

	print_array();

	printf("最高点=%d\n", top());

	return 0;
}

int top()
{
	extern int tensu[];
	int i;
	int max = tensu[0];
	for (i = 1; i < NUMBER; i++) {
		if (tensu[i] > max) {
			max = tensu[i];
		}
	}
	return max;
}
	
void print_array(void)
{
	extern int tensu[];
	int i;
	for (i = 0; i < NUMBER; i++) {
		printf("%d ", tensu[i]);
	}
	putchar('\n');
}
