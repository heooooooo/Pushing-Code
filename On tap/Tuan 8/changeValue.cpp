#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    
    vector <vector <int>> matrix(m, vector <int> (n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int row, col, x;
    cin >> row >> col >> x;
    matrix[row - 1][col - 1] = x;
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}