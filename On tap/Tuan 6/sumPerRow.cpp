#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    
    vector <int> sumOfRow(m,0);
    vector <vector <int>> matrix(m, vector <int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
            sumOfRow[i] += matrix[i][j];
        }
    }
    
    for (int i = 0; i < m; i++){
        cout << sumOfRow[i] << " ";
    }
}