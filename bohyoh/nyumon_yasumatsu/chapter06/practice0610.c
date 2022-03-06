#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		v1[n - 1 - i] = v2[i];
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
	int i, n;
	puts("配列v2の要素を配列v1へ反転してコピーします。");
	puts("配列v2を作成します。");
	printf("要素数 : ");
	scanf("%d", &n);

	int v1[n];
	int v2[n];
	for (i = 0; i < n; i++) {
		printf("v2[%d] : ", i);
		scanf("%d", &v2[i]);
	}

	intary_rcpy(v1, v2, n);

	printf("コピー元配列v2: \n");
	print_array(v2, n);

	printf("反転コピー先配列v1: \n");
	print_array(v1, n);

	return 0;
}
