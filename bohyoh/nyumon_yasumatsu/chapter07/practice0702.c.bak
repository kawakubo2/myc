#include <stdio.h>

int main(void)
{
	unsigned x = 40u; // 0000...0000101000
	unsigned n = 3u; // 3ビット

	unsigned left_shift_x = 320u;
	unsigned right_shift_x = 5u;

	if ((x << n) == left_shift_x) {
		printf("%uを%uビット左シフトすると%uとなり、8倍した結果と等しくなる。\n", x, n, left_shift_x);
	} else {
		printf("%uを%uビット左シフトした結果が%uと等しくありません。\n", x, n, left_shift_x);
	}

	if ((x >> n) == right_shift_x) {
		printf("%uを%uビット右シフトすると%uとなり、1/8した結果と等しくなる。\n", x, n, right_shift_x);
	} else {
		printf("%uを%uビット右シフトした結果が%uと等しくありません。\n", x, n, right_shift_x);
	}

	unsigned y = 37u; // 0000...0000100101
	unsigned left_shift_y = 296u;
	unsigned right_shift_y = 4;  // 0000...0000000100

	if ((y << n) == left_shift_y) {
		printf("%uを%uビット左シフトすると%uとなり。8倍した結果と等しくなる。\n", y, n, left_shift_y);
	} else {
		printf("%uを%uビット左シフトした結果が%uと等しくありません。\n", y, n, left_shift_y);
	}

	if ((y >> n) == right_shift_y) {
		printf("%uを%uビット右シフトすると%uとなるが、1/8した結果と等しくならない。\n", x, n, right_shift_y);
	} else {
		printf("%uを%uビット右シフトした結果が%uと等しくありません。\n", y, n, right_shift_y);
	}

	return 0;
}
