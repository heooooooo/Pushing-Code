#include <iostream>
using namespace std;

int hammingDistance(int x, int y) {
    int xorResult = x ^ y;
    #xorResult = 101 ^ 110 = 011
    int distance = 0;
    while (xorResult) {
        distance += xorResult & 1; // Check the last bit
        xorResult >>= 1; // 
    }
    return distance;
}
