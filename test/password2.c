#include <stdio.h>

int main(void)
{
	int pw = 1234;
	int input_pw;

	while (1) {
		printf("パスワード: ");
		scanf("%d", &input_pw);
		if (input_pw == pw) {
			break;
		} else {
			printf("パスワードが間違えています。\n");
		}
	}
	return 1;
}
