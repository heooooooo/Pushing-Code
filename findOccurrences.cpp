#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& text, const string& word) {
    int count = 0;
    size_t pos = text.find(word);
    while (pos != string::npos) {
        bool isWholeWord = (pos == 0 || !isalnum(text[pos - 1])) &&
                           (pos + word.length() == text.length() || !isalnum(text[pos + word.length()]));
        if (isWholeWord) {
            count++;
        }
        pos = text.find(word, pos + word.length());
    }
    return count;
}

int main() {
    string text;
    string word;
    
    getline(cin, text);
    cin >> word;
    
    int occurrences = countOccurrences(text, word);
    cout << occurrences << endl;

}
