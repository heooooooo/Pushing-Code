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
    
    if ((x >= 0 && x <= m - 1)){
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if (matrix[x][i] > matrix[x][j]){
                    swap(matrix[x][i], matrix[x][j]);
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