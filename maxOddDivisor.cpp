#include <iostream>

using namespace std;

void maxOddDivisor(int n){
    int maxOdd;
    for (int i = 1; i < n; i++){
        if (n % i == 0 && i % 2 != 0){
            maxOdd = i;
        }
    }
    
    cout << maxOdd << endl;
}

int main(){
    int T, n;
    cin >> T;
    
    for (int i = 0; i < T; i++){
        cin >> n;
        maxOddDivisor(n);
    }
}