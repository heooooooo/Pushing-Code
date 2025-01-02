int** getImage (int nRows, int nCols){
    int** image = new int*[nRows];
    for (int i = 0; i < nRows; i++){
        image[i] = new int[nCols];
        for (int j = 0; j < nCols; j++){
            cin >> image[i][j];
        }
    }
    return image;
}

void fillImage (int** image, int nRows, int nCols, int threshold){
    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < nCols; j++){
            if (image[i][j] < threshold){
                image[i][j] = 0;
            }
        }
    }
}

void print (int** image, int nRows, int nCols){
    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < nCols; j++){
            cout << image[i][j] << " ";
        }
        cout << endl;
    }
}
