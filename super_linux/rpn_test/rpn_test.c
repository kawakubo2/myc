#include <stdio.h>
#include <stdlib.h>
#include "expression_parse.h"

int main(void)
{
    // char expression[256] = "((23 - 18) * (((20 * 7) - (11 + (12 * 10))) - 7))";
    // char expression[256] = "((23 - 18) * (((20 * 7) - (11 + (12 * 10))) - 7))";
    // char expression[256] = "(15 * (((17 - 13) * (10 + 2)) - 8))";
    char expression[256] = "(5 * ((3 + 2) + (((4 * 2) * 5) - 10)))";
    char expr_rpn[256];
    printf("中置記法: %s\n", expression);
    parse_rpn(expr_rpn, expression);
    printf("逆ポーランド記法: %s\n", expr_rpn);
    printf("計算結果: %d\n", eval_rpn(expr_rpn));
    return 0;
}