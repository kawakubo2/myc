#include <stdio.h>

void rev_intary(int v[], int n)
{
	int i, tmp;
	for (i = 0; i < n / 2; i++) {
		tmp = v[i];
		v[i] = v[n - 1 - i];
		v[n - 1 - i] = tmp;
	}
}

void print_array(const int v[], int n)
{
	int i;
	printf("{ ");
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	printf("}\n");
}

int main(void)
{
	int i;
	int n;

	puts("配列を反転します。");
	printf("要素数 : ");
	scanf("%d", &n);

	// 配列の宣言
	int a[n];

	// 配列に要素を格納
	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}	

	printf("反転前:\n");
	print_array(a, n);
	rev_intary(a, n);
	printf("反転後:\n");
	print_array(a, n);

	return 0;
}
