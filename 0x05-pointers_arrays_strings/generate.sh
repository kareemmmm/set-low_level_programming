#!/bin/bash

# Task 0
cat << 'EOF' > 0-reset_to_98.c
void reset_to_98(int *n) { *n = 98; }
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98

# Task 1
cat << 'EOF' > 1-swap.c
void swap_int(int *a, int *b) { int tmp = *a; *a = *b; *b = tmp; }
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap

# Task 2
cat << 'EOF' > 2-strlen.c
int _strlen(char *s) { int i = 0; while (s[i]) i++; return (i); }
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen

# Task 3
cat << 'EOF' > 3-puts.c
#include "main.h"
void _puts(char *str) { while (*str) _putchar(*str++); _putchar('\n'); }
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts

# Task 4
cat << 'EOF' > 4-print_rev.c
#include "main.h"
void print_rev(char *s) {
    int i = 0;
    while (s[i]) i++;
    while (--i >= 0) _putchar(s[i]);
    _putchar('\n');
}
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev

# Task 5
cat << 'EOF' > 5-rev_string.c
void rev_string(char *s) {
    int len = 0, i = 0;
    char tmp;
    while (s[len]) len++;
    for (i = 0; i < len / 2; i++) {
        tmp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = tmp;
    }
}
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string

# Task 6
cat << 'EOF' > 6-puts2.c
#include "main.h"
void puts2(char *str) {
    int i = 0;
    while (str[i]) {
        if (i % 2 == 0) _putchar(str[i]);
        i++;
    }
    _putchar('\n');
}
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2

# Task 7
cat << 'EOF' > 7-puts_half.c
#include "main.h"
void puts_half(char *str) {
    int len = 0, i, start;
    while (str[len]) len++;
    start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);
    for (i = start; i < len; i++) _putchar(str[i]);
    _putchar('\n');
}
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half

# Task 8
cat << 'EOF' > 8-print_array.c
#include <stdio.h>
void print_array(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
}
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array

# Task 9
cat << 'EOF' > 9-strcpy.c
char *_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i]) { dest[i] = src[i]; i++; }
    dest[i] = '\0';
    return dest;
}
EOF
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy

echo "Files created and compiled successfully."
