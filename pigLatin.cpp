#include <iostream>
#include <cstring>

using namespace std;

string pigLatin(string word) {
    if (strchr("aeiou", word[0])) {
        return word + "way";
    }
    return word.substr(1) + word[0] + "ay";
}
