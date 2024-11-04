#include <iostream>
#include <string>

using namespace std;

string pigLatin(string s){
    string vowels = "ueoai";
    char firstChar = s[0];
    bool isVowel = false;
    
    for (int i = 0; i < 5; i++){
        if (firstChar == vowels[i]){
            isVowel = true;
            break;
        }
    }
    
    string pigLatinWord = "";
    if (isVowel){
        pigLatinWord = s + "way";
    }
    else{
        for (int i = 1; i < s.length(); i++){
            pigLatinWord += s[i];
        }
        pigLatinWord += firstChar;
        pigLatinWord += "ay";
    }
    return pigLatinWord;
}

int main(){
    string s;
    cin >> s;
    
    cout << pigLatin(s);

}