#include <cstring>

void trim_left(char *s){
    int len = strlen(s);
    int i = 0;
    while (s[i] == ' ' && i < len){
        i++;
    }
    
    int j = 0;
    while (i < len){
        s[j++] = s[i++];
    }
    s[j] = '\0';
}