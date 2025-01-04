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
    
    int x;
    cin >> x;
    
    if ((x >= 0 && x <= n - 1)){
        for (int i = 0; i < m - 1; i++){
            for (int j = i + 1; j < m; j++){
                if (matrix[i][x] < matrix[j][x]){
                    swap(matrix[i][x], matrix[j][x]);
                }
            }
        }
    }
    
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}