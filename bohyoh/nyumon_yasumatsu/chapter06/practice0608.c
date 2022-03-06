#include <stdio.h>

int min_of(const int v[], int n)
{
	int i;
	int min;
	min = v[0];

	for (i = 0; i < n; i++) {
		if (v[i] < min) {
			min = v[i];
		}
	}
	return min;
}

int main(void)
{
	int i, n;
	puts("最小値を求めます。");
	printf("要素数 : ");
	scanf("%d", &n);

	int a[n];
	/*
		以下は配列の要素が確保されているかを確認するためのコード
	*/
	printf("配列の要素数は%ld\n", sizeof(a) / sizeof(a[0]));

	for (i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	int min = min_of(a, n);

	printf("最小値は%dです。\n",min);

	return 0;
}
