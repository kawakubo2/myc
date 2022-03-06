#include <stdio.h>

int index_of(char c) {
	int i;
	char str[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (i = 0; i < 36; i++) {
		if (str[i] == c) {
			return i;
		}
	}
	return 0;
}

int mypow(int card, int n)
{
	int i;
	int result = 1;
	for (i = 0; i < n; i++) {
		result *= card;
	}
	return result;
}

int card_conv(char num[], int size, int card)
{
	int i, count = 0;
	int result = 0;
	for (i = size - 1; i >= 0; i--) {
		result += index_of(num[i]) * mypow(card, count++); 
	}
	return result;
}

int str_count(char *num) 
{
	int count = 0;
	while (num[count] != '\0') {
		count++;
	}
	return count;
}

int main(void)
{
	char str[64];
	int card;
	puts("基数変換をします。");
	printf("基数を入力してください : "); scanf("%d", &card);
	printf("%d進数の数値を入力してください : ", card);
	scanf("%s", str);
	int size = str_count(str);
	printf("size=%d\n", size);
	int result = card_conv(str, size, card);
	printf("%sを10進数にすると%dです。\n", str, result);

	return 0;
}	
	
