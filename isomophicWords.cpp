#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string a, string b) {
    if (a.length() != b.length()) return false;

    char mapAtoB[256] = {0};
    char mapBtoA[256] = {0};

    for (int i = 0; i < a.length(); ++i) {
        char charA = a[i];
        char charB = b[i];

        if ((mapAtoB[charA] && mapAtoB[charA] != charB) || (mapBtoA[charB] && mapBtoA[charB] != charA)) {
            return false;
        }

        mapAtoB[charA] = charB;
        mapBtoA[charB] = charA;
    }

    return true;
}

int main(){
    cout << isIsomorphic("abca", "zbxz");
}
