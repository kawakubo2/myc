#include <stdio.h>

int count_bits(unsigned x)
{
	int bits = 0;
	while(x) {
		if (x & 1U) bits++;
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

unsigned set(unsigned x, int pos)
{
	unsigned mask = 1U;
	mask <<= (int_bits() - 1 - pos);
	return x | mask;
}

unsigned reset(unsigned x, int pos)
{
	unsigned mask = 1U;
	mask <<= (int_bits() - 1 - pos);
	mask = ~mask;
	return x & mask;
}

unsigned inverse(unsigned x, int pos)
{
	unsigned pos_bit;
	unsigned mask = 1U;
	mask <<= (int_bits() - 1 - pos);
	pos_bit = mask & x;
	pos_bit >>= (int_bits() - 1 - pos);
	if (pos_bit == 1U) {
		return reset(x, pos);
	} else {
		return set(x, pos);
	}
}
	
unsigned set_n(unsigned x, int pos, int n)
{
	int i;
	unsigned result_x = x;
	for (i = pos; i < pos + n && i < int_bits(); i++) {
		 result_x = set(result_x, i);
	}
	return result_x;
}

unsigned reset_n(unsigned x, int pos, int n)
{
	int i;
	unsigned result_x = x;
	for (i = pos; i < pos + n && i < int_bits(); i++) {
		 result_x = reset(result_x, i);
	}
	return result_x;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
	int i;
	unsigned result_x = x;
	for (i = pos; i < pos + n && i < int_bits(); i++) {
		 result_x = inverse(result_x, i);
	}
	return result_x;
}

int main(void)
{
	unsigned x, set_n_x, reset_n_x, inverse_n_x;
	int pos, n;
	printf("正の整数を入力してください:");
	scanf("%u", &x);
	printf("set_n, reset_n, inverse_nしたい位置を入力してください:");
	scanf("%d", &pos);
	printf("個数を入力してください:");
	scanf("%d", &n);

	puts("操作前");
	puts("+---------+---------+---------+-");
	print_bits(x);

	printf("指定した位置%d番目から%d個のbitをsetします。\n", pos, n);
	set_n_x = set_n(x, pos, n);
	puts("+---------+---------+---------+-");
	print_bits(set_n_x);
	
	printf("指定した位置%d番目から%d個のbitをresetします。\n", pos, n);
	reset_n_x = reset_n(x, pos, n);
	puts("+---------+---------+---------+-");
	print_bits(reset_n_x);

	printf("指定した位置%d番目から%d個のbitをinverseします。\n", pos, n);
	inverse_n_x = inverse_n(x, pos, n);
	puts("+---------+---------+---------+-");
	print_bits(inverse_n_x);

	return 0;
}
