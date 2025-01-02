#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other)
    {
        int hourDif, minuteDif, secondDif;
        int totalSecondDif = abs(other.second - second + 60 * (other.minute - minute) + 3600 * (other.hour - hour));
        secondDif = totalSecondDif % 60;
        totalSecondDif -= secondDif;
        minuteDif = (totalSecondDif % 3600) / 60;
        totalSecondDif -= minuteDif;
        hourDif = totalSecondDif / 3600;
        
        if (hourDif < 10){
            cout << '0' << hourDif << ':';
        }
        else{
            cout << hourDif << ':';
        }
        if (minuteDif < 10){
            cout << '0' << minuteDif << ':';
        }
        else{
            cout << minuteDif << ':';
        }
        if (secondDif < 10){
            cout << '0' << secondDif << ':';
        }
        else{
            cout << secondDif;
        }
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    time1.getTimeDifference(time2);
    
    return 0;
}
