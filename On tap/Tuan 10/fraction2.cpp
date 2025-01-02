#include <iostream>
using namespace std;

struct Fraction {
    int a, b;
    Fraction() : a(0), b(0) {}

    Fraction(int numerator, int denominator) : a(numerator), b(denominator) {}

    double value() const {
        return b != 0 ? (double)(a) / b : -1;
    }

    int gcd(int x, int y) const {
        return y == 0 ? x : gcd(y, x % y);
    }

    void print() const {
        int gcdValue = gcd(a, b);
        cout << a / gcdValue << '/' << b / gcdValue << endl;
    }
};

Fraction add(Fraction x, Fraction y) {
    int numerator = x.a * y.b + y.a * x.b;
    int denominator = x.b * y.b;
    return Fraction(numerator, denominator);
}
