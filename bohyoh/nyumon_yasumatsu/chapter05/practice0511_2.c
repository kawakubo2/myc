#include <stdio.h>

#define KOKUGO 0
#define SUGAKU 1

void input_score(int score[6][2])
{
	int i, j;
	puts("6人分の国語、数学の点数を入力してください");
	for (i = 0; i < 6; i++) {
		printf("--- %d人目 ---\n", (i + 1));
		printf("国語: ");
		scanf("%d", &score[i][KOKUGO]);
		printf("数学: ");
		scanf("%d", &score[i][SUGAKU]);
	}
}

void print_separator()
{
	printf("+----+----+----+----+\n");
}

void print_header()
{
	print_separator();
	printf("|国語|数学|合計|平均|\n");
	print_separator();
}

void print_body(int score[6][2], int *kokugo_sum, int *sugaku_sum)
{
	int i, j, kojin_sum;
	for (i = 0; i < 6; i++) {
		kojin_sum = score[i][KOKUGO] + score[i][SUGAKU];
		*kokugo_sum += score[i][KOKUGO];
		*sugaku_sum += score[i][SUGAKU];
		printf("|%4d|%4d|%4d|%4.1f|\n", score[i][KOKUGO], score[i][SUGAKU], kojin_sum, (double)kojin_sum / 2);
	}
}

void print_footer(int *kokugo_sum, int *sugaku_sum)
{
	print_separator();
	printf("|%4d|%4d|科目合計 |\n", *kokugo_sum, *sugaku_sum);
	print_separator();
	printf("|%4.1f|%4.1f|科目平均 |\n", (double)(*kokugo_sum) / 6, (double)(*sugaku_sum) / 6);
	print_separator();
}


void print_score(int score[6][2])
{
	int i, j, kojin_sum, kokugo_sum = 0, sugaku_sum = 0;
	print_header();
	print_body(score, &kokugo_sum, &sugaku_sum);
	print_footer(&kokugo_sum, &sugaku_sum);
}


int main(void)
{
	int score[6][2];
	input_score(score);

	print_score(score);

	return 0;
}
