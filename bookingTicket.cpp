#include <iostream>
#include <vector>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    
    vector <vector <int>> seats(m, vector<int>(n));
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> seats[i][j];
        }
    }
    
    int row, col;
    cin >> row >> col;
    
    if (!seats[row-1][col-1]){
        seats[row-1][col-1] = 1;
        cout << "Your seat is booked. Please complete the payment.";
    }
    else{
        cout << "Seat " << row << col << " is sold.";
    }
}