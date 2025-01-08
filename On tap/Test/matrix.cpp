#include <iostream>
#include <vector>

using namespace std;

template <class T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = a;
}

bool isUniform(int matrix[10][10], int x, int y) {
    int firstValue = matrix[x][y];
    return matrix[x][y + 1] == firstValue &&
           matrix[x + 1][y] == firstValue &&
           matrix[x + 1][y + 1] == firstValue;
}

void findSubMatrix(int a[10][10], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (isUniform(a, i, j)){
                a[i][j] = 2;
                cout << i << " " << j << endl;
            }
        }
    }
}

void sortBySum(int a[10][10], int n){
    vector<pair<int, int>> indices;
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (a[i][j] == 2){
                indices.push_back({i, j});
            }
        }
    }

    int size = indices.size();
    for (int i = 0; i < size - 1; i++){
        for (int j =0; j < size - i - 1; j++){
            int sum1 = indices[j].first + indices[j].second;
            int sum2 = indices[j + 1].first + indices[j + 1].second;
            if (sum1 > sum2){
                swap(indices[j], indices[j + 1]);
            }
        }
    }

    for (auto& index : indices){
        cout << index.first << " " << index.second << endl;
    }
}

int main() {
    int n;
    int matrix[10][10];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    findSubMatrix(matrix, n);

    cout << endl;

    sortBySum(matrix, n);

}
