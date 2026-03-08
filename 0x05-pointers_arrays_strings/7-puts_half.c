#include "main.h"
void puts_half(char *str) {
    int len = 0, i, start;
    while (str[len]) len++;
    start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);
    for (i = start; i < len; i++) _putchar(str[i]);
    _putchar('\n');
}
