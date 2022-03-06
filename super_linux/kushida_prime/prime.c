#include <stdio.h>
#include <time.h>
#define MAX 100000000 //MAX未満の素数を求める
#define DTC 1 //消去済
#define NOTDTC 0 //未消去
#define CLMSNUM 20 //表示列数

static int dtct[MAX] = {NOTDTC};

int main(void) {
	long number = 2; //素数判定対象の整数
	int mltnum; //倍数
	long tempnum;
	int i = 1;
	//添字は素数判定対象の整数
	//各要素の値は、添字の整数の素数判定状態(消去済-DTC:1、未判定-NOTDTC:0)
	clock_t start_clock, end_clock;

	start_clock = clock();
	while(number < MAX) {
		while(dtct[number]) {
			if(number == MAX - 1)
				break;
			number++;
		}
		
		if(!dtct[number]) { //numberは素数
			//printf("%7d", number);
			
			//number(素数)の倍数を消去
			mltnum = 2;
			tempnum = number * mltnum;
			while(tempnum < MAX) {
				dtct[tempnum] = DTC;
				tempnum = number * ++mltnum;
			}
			
		}

		number++;
	}
	putchar('\n');

	end_clock = clock();

	printf("経過時間: %f\n", (double)(end_clock - start_clock) / CLOCKS_PER_SEC);
	return 0;
}
