#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector <vector<int>> matrix(n, vector<int>(n));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int k, kToOther = 0, otherTok = 0;
    cin >> k;
    
    for (int i = 0; i < n; i++){
        if (matrix[k - 1][i]){
            kToOther++;
        }
        if (matrix[i][k - 1]){
            otherTok++;
        }
    }
    
    cout << kToOther << " " << otherTok;
}