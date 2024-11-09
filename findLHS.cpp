int findLHS(int arr[], int n){
    int max = 0;
    for (int i = 0; i < n - 1; i++){
        int count1 = 1;
        int count2 = 1;
        int first = arr[i];
        for (int j = i; j < n; j++){ 
            if (arr[j + 1] - first <= 1 && arr[j + 1] >= first){
                count1++;
            }
            if (arr[j + 1] - first >= -1 && arr[j + 1] <= first){
                count2++;
            }
        }
        if (count1 > max){
            max = count1;
        }
        if (count2 > max){
            max = count2;
        }
    }
    
    return max;
}