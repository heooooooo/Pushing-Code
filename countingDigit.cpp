#include <iostream>

using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    while (n % 10 != 0){
        n -= n % 10;
        n /= 10;
        count += 1;
    }
    cout << count;
}