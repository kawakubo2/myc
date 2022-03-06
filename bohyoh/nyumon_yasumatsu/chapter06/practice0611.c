#include <stdio.h>

int search_idx(const int v[], int idx[], int key, int n)
{
	int i = 0;
	int count = 0;
	while(1) {
		if (i == n) { break; }
		if (v[i] == key) {
			idx[count] = i;
			count++;
		}
		i++;
	}
	return count;
}

int main(void)
{
	int i, num, ky, count;
	printf("要素数 : ");
	scanf("%d", &num);
	int vx[num];
	int result[num];

	for (i = 0; i < num; i++) {
		printf("vx[%d] : ", i);
		scanf("%d", &vx[i]);
	}

	printf("探す値 : ");
	scanf("%d", &ky);
	count = search_idx(vx, result, ky, num);

	if (count == 0) {
		printf("%dは見つかりませんでした。\n", ky);
	} else {
		printf("%dは%d個、", ky, count);
		for (i = 0; i < count; i++) {
			printf("%d番目 ", result[i] + 1);
		}
		puts("で見つかりました。");
	}

	return 0;
} 

