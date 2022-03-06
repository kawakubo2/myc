#include <stdio.h>

#define NUMBER 80

int main(void)
{
	int i, j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};
	int max = 0;

	printf("人数を入力してください: ");
	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER) {
			printf("\a～%dで入力してください: ", NUMBER);
		}
	} while(num < 1 || num > NUMBER);

	printf("%d人の点数を入力してください。\n", num);
	for (i = 0; i < num; i++) {
		printf("%2d番: ", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100) {
				printf("\a0～100で入力してください : ");
			}
		} while(tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
		if (bunpu[tensu[i] / 10] > max) {
			max = bunpu[tensu[i] / 10];
		}
	}

	puts("\n---分布グラフ---");
	for (i = max; i >= 1; i--) {
		for (j = 0; j < 11; j++) {
			if (bunpu[j] >= i) {
				printf("%3s", "*");
			} else {
				printf("%3s", "");
			}
		}
		putchar('\n');
	}
	for (i = 0; i < 11; i++) {
		printf("%3s", "---");
	}
	for (i = 0; i < 11; i++) {
		printf("%3d", i * 10);
	}
	putchar('\n');
	

	return 0;	
}
