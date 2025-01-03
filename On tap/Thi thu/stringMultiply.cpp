#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int b;
    cin >> a >> b;

    int carry = 0;
    string result = "";

    for (int i = a.length() - 1; i >= 0; i--) {
        int product = (a[i] - '0') * b + carry;
        result = (char)(product % 10 + '0') + result;
        carry = product / 10;
    }

    if (carry > 0) {
        result = (char)(carry + '0') + result;
    }

    cout << result << endl;
}
