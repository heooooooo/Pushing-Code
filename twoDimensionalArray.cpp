#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n, Q, row, col;
    cin >> m >> n >> Q;
    
    vector < vector<int> > matrix(m,vector<int>(n));
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < Q; i ++){
        cin >> row >> col;
        cout << matrix[row - 1][col - 1] << endl;
    }
}