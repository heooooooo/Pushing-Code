#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int &a, int &b){
    a += b;
    b = a - b;
    a -= b;
}

void arraySort(vector<int> &array, int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] > array[j]){
                swap(array[i], array[j]);
            }
        }
    }
}

int findRadius(vector<int>& houses, vector<int>& heaters) {
    int minRadius = 0;
    int numberOfHeater = heaters.size();
    int numberOfHouse = houses.size();
    
    arraySort(houses, numberOfHouse);
    arraySort(heaters, numberOfHeater);

    if (numberOfHeater == 1){
        minRadius = max(abs(heaters[0] - houses[0]), abs(heaters[0] - houses[numberOfHouse - 1]));
    }
    else{
        for (int house : houses){
            int j = 0;
            int min = abs(heaters[j] - house);
            while ((j < numberOfHeater - 1) && (abs(heaters[j + 1] - house) < (abs(heaters[j] - house)))){
                min = abs(heaters[j + 1] - house);
                j++;
            }
            minRadius = max(min, minRadius);
        }
    }

    return minRadius;
}