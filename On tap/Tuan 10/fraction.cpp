#include <iostream>
using namespace std;

struct fraction{
    int numerator, denominator;
    fraction (int _numerator, int _denominator){
        numerator = _numerator;
        denominator = _denominator;
    }
    
    int GCD(){
        int nume = numerator, deno = denominator;
        while (nume != deno){
            if (nume > deno){
                nume -= deno;
            }
            else{
                deno -= nume;
            }
        }
        return nume;
    }
    
    void minimalist(){
        int divide = GCD();
        numerator /= divide;
        denominator /= divide;
        cout << numerator << '/' << denominator;
    }
    
};

fraction addconst (const fraction &a, const fraction &b){
    fraction result(a.numerator * b.denominator + b.numerator * a.denominator, a.denominator * b.denominator);
    return result;
} 

int main() {
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    fraction frac1(num1, num2), frac2(num3, num4);
    addconst(frac1, frac2).minimalist();
}
