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
