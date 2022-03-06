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
	
int main(void)
{
	unsigned x, set_x, reset_x, inverse_x;
	int n;
	printf("正の整数を入力してください:");
	scanf("%u", &x);
	printf("set, reset, inverseしたい位置を入力してください:");
	scanf("%d", &n);

	puts("操作前");
	puts("+---------+---------+---------+-");
	print_bits(x);
	printf("指定した%d番目のbitをsetします。\n", n);
	set_x = set(x, n);
	puts("+---------+---------+---------+-");
	print_bits(set_x);

	printf("指定した%d番目のbitをresetします。\n", n);
	reset_x = reset(x, n);
	puts("+---------+---------+---------+-");
	print_bits(reset_x);

	printf("指定した%d番目のbitをinverseします。\n", n);
	inverse_x = inverse(x, n);
	puts("+---------+---------+---------+-");
	print_bits(inverse_x);

	return 0;
}
