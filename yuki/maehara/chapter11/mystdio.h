#ifndef MYSTDIO_H
#define MYSTDIO_H

#include <stdio.h>
void get_line(char *buffer, int size)
{
    if (fgets(buffer, size, stdin) == NULL) {
        buffer[0] = '\0';
        return;
    }

    for (int i = 0; i < size; i++) {
        if (buffer[i] == '\n') {
            buffer[i] = '\0';
            return;
        }
    }
}
#endif