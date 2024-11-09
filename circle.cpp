#include <iostream>
#include <string>

using namespace std;

bool circle(string moves){
    int x = 0, y = 0;
    
    for (char move : moves){
        switch (move){
            case 'R':
                x += 1;
                break;
            case 'L':
                x -= 1;
                break;
            case 'U':
                y += 1;
                break;
            case 'D':
                y -= 1;
                break;
        }
    }
    return (x == 0 && y == 0);
}
