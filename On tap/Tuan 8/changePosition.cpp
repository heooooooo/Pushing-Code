#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b){
    a += b;
    b = a - b;
    a -= b;
}

int main(){
    int m, n;
    cin >> m >> n;
    
    vector <vector <int>> matrix(m, vector <int> (n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int i1, j1, i2, j2;
    cin >> i1 >> j1 >> i2 >> j2;
    swap(matrix[i1 - 1][j1 - 1], matrix[i2 - 1][j2 - 1]);
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}