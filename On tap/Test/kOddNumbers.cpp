#include <iostream>

using namespace std;

int countOddDigit(int num){
    int count = 0;

    while (num > 0){
        int digit = num % 10;
        if (digit % 2 != 0) count++;
        num /= 10;
    }
    return count;
}

int kOddNumbers(int *a, int n, int k){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (countOddDigit(a[i]) == k) count++;
    }

    return count;
}

int main(){
    int n, k; cin >> n >> k;

    int *a = new int(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    cout << kOddNumbers(a, n, k);
}