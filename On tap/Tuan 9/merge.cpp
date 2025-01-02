int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* mergedArr = new int[lenArr1 + lenArr2];
    int i = 0, j = 0, k = 0;
    bool isAscending = (lenArr1 > 1 && firstArr[0] < firstArr[1]) 
    || (lenArr2 > 1 && secondArr[0] < secondArr[1]);
    
    while (i < lenArr1 && j < lenArr2) {
        if ((isAscending && firstArr[i] <= secondArr[j]) || (!isAscending && firstArr[i] >= secondArr[j])) {
            mergedArr[k++] = firstArr[i++];
        } else {
            mergedArr[k++] = secondArr[j++];
        }
    }
    
    while (i < lenArr1) {
        mergedArr[k++] = firstArr[i++];
    }
    while (j < lenArr2) {
        mergedArr[k++] = secondArr[j++];
    }
    return mergedArr;
}

