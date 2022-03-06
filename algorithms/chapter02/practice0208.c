#include <stdio.h>

int gcd(int u, int v)
{
	int t;
	while(u > 0) {
		if (u < v) { t = u; u = v; v = t; }
		u = u % v;
	}
	return v;
}

int three_gcd(int n1, int n2, int n3) {
	int g12, g23, g31;
	while(1) {
		g12 = gcd(n1, n2);
		g23 = gcd(n2, n3);
		g31 = gcd(n3, n1);
		if (g12 == 1 || g23 == 1 || g31 == 1) return 1;
		if (g12 == g23 && g23 == g31) return g12;
		n1 = g12;
		n2 = g23;
		n3 = g31;
	}
}	

int main(void)
{
	int n1, n2, n3, result;
	puts("3つの正の整数を入力してください。");
	printf("整数1: "); scanf("%d", &n1);
	printf("整数2: "); scanf("%d", &n2);
	printf("整数3: "); scanf("%d", &n3);

	result = three_gcd(n1, n2, n3);

	printf("%d, %d, %dの最大公約数は%dです。\n", n1, n2, n3, result);

	return 0;
}
