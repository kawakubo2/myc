//ファイルの中身を表示する
#include <stdio.h>
#include <time.h>

void str_dcount(const char s, int cnt[])
{
//	int i = 0;
//	while (s)
		if (s >= 'A' && s <= 'Z')
			cnt[s - 'A']++;
		if (s >= 'a' && s <= 'z')
			cnt[26 + s - 'a']++;
//		i++;
}

int main(void)
{
	clock_t start, end;
	start = clock();
	int ch;
	FILE *fp;
	char fname[FILENAME_MAX];
	int dcount[52] = {0};
	char changeD;
	char cr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',
					'V','W','X','Y','Z',
					'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u',
					'v','w','x','y','z'};
		//ファイル名
	printf("ファイル名：");
	scanf("%s",fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\aファイルをオープンできません。\n");
	else {
		while ((ch = fgetc(fp)) != EOF) {
			changeD = (char)ch;
//			printf("%c", changeD);
			str_dcount(changeD, dcount);
		}
		fclose(fp);
	}
	puts("数字文字の出現回数");
	for (int i = 0; i < 52; i++) {
		printf("'%c':%d\n", cr[i], dcount[i]);
	}

	end = clock();
	printf("%.6f秒\n", (double)(end - start) / CLOCKS_PER_SEC);
	
	return 0;
}
