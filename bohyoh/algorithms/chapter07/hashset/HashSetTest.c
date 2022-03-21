#include <stdio.h>
#include "HashSet.h"

int main(void)
{
    HashSet s1, s2, s3;
    Initialize(&s1, TABLE_SIZE);
    Initialize(&s2, TABLE_SIZE);
    Initialize(&s3, TABLE_SIZE);

    printf("s2に8を追加\n");
    Add(&s2, 8);
    printf("s2に16を追加\n");
    Add(&s2, 16);
    printf("s2に24を追加\n");
    Add(&s2, 24);
    printf("s2に32を追加\n");
    Add(&s2, 32);
    printf("s2の内容:\n");
    PrintLn(&s2); 
    
    printf("s3に16を追加\n");
    Add(&s3, 16);
    printf("s3に32を追加\n");
    Add(&s3, 32);
    printf("s3に48を追加\n");
    Add(&s3, 48);
    printf("s3に64を追加\n");
    Add(&s3, 64);
    printf("s3の内容:\n");
    PrintLn(&s3); 

    printf("---< Union >---\n");
    Union(&s1, &s2, &s3);
    printf("s1の内容\n");
    PrintLn(&s1); 

    printf("---< Intersection >---\n");
    Initialize(&s1, TABLE_SIZE);
    Intersection(&s1, &s2, &s3);
    printf("s1の内容\n");
    PrintLn(&s1);

    printf("---< Difference >---\n");
    Initialize(&s1, TABLE_SIZE);
    Difference(&s1, &s2, &s3);
    printf("s1の内容\n");
    PrintLn(&s1);
    
    printf("---< SymmetricDifference >---\n");
    Initialize(&s1, TABLE_SIZE);
    SymmetricDifference(&s1, &s2, &s3);
    printf("s1の内容\n");
    PrintLn(&s1);

    Terminate(&s1);
    Terminate(&s2);
    Terminate(&s3);
}