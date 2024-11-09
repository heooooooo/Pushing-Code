#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> guests(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, guests[i]);
    }

    int nemoIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (guests[i] == "Nemo") {
            nemoIndex = i;
            break;
        }
    }

    if (nemoIndex != -1) {
        string beforeNemo = guests[(nemoIndex - 1 + n) % n]; 
        string afterNemo = guests[(nemoIndex + 1) % n];
        cout << beforeNemo << " and " << afterNemo << endl;
    } else {
        cout << "Nemo is not in the guest list." << endl;
    }

}
