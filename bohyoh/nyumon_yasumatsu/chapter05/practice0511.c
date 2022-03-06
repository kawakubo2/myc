#include <stdio.h>

#define KOKUGO 0
#define SUGAKU 1

int main(void)
{
	int i, j, kojin_sum, kokugo_sum = 0, sugaku_sum = 0;
	int score[6][2];

	puts("6人分の国語、数学の点数を入力してください");
	for (i = 0; i < 6; i++) {
		printf("--- %d人目 ---\n", (i + 1));
		printf("国語: ");
		scanf("%d", &score[i][KOKUGO]);
		printf("数学: ");
		scanf("%d", &score[i][SUGAKU]);
	}

	printf("+----+----+----+----+\n");
	printf("|国語|数学|合計|平均|\n");
	printf("+----+----+----+----+\n");
	for (i = 0; i < 6; i++) {
		kojin_sum = score[i][KOKUGO] + score[i][SUGAKU];
		kokugo_sum += score[i][KOKUGO];
		sugaku_sum += score[i][SUGAKU];
		printf("|%4d|%4d|%4d|%4.1f|\n", score[i][KOKUGO], score[i][SUGAKU], kojin_sum, (double)kojin_sum / 2);
	}
	printf("+----+----+----+----+\n");
	printf("|%4d|%4d|科目合計 |\n", kokugo_sum, sugaku_sum);
	printf("+----+----+----+----+\n");
	printf("|%4.1f|%4.1f|科目平均 |\n", (double)kokugo_sum / 6, (double)sugaku_sum / 6);
	printf("+----+----+----+----+\n");

	return 0;
}
