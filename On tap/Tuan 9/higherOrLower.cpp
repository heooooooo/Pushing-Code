bool* isHigher (int* arr, int num, int thres){
    bool* out = new bool[num];
    for (int i = 0; i < num; i++){
        out[i] = arr[i] >= thres;
    }
    
    return out;
}