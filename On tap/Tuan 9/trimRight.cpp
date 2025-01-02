#include <cstring>

void trim_right(char *s){
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--){
        if (s[i] == ' '){
            s[i] = '\0';
        }
        else{
            return;
        }
    }
}