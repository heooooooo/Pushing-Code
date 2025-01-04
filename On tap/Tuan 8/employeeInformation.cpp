#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, count = 0;
    cin >> n;
    
    vector <vector<int>> database(n, vector<int>(3));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> database[i][j];
        }
    }
    
    for (int i = 0; i < n; i++){
        if (!database[i][0] && database[i][1] > 30 && database[i][2]){
            count++;
        }
    }
    
    cout << count;
}