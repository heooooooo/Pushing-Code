#include <iostream>

using namespace std;

void checkOddEven(int n){
    int countOdds = 0, countEvens = 0, lastDigit;
    
    while (n != 0){
        lastDigit = n % 10;
        n -= lastDigit;
        n /= 10;
        
        if (lastDigit % 2 == 0){
            countEvens += 1;
        }
        else{
            countOdds += 1;
        }
    }
    
    if (countOdds != 0 && countEvens != 0){
        cout << "no" << endl;
    }
    else{
        cout << "yes" << endl;
    }
}

int main(){
    int T, n;
    cin >> T;
    
    for (int i = 0; i < T; i++){
        cin >> n;
        checkOddEven(n);
    }
}