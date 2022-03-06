#include <stdio.h>
#include <time.h>
#include <math.h>

#define N 1000000
int main(void)
{
	clock_t start, end;
	start = clock();
	int i, j, M, count = 0, a[N + 1];

	M = floor(sqrt(N));
	for (a[1] = 0, i = 2; i <= N; i++)
		a[i] = 1;

	
	for (i = 2; i <= M; i++)
		if (a[i]) {
			for (j = 2; j <= N/i; j++)
				a[i * j] = 0;

		}

	for (i = 1; i <= N; i++) {
		if (a[i]) {
			count++;
			printf("%7d\t", i);
		}
	}
	puts("");

	printf("1～%dまでに存在する素数は%d個です。\n", N, count);
	end = clock();

	printf("処理時間:%.6f秒\n", (double)(end - start) / (CLOCKS_PER_SEC)); 

	return 0;
}

