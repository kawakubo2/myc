#include <stdio.h>

int total = 0;

void add(int n)
{
  total += n;
}
void sub(int n)
{
  total -= n;
}
void mul(int n)
{
  total *= n;
}

int main(void)
{
  char tmp[5];

  while(1) {
    printf("+(加算),-(減算),*(乗算),#(終了): "); 
    scanf("%s", tmp);
    char op = tmp[0];
    if (op == '#') break;
    int n;
    scanf("整数: "); scanf("%d", &n);
    switch(op) {
      case '+':
        add(n);
        break;
      case '-':
        sub(n);
        break;
      case '*':
        mul(n);
        break;
      default:
        puts("+,-,*を入力してください。");
        break;
    }
    printf("現在値: %d\n", total);
  }


  return 0;
}

