#include <cstring>

void pad_right(char *s, int n){
    int len = strlen(s);
    if (len >= n){
        return;
    }
    for (int i = len; i < n; i++){
        s[i] = '_';
    }
    s[n] = '\0';
}