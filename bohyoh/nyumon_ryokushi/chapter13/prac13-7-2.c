/*
	ファイル中の英数字文字をカウント
*/

#include <stdio.h>
#include <time.h>

#define NUMSIZE 10
#define ARUFASIZE 26

void put_list(int c, int numlist[], int upperlist[], int lowerlist[], int *etc_ch)
{
	if(c >= '0' && c <= '9')
		numlist[c - '0']++;
	else if(c >= 'A' && c <= 'Z')
		upperlist[c - 'A']++;
	else if(c >= 'a' && c <= 'z')
		lowerlist[c - 'a']++;
	else
		(*etc_ch)++;
}

void count_num_or_arufa(char fname[], int numlist[], int upperlist[], int lowerlist[], int *etc_ch)
{
	int ch;
	FILE *fp;
	
	if((fp = fopen(fname, "r")) == NULL)
		printf("\aファイルをオープンできません。\n");
	else {
		while((ch = fgetc(fp)) != EOF)
			put_list(ch, numlist, upperlist, lowerlist, etc_ch);

		fclose(fp);
	}
}

void print_result(int startchar, int list[], int size)
{
	int count1 = 0, count2 = 0;
	
	while(count1 < size) {
		printf("英数文字");	//項目行の表示
		do {
			if(count1 == size)	break;
			printf("      ");
			putchar(startchar + count1);
		} while( ++count1 % 10 );
		putchar('\n');

		printf("出現回数");	//結果行
		do {	
			if(count2 == size)	break;
			printf("%7d", list[count2]);
		} while( ++count2 % 10 );
		printf("\n\n");
	}
}

int main(void)
{
	char fname[FILENAME_MAX];
	int numlist[NUMSIZE] = { 0 };		//数字文字カウント結果
	int upperlist[ARUFASIZE] = { 0 };	//大文字
	int lowerlist[ARUFASIZE] = { 0 };	//小文字
	int etc_count;	//その他の文字カウント
	clock_t start, end;

	printf("ファイル名: ");		scanf("%s", fname);
	start = clock();

	//英数文字のカウント	
	count_num_or_arufa(fname, numlist, upperlist, lowerlist, &etc_count);

	puts("------------------------------------------------------------");
	puts("数字文字の集計結果");
	print_result('0', numlist, NUMSIZE);
	puts("------------------------------------------------------------");
	puts("英大文字の集計結果");
	print_result('A', upperlist, ARUFASIZE);
	puts("------------------------------------------------------------");
	puts("英小文字の集計結果");
	print_result('a', lowerlist, ARUFASIZE);
	puts("------------------------------------------------------------");
	printf("その他の文字数: %d\n", etc_count);

	end = clock();	//経過時間
	printf("\n%.6f秒\n", (double)(end - start) / CLOCKS_PER_SEC);
	
	return 0;
}
