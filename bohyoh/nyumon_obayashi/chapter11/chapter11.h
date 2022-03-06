#ifndef CHAPTER11_H
#define CHAPTER11_H

int str_length(const char *s)
{
    int len = 0;
    while(*s++)
        len++;
    return len;
}

char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

#endif

