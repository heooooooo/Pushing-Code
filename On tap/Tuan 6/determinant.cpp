#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <vector <int>> matrix(3,vector<int>(3));
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }
    
    int det;
    
    det = matrix[0][0] * matrix[1][1] * matrix[2][2] + matrix[0][1] * matrix[1][2] * matrix[2][0] + matrix[0][2] * matrix [1][0] * matrix[2][1]
    - matrix [0][2] * matrix[1][1] * matrix[2][0] - matrix[0][0] * matrix[1][2] * matrix[2][1] - matrix[0][1] * matrix[1][0] * matrix[2][2];
    cout << det;
}