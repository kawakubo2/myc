#include <stdio.h>

int countMarkBits(unsigned short int mark)
{
    int i;
    int count = 0;
    unsigned int MASK = 1 << 15;
    printf("MAKS=%u\n", MASK);
    for (i = 0; i < 16; i++) {
        count += (mark & MASK) >> 15;
        mark <<= 1;
    }
    return count;
}

void mark(int numQ, int type[], unsigned short int ansC[], unsigned short int ansE[], int mark[]) 
{
    int i, c_bits, a_bits;
    unsigned short int tmp;
    for (i = 0; i < numQ; i++) {
        tmp = ancC[i] & ancE[i];
        a_bits = countMarkBits(ansE[i]);
        c_bits = countMarkBits(tmp);
        if (type[i] < a_bits) {
            mark[i] = 0;
        } else {
            mark[i] = bits;
        }
    }
}
int main(void)
{
    unsigned mark = 0b1010100000000000;
    printf("%d個マークされています\n", countMarkBits(mark));

    return 0;
}

