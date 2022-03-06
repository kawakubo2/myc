#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *n, int size)
{
	int temp;
	for (int i = 0; i < size/2; i++) {
		temp = n[i];
		n[i] = n[size - 1 - i];
		n[size - 1 - i] = temp;
	}
}

void disp_array(const int*n, int size)
{
	for (int i = 0; i < size; i++) {
		printf("%d, ", n[i]);
	}
	puts("");
}

void print_caption(char *s)
{
	printf("--------< %s >---------\n", s);
}

int *create_array(int size)
{
	int el;
	int *array = (int *)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		printf("%d番目の値:", (i + 1)); scanf("%d", &el);
		array[i] = el;
	}
	return array;
}

int main(void)
{
	int size;
	printf("配列の要素数を入力してください:"); scanf("%d", &size);
	int *numbers;
	numbers = create_array(size);

	print_caption("逆順にする前");
	disp_array(numbers, size);
	reverse_array(numbers, size);
	print_caption("逆順にした後");
	disp_array(numbers, size);

	return 0;
}

	
	 
		
