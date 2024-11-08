#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> array(n);
    vector<int> order;
    int size = 0;
    
    for (int i = 0; i < n; i++){
        cin >> array[i];
        
        if (array[i] > size){
            size = array[i];
        }
    }
    
    vector<int> count(size + 1, 0);

    for (int i = 0; i < n; i++){
        if (count[array[i]] == 0){
            order.push_back(array[i]);
        }
        count[array[i]]++;
    }
    
    for (int num : order){
        cout << num << " " << count[num] << endl;
    }
}
