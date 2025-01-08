#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; getline(cin, s);
    int count[26] = {0};

    for (char ch : s){
        count[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i]) {
            char out = 'a' + i;
            cout << out << ":" << count[i] << endl;
        }
    }
}