#include "stack.h"

void parse_rpn(char *expr_rpn, const char *exp)
{

    while(*exp) {
        char c = *exp;
        if (c >= '0' && c <= '9') {
            *expr_rpn++ = c;
            while(1) {
                c = *(++exp);
                if (c < '0' || c > '9') {
                    *expr_rpn++ = ' ';
                    break;
                } else {
                    *expr_rpn++ = c;
                }
            }
            continue;
        } else if (c == '+' || c == '-' || c == '*') {
            push(c);
        } else if (c == ')') {
            *expr_rpn++ = pop()->val;
            *expr_rpn++ = ' ';
        }
        exp++;
    }
    *expr_rpn = '\0';
}

int eval_rpn(char *expr_rpn)
{
    int x, y, sw;
    char val[10];
    char c;
    while(*expr_rpn) {
        c = *expr_rpn;
        if (c == ' ') {
            expr_rpn++;
        } else if (c >= '0' && c <= '9') {
            int temp = 0;
            while(1) {
                temp = temp * 10 + (c - '0');
                expr_rpn++;
                c = *expr_rpn;
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
            expr_rpn++;
        } else {
            expr_rpn++;
        }
    }
    return pop()->val;
}
