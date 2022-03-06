#ifndef CHAPTER09_H
#define CHAPTER09_H

int null_pos(const char s[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (s[i] == '\0') break;
    }
    return i;
}

void rev_string(char s[], int n)
{
    int i, length, temp;
    length = null_pos(s, n);
    for (i = 0; i < length / 2; i++) {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}

#endif
