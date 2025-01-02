#include <cstring>

void pad_left(char *s, int n){
    int len = strlen(s);
    if (len >= n){
        return;
    }
    
    for (int i = len; i >= 0; i--){
        s[i + (n - len)] = s[i];
    }
    
    for (int i = 0; i < n - len; i++){
        s[i] = '_';
    }
}