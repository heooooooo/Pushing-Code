#include <vector>

using namespace std;

bool isSelfDividing(int num){
    int temp = num;
    while (num > 0){
        int digit = num % 10;
        if (digit == 0 || temp % digit != 0){
            return false;
        }
        num /= 10;
    }
    return true;
}

int* selfDividingNumbers(int left, int right, int* returnSize){
    vector <int> results;
    for (int num = left; num <= right; num++){
        if (isSelfDividing(num)){
            results.push_back(num);
        }
    }
    
    *returnSize = results.size();
    int * resultArray = new int[*returnSize];
    for (int i = 0; i < *returnSize; i++){
        resultArray[i] = results[i];
    }
    return resultArray;
}