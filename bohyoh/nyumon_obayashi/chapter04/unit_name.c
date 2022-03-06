#include <stdio.h>

void *get_unit_name(int size)
{
    int idx = 0;
    int org = size;
    char *unit_names[] = { "", "K", "M", "G", "T", "P" };
    while (size / 1024 >= 0) {
        size /= 1024;
        idx++;
    }
    for (int i = 0; i < idx - 1; i++) {
        org /= 1024;


}



