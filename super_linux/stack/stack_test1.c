#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(void)
{
    int x, y, sw;
    char val[10];
    char *str = "12 10 8 - 15 12 - * *";
    printf("式: %s\n", str);
    char c;
    while(*str) {
        c = *str;
        if (c == ' ') {
            str++;
        } else if (c >= '0' && c <= '9') {
            int temp = 0;
            while(1) {
                temp = temp * 10 + (c - '0');
                str++;
                c = *str;
                if (c < '0' || c > '9') break;
            }
            push(temp);
        } else if (c == '+' || c == '-' || c == '*') {
            y = pop()->val;
            x = pop()->val;
            switch (c) {
                case '+':
                    push(x + y);
                    break;
                case '-':
                    push(x - y);
                    break;
                case '*':
                    push(x * y);
                    break;
            }
            str++;
        } else {
            str++;
        }
    }
    printf("結果: %d\n", pop()->val);
    return 0;
}