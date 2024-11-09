#include <iostream>

using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

bool isPrime(int num){
    if (num <= 1){
        return false;
    }
    if (num == 2 || num == 3){
        return true;
    }
    
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    for (int i = 0; i < n - 1 ; i++){
        for (int j = i + 1; j < n; j++){
            if (isPrime(array[i])){
                if (array[i] > array[j]){
                    swap(array[i], array[j]);
                }
            }
        }
    }
    
    for (int num : array){
        cout << num << " ";
    }
}