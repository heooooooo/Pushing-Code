#include <iostream>
#include <vector>

using namespace std;

bool isValidInRow(const vector<vector<int>>& grid, int row, int num){
    for (int col = 0; col < 9; col++){
        if (grid[row][col] == num){
            return false;
        }
    }
    return true;
}

bool isValidInCol(const vector<vector<int>>& grid, int col, int num){
    for (int row = 0; row < 9; row++){
        if (grid[row][col] == num){
            return false;
        }
    }
    return true;
}

bool isValidInBox(const vector<vector<int>>& grid, int startRow, int startCol, int num){
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 3; col++){
            if (grid[row + startRow][col + startCol] == num){
                return false;
            }
        }
    }
    return true;
}

bool isValidPlace(const vector<vector<int>>& grid, int row, int col, int num){
    return isValidInRow(grid, row, num) &&
           isValidInCol(grid, col, num) &&
           isValidInBox(grid, row - row % 3, col - col % 3, num);
}

int main(){
    vector <vector<int>> grid(9, vector <int>(9));
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> grid[i][j];
        }
    }
    
    int num, i, j;
    cin >> num >> i >> j;
    if (num < 1 || num > 9){
        cout << "Invalid number.";
    }
    else if (i < 1 || i > 9 || j < 1 || j > 9){
        cout<< "Invalid place.";
    }
    else if (grid[i - 1][j - 1] != 0){
        cout << "Invalid place.";
    }
    else if (isValidPlace(grid, i - 1, j - 1, num)){
        cout << "Valid place.";
    }
    else{
        cout << "Invalid place.";
    }
}