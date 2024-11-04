#include <iostream>

using namespace std;

void printArrow(int n, bool left){
    int temp = n;
    if (left) {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < temp - 1; j++){
                cout << " ";
            }
            for (int j = 0; j < temp; j++){
                cout << "*";
            }
            temp -= 1;
            cout << endl;
        }
        temp = 2;
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < temp - 1; j++){
                cout << " ";
            }
            for (int j = 0; j < temp; j++){
                cout << "*";
            }
            temp += 1;
            cout << endl;
        }
    }
    else {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                cout << "  ";
            }
            for (int j = 0; j < n - i; j++){
                cout << "*";
            }
            cout << endl;
        }
        for (int i = n - 2; i >= 0; i--){
            for (int j = 0; j < i; j++){
                cout << "  ";
            }
            for (int j = 0; j < n - i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
}