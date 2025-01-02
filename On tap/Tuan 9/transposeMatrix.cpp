int** transpose (int** matrix, int m, int n){
    int** matrix2 = new int*[n];
    for (int i = 0; i < n; i++){
        matrix2[i] = new int[m];
        for (int j = 0; j < m; j++){
            matrix2[i][j] = matrix[j][i];
        }
    }
    return matrix2;
}