#include <stdio.h>
#include "IntSet.h"

int main(void)
{
    IntSet s1, s2, s3;
    Initialize(&s1, 24);
    Initialize(&s2, 24);
    Initialize(&s3, 24);

    printf("s1に10を追加\n");
    Add(&s1, 10);
    printf("s1に15を追加\n");
    Add(&s1, 15);
    printf("s1に20を追加\n");
    Add(&s1, 20);
    printf("s1に25を追加\n");
    Add(&s1, 25);
    printf("s1の内容:\n");
    PrintLn(&s1);

    printf("s1をs2に代入\n");
    Assign(&s2, &s1);
    printf("s2の内容:\n");
    PrintLn(&s2);
    printf("s2に12を追加");
    Add(&s2, 12);
    printf("s2から20を削除");
    Remove(&s2, 20);
    printf("s2の内容:\n");
    PrintLn(&s2);

    printf("s3にs2を代入\n");
    Assign(&s3, &s2);

    printf("s1の内容:");
    PrintLn(&s1);
    printf("s2の内容:");
    PrintLn(&s2);
    printf("s3の内容:");
    PrintLn(&s3);

    printf("集合s1に15は含まれ%s。\n", IsMember(&s1, 15) > 0 ? "る": "ない");
    printf("集合s2に25は含まれ%s。\n", IsMember(&s2, 25) > 0 ? "る": "ない");
    printf("集合s1とs2は等し%s。\n", Equal(&s1, &s2) ? "い": "くない");
    printf("集合s2とs3は等し%s。\n", Equal(&s2, &s3) ? "い": "くない");

    Terminate(&s1);
    Terminate(&s2);
    Terminate(&s3);

    return 0;

}