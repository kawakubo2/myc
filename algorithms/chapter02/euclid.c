#include <stdio.h>

int gcd(int u, int v)
{
	int t;
	while(u > 0) {
		if (u < v) { 
			t = u; 
			u = v; 
			v = t; 
		}
		u = u - v;
	}
	return v;
}
		
int main(void)
{
	int n1, n2;
	puts("二つの整数を入力してください。");
	printf("整数1 > ");
	scanf("%d", &n1);
	printf("整数2 > ");
	scanf("%d", &n2);

	printf("%dと%dの最大公約数は%dです。\n", n1, n2, gcd(n1, n2));
	
	return 0;
}
