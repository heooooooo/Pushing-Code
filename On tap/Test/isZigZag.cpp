#include <iostream>

using namespace std;

bool isZicZac(int *a, int n){
    bool ziczac = true;

    for (int i = 1; i < n - 1; i++){
        if ((a[i - 1] < a[i] && a[i] < a[i + 1]) || (a[i - 1] > a[i] && a[i] > a[i + 1])) return false;
    }
    return true;
}

int main(){
    int n; cin >> n;
    int *a = new int(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << isZicZac(a, n);
}