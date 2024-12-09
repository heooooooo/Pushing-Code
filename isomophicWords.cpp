#include <iostream>
#include <string>
using namespace std;

int get_length(string a){
    int i = 0;
    while (a[i] != '\0'){
        i++;
    }
    return i;
}

bool isIsomorphic(string a, string b) {
    int mapAtoB[256] = {0};
    int mapBtoA[256] = {0};

    for (int i = 0; i < get_length(a); i++) {
        int charA = a[i];
        int charB = b[i];

        if ((mapAtoB[charA] && mapAtoB[charA] != charB) || (mapBtoA[charB] && mapBtoA[charB] != charA)) {
            return false;
        }

        mapAtoB[charA] = charB;
        mapBtoA[charB] = charA;
    }

    return true;
}
