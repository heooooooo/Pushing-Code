#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    for (double i = a; i <= b; i++){
        cout<<i<<" ";
        double cel;
        cel = (i - 32) * 5/9;
        cout<<setprecision(2)<<fixed<<cel<<" ";
        cout<<setprecision(2)<<fixed<<cel + 273.15<<endl;
    }
}