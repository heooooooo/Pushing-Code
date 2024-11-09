#include <iostream>

using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    int n;
    cin >> n;
    
    int low = 0, high = n-1;
    
    int array[n];
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    while (low <= high){
        if (array[low] % 2 != 0 && array[high] % 2 == 0){
            swap(array[low], array[high]);
            low++;
            high--;
        }
        if (array[low] % 2 == 0){
            low++;
        }
        if (array[high] % 2 != 0){
            high--;
        }
    }
    
    for (int i = 0; i < n - 1 ; i++){
        for (int j = i + 1; j < n; j++){
            if (array[i] % 2 == 0 && array[j] % 2 == 0){
                if (array[i] > array[j]){
                    swap(array[i], array[j]);
                }
            }
            if (array[i] % 2 != 0 && array[j] % 2 != 0){
                if (array[i] < array[j]){
                    swap(array[i], array[j]);
                }
            }
        }
    }
    
    for (int num : array){
        cout << num << " ";
    }
}