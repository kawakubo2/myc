#include <stdio.h>

void put_chars(int ch, int n)
{
	while(n-- > 0)
		putchar(ch);
}

int main(void)
{
	int i, j, n;
	puts("ピラミッドを作ります。");
	printf("段数を正の整数で入力してください: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		put_chars(' ', n - i);
		put_chars('*', i * 2 - 1);
		put_chars(' ', n - i);
		putchar('\n');
	}
	
	return 0;
}
