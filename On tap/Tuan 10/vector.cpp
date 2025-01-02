#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    void printVector(){
        cout << x << " " << y << endl;
    }
};

Vector addVector(const Vector &v1, const Vector &v2)
{
    Vector sum(0, 0);
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    return sum;
}

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    Vector v1(x1, y1), v2(x2, y2);
    addVector(v1, v2).printVector();
}