#include <iostream>

using namespace std;

int main()
{
    int *pointer = new int;
    cin >> *pointer;
    cout << *pointer;
    delete pointer;
    pointer = NULL;
    return 0;
}