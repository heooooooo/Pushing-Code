int **getMatrix(int m, int n) {
    int **matrix = new int*[m];
    for (int i = 0; i < m; i++){
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++){
            cin >> *(*(matrix + i) + j);
        }
    }
    return matrix;
}

void putNorm(int **matrix, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int value = *(*(matrix + i) + j);
            if (value < 0) value = 0;
            cout << value;
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }
}