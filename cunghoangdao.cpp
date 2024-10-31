#include <iostream>

using namespace std;

int main(){
    int date, month;
    cin >> date >> month;
    switch (month){
        case 1:
            if (date <= 19){
                cout<<"Ma Ket";
            }
            else{
                cout<<"Bao Binh";
            }
            break;
        case 2:
            if (date <= 18){
                cout<<"Bao Binh";
            }
            else{
                cout<<"Song Ngu";
            }
            break;
        case 3:
            if (date <= 20){
                cout<<"Song Ngu";
            }
            else{
                cout<<"Bach Duong";
            }
            break;
        case 4:
            if (date <= 19){
                cout<<"Bach Duong";
            }
            else{
                cout<<"Kim Nguu";
            }
            break;
        case 5:
            if (date <= 20){
                cout<<"Kim Nguu";
            }
            else{
                cout<<"Song Tu";
            }
            break;
        case 6:
            if (date <= 21){
                cout<<"Song Tu";
            }
            else{
                cout<<"Cu Giai";
            }
            break;
        case 7:
            if (date <= 22){
                cout<<"Cu Giai";
            }
            else{
                cout<<"Su Tu";
            }
            break;
        case 8:
            if (date <= 22){
                cout<<"Su Tu";
            }
            else{
                cout<<"Xu Nu";
            }
            break;
        case 9:
            if (date <= 22){
                cout<<"Xu Nu";
            }
            else{
                cout<<"Thien Binh";
            }
            break;
        case 10:
            if (date <= 23){
                cout<<"Thien Binh";
            }
            else{
                cout<<"Thien Yet";
            }
            break;
        case 11:
            if (date <= 22){
                cout<<"Thien Yet";
            }
            else{
                cout<<"Nhan Ma";
            }
            break;
        case 12:
            if (date <= 21){
                cout<<"Nhan Ma";
            }
            else{
                cout<<"Ma Ket";
            }
            break;
    }
}