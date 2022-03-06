#include <stdio.h>

#define N 64

void reverse(char str[], int size)
{
	int i, tmp;
	for (i = 0; i < size / 2; i++) {
		tmp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = tmp;
	}
}

int convert2Nradix(int num, int radix, char str[])
{
	int i, mod, size = 0;
	char nchars[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (num > 0) {
		str[size++] = nchars[num % radix];
		num /= radix;
	}	
	return size;
}

void printArray(char str[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		putchar(str[i]);
	}
	putchar('\n');
}

int main(void)
{
	int no, size, radix;
	char str[N];

	puts("10進数を2進数から36進数へ変換します");
	do {
		printf("正の整数を入力してください: ");
		scanf("%d", &no);
	} while (no <= 0);

	do {
		printf("変換後の基数を2から36で指定してください: ");
		scanf("%d", &radix);
	} while (radix < 2 || radix > 36);
	
	size = convert2Nradix(no, radix, str);
	reverse(str, size);

	printArray(str, size);

	return 0;
}
