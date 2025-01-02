#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        if (initSecond > 60){
            initMinute += initSecond / 60;
            initSecond %= 60;
        }
        if (initMinute > 60){
            initHour += initMinute / 60;
            initMinute %= 60;
        }
        
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }

};

int checkArrivalTime(Time t1, Time t2)
{
    int timeDif = 3600 * (t1.hour - t2.hour) + 60 * (t1.minute - t2.minute) + (t1.second - t2.second);
    if (timeDif > 0){
        return -1;
    }
    else if (timeDif < 0){
        return 1;
    }
    return 0;
}

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    
    if(checkArrivalTime(time1, time2) == 1) cout << "1";
    else if(checkArrivalTime(time1, time2) ==-1) cout << "2";
    else cout << "Equal";
    
    return 0;
}
