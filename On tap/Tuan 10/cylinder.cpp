#include <iostream>
#include <iomanip>
using namespace std;

struct cylinder{
    int radius,high;
};

//Hàm tính diện tích bề mặt, 
//hàm này không làm thay đổi thông số của hình trụ ban đầu 
double getSurfaceArea(const cylinder &c){
    return 2 * 3.14 * c.radius * (c.radius + c.high);
}

//Hàm tính thể tích hình trụ 
//hàm này không làm thay đổi thông số của hình trụ ban đầu
double getVolume(const cylinder &c){
    return 3.14 * c.radius * c.radius * c.high;
}

int main() {
    cylinder c;
    cin >> c.radius >> c.high;
    cout << setprecision(2) << fixed << getSurfaceArea(c) << " " << getVolume(c);
}
