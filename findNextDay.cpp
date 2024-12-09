#include <iostream>
using namespace std;

struct date{
    int day, month, year;
};

bool isValidDate(const date &d){
    if (d.year >= 1 && d.year <= 2024){
        if (d.month >= 1 && d.month <= 12){
            if (d.month == 1 || d.month == 3 || d.month == 5 || d.month == 7 || d.month == 8 || d.month == 10 || d.month == 12){
                if (!(d.day >= 1 && d.day <= 31)){
                    return false;
                }
            }
            else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11){
                if (!(d.day >= 1 and d.day <= 30)){
                    return false;
                }
            }
            else{
                if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)){
                    if (!(d.day >= 1 && d.day <= 29)){
                        return false;
                    }
                }
                else{
                    if (!(d.day >= 1 && d.day <= 28)){
                        return false;
                    }
                }
            }
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    return true;
}

date getNextDay(date &currentDate){
    date nextDay;
    nextDay.day = currentDate.day;
    nextDay.month = currentDate.month;
    nextDay.year = currentDate.year;
    if (isValidDate(currentDate)){
        if (currentDate.year > 2000 && currentDate.year <= 2024){
            if (currentDate.month == 1 || currentDate.month == 3 || currentDate.month == 5 || 
            currentDate.month == 7 || currentDate.month == 8 || currentDate.month == 10 || currentDate.month == 12){
                if (currentDate.day == 31){
                    nextDay.day = 1;
                    nextDay.month++;
                }
                else{
                    nextDay.day++;
                }
            }
            else if (currentDate.month == 4 || currentDate.month == 6 || 
            currentDate.month == 9 || currentDate.month == 11){
                if (currentDate.day == 30){
                    nextDay.day = 1;
                    nextDay.month++;
                }
                else{
                    nextDay.day++;
                }
            }
            else{
                if ((currentDate.year % 4 == 0 && currentDate.year % 100 != 0) || 
                (currentDate.year % 400 == 0)){
                    if (currentDate.day == 29){
                        nextDay.day = 1;
                        nextDay.month++;
                    }
                    else{
                        nextDay.day++;
                    }
                }
                else{
                    if (currentDate.day == 28){
                        nextDay.day = 1;
                        nextDay.month++;
                    }
                    else{
                        nextDay.day++;
                    }
                }
            }
        }
    }
    else{
        nextDay.day = -1;
    }

    return nextDay;
}

int main() {
    date d, nextDay;
    char a, b;
    cin >> d.day >> a >> d.month >> b >> d.year;
    nextDay = getNextDay(d);
    if (nextDay.day != -1){
        if (nextDay.day < 10){
            cout << '0' << nextDay.day << '/';
        }
        else{
            cout << nextDay.day << '/';
        }
        if (nextDay.month < 10){
            cout << '0' << nextDay.month << '/';
        }
        else{
            cout << nextDay.month << '/';
        }
        cout << nextDay.year;
    }
    else{
        cout << "INVALID";
    }
}
