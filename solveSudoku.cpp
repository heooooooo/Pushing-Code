#include <iostream>
#include <vector>
#include <conio.h>
#include <unistd.h>

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

void printGrid(vector<vector<int>> grid){
	clrscr();
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
}

void solve(vector<vector<int>> &grid){
	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			if (grid[i][j] == 0){
				for (int n = 1; n <= 9; n++){
					if (isValidPlace(grid, i, j, n)){
						grid[i][j] = n;
						usleep(1000);
						solve(grid);
						grid[i][j] = 0;
					}
				}
				return;
			}
		}
	}
	printGrid(grid);
}

int main(){
    vector <vector<int>> grid(9, vector <int>(9));

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> grid[i][j];
        }
    }
    
    solve(grid);
    //printGrid(grid);
}
