#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    
    vector <vector <int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int row;
    cin >> row;
    
    for (int i = row - 1; i < m-1; i++){
        for (int j = 0; j < n; j++){
            matrix[i][j] = matrix[i + 1][j];
        }
    }
    
    for (int i = 0; i < m - 1; i++){
        for (int j = 0; j < n; j++){
            cout << matrix [i][j] << " ";
        }
        cout << endl;
    }
}