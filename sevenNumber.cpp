#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> positions;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == 7) {
            positions.push_back(i);
        }
    }
    
    if (positions.empty()) {
        cout << "Not found" << endl;
    } else {
        for (int i = positions.size() - 1; i >= 0; --i) {
            cout << positions[i] << " ";
        }
        cout << endl;
    }

}
