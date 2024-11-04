#include <iostream>
using namespace std;

void countOddDigits(int n){
    int countOdds = 0, countEvens = 0;
    int lastDigit;
    
    while (n != 0){
        lastDigit = n % 10;
        n -= lastDigit;
        n /= 10;
        
        if (lastDigit % 2 == 0){
            countOdds += 1;
        }
        else{
            countEvens += 1;
        }
    }
    cout << countOdds << " " << countEvens << endl;
}

int main(){
    int T, n;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> n;
        countOddDigits(n);
    }
}