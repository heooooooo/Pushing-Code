#include <iostream>

using namespace std;

struct Time{
//Khởi tạo cấu trúc Time gồm 2 thành phần là hour và minute
    int hour, minute;
    Time (int initHour, int initMinute){
        hour = initHour;
        minute = initMinute;
    }
};

Time tong(const Time& tm1, const Time& tm2){
    int carry = 0;
    int minSum = tm1.minute + tm2.minute; // Cộng phút của 2 cấu trúc
    if (minSum > 60){ //Nếu tổng số phút lớn hơn 60 thì đặt carry thành 1 và tổng phút lấy phần dư ngoài 60
        minSum %= 60;
        carry = 1;
    }
    int hourSum = tm1.hour + tm2.hour + carry;

    return Time(hourSum, minSum); // Trả về cấu trúc time tương ứng
}

bool ssLonHon(const Time& tm1, const Time& tm2){
    int totalMin1 = tm1.hour * 60 + tm1.minute; 
    int totalMin2 = tm2.hour * 60 + tm2.minute;
    // So sánh tổng số phút của 2 thời giam
    return totalMin1 > totalMin2;
}

int main(){
    int h1, m1, h2, m2; cin >> h1 >> m1 >> h2 >> m2;

    Time tm1(h1, m1);
    Time tm2(h2, m2);

    Time sum = tong(tm1, tm2);
    cout << sum.hour << " " << sum.minute << endl;
    cout << boolalpha << ssLonHon(tm1, tm2);
}
