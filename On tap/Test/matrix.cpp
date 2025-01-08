#include <iostream>
#include <vector>

using namespace std;

template <class T> //Tạo mẫu hàm swap
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = a;
}

bool isUniform(int matrix[10][10], int x, int y) { // Kiểm tra ma trận con 2x2 có cùng màu hay không
    int firstValue = matrix[x][y];
    return matrix[x][y + 1] == firstValue &&
           matrix[x + 1][y] == firstValue &&
           matrix[x + 1][y + 1] == firstValue;
}

void findSubMatrix(int a[10][10], int n){ // Duyệt tìm ma trận con cùng màu
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (isUniform(a, i, j)){
                a[i][j] = 2; // Nếu cùng màu thì đổi giá trị góc trên bên trái thành 2
                cout << i << " " << j << endl;
            }
        }
    }
}

void sortBySum(int a[10][10], int n){
    vector<pair<int, int>> indices; // Duyệt tìm vị trí ma trận con ở trên
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - 1; j++){
            if (a[i][j] == 2){
                indices.push_back({i, j}); // Đẩy tọa độ vào vector cặp
            }
        }
    }

    int size = indices.size();
    for (int i = 0; i < size - 1; i++){ // Sắp xếp vector tọa độ
        for (int j =0; j < size - i - 1; j++){
            int sum1 = indices[j].first + indices[j].second;
            int sum2 = indices[j + 1].first + indices[j + 1].second;
            if (sum1 > sum2){
                swap(indices[j], indices[j + 1]);
            }
        }
    }

    for (auto& index : indices){ // In ra các tọa độ sau khi sắp xếp
        cout << index.first << " " << index.second << endl;
    }
}

int main() {
    int n;
    int matrix[10][10];

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j]; // Nhập ma trận 1 là trắng 0 là đen
        }
    }

    findSubMatrix(matrix, n);

    cout << endl;

    sortBySum(matrix, n);

}
