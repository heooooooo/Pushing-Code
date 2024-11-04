#include <iostream>

using namespace std;

bool isPrime(int n){
    if (n <= 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

void primeDigits(int n){
    int lastDigit, count = 0;
    
    while (n != 0){
        lastDigit = n % 10;
        n -= lastDigit;
        n /= 10;
        if (isPrime(lastDigit)){
            count += 1;
        }
    }
    cout << count << endl;
}

int main(){
    int T, n;
    cin >> T;
    
    for (int i = 0; i < T; i++){
        cin >> n;
        primeDigits(n);
    }
}