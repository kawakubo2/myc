jinclude <stdio.h>

#define NUMBER 80

int main(void)
{
	int i, num;
	// 配列領域の確保(オブジェクト形式マクロ「NUMBER」個の要素を持った配列)
	int nums[NUMBER];
	// 1からNUMBERの範囲を入力するまで繰り返し入力させる
	do {
		printf("データ数: ");
		scanf("%d", &num);
		if (num < 1 || num > NUMBER) { // 範囲チェック
			printf("\a1～%dで入力してください。\n", NUMBER);
		}
	} while (num < 1 || num > NUMBER); // 範囲外の場合1が返され、処理が繰り返される

	// numは1以上80以下なので、確保したNUMBER個以上の要素は追加できない
	for (i = 0; i < num; i++) {
		printf("%2d番: ", i + 1);
		scanf("%d", &nums[i]);
	}
	
	// 配列形式の表示{1,2,3,4}
	printf("{");
	for (int i = 0; i < num; i++) {
		printf("%d", nums[i]);
		if (i != num - 1) {
			printf(",");
		}
	}
	printf("}\n");

	return 0;
}
