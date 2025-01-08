#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    bool isTrue = false;

    cout << n << " ";
    if (n % 5 == 0 || n > 50) isTrue = true;

    if (isTrue) cout << "YES";
    else cout << "NO";
}