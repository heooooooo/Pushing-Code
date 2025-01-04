#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    double sum = 0;
    
    vector <vector<double>> matrix(n, vector<double>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    
    int k; 
    cin >> k;
    
    for (int i = 0; i < m; i ++){
        sum += matrix[k - 1][i];
    }
    
    cout << setprecision(2) << fixed << sum;
}