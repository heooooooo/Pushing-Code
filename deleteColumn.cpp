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
    
    int col;
    cin >> col;
    for (int i = 0; i < m; i++){
        for (int j = col - 1; j < n - 1; j++){
            matrix[i][j] = matrix[i][j + 1];
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0;  j < n - 1; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}