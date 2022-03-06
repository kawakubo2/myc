#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while (x) {
		if (x & 1U) {
			bits++;
		}
		x >>= 1;
	}
	return bits;
}

int int_bits(void)
{
	return count_bits(~0U);
}

void print_bits(unsigned x)
{
	int i;
	for (i = int_bits() - 1; i >= 0; i--) {
		putchar(((x >> i) & 1U) ? '1': '0');
	}
	putchar('\n');
}

unsigned rrotate(unsigned x, int n)
{
	int i;
	for (i = 0; i < n; i++) {
		unsigned rotate_bit = x & 1U;
		x >>= 1;
		rotate_bit <<= int_bits() - 1;
		x = x | rotate_bit;
	}
	return x;
}

unsigned lrotate(unsigned x, int n)
{
	unsigned msb = 1U << (int_bits() - 1);
	int i;
	for (i = 0; i < n; i++) {
		unsigned rotate_bit = x & msb;
		x <<= 1;
		x = x | (rotate_bit >> (int_bits() - 1));
	}
	return x;
}

int main(void)
{
	unsigned x, tmp, answer;
	int num; 
	
	printf("正の整数を入力してください : ");
	scanf("%u", &x);
	tmp = x;
	printf("シフトしたいビット数を入力してください : ");
	scanf("%d", &num);
	puts("--- 右シフト前 ---");
	print_bits(tmp);
	answer = rrotate(tmp, num);
	puts("--- 右シフト後 ---");
	print_bits(answer);

	tmp = x;
	puts("--- 左シフト前 ---");
	print_bits(tmp);
	answer = lrotate(tmp, num);
	puts("--- 左シフト後 ---");
	print_bits(answer);

	return 0;

}
