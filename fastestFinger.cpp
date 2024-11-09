#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, char>> words(4);
    for (int i = 0; i < 4; ++i) {
        string word;
        getline(cin, word);
        words[i] = make_pair(word, 'A' + i);
    }

    sort(words.begin(), words.end());
    
    for (const auto& word : words) {
        cout << word.second << " ";
    }
    cout << endl;

    return 0;
}
