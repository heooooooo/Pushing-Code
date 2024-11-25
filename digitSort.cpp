#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string n;
        getline(cin, n);
        sort(n.begin(), n.end());
        cout << n << endl;
    }
}
