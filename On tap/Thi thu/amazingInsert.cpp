void amazingInsert(char *s) {
    int length = strlen(s);
    for (int i = length; i >= 0; i--) {
        *(s + i + 1) = *(s + i);
    }

    *s = '0';

    *(s + length + 1) = '0';
    *(s + length + 2) = '\0';
}