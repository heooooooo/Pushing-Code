#include <cstring>

void swap(char &a, char &b){
    char temp = a;
    a = b;
    b = temp;
}

void toEnd(char *S, int start, int n){
    for (int i = start; i < n - 1; i++){
        swap(S[i], S[i + 1]);
    }
}

void delete_char(char *S, char c){
    int len = strlen(S);
    int count = 0;
    for (int i = 0; i < len; i++){
        if (S[i] == c){
            count++;
        }
    }
    
    for (int i = 0;i < count; i++){
        for (int j = 0; j < len; j++){
            if (S[j] == c){
                toEnd(S,j,len);
            }
        }
    }
    
    for (int i = len - count; i < len; i++){
        S[i] = '\0';
    }
}