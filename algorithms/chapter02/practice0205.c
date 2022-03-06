#include <stdio.h>
#include <stdlib.h>

#define N 128

void print_array(char str[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d", str[i]);
	}
	printf("\n");
}

void print_array_with_comma(char str[], int size)
{
	int i, mod = size % 3;
	for(i = 0; i < mod; i++) {
		printf("%d", str[i]);
	}
	for (i = mod; i < size; i++) {
		if (i == mod && i != 0) { printf(","); }
		printf("%d", str[i]);
		if (i != mod && i != (size - 1) && (i - mod + 1) % 3 == 0) { printf(","); }
	}
	printf("\n");
}

void reverse(char str[], int size) {
	int i;
	char t;
	for (i = 0; i < size / 2; i++) {
		t = str[i];
		str[i] = str[(size - 1) - i];
		str[(size - 1) - i] = t;
	}
}

int binary(int n, char str[]) {
	int i = 0;
	while(n > 0) {
		str[i++] = n % 2;
		n /= 2;
	}
	return i;
}

int main(void)
{
	int n, size;
	char b[N];
	puts("10進数を2進表記します。");
	printf("10進整数を入力してください: ");
	scanf("%d", &n);

	size = binary(n, b);

	reverse(b, size);
	print_array(b, size);
	puts("------< カンマ区切り版 >------");
	print_array_with_comma(b, size);

	return 0;
}
	
