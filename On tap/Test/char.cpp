#include <iostream>
#include <string>

using namespace std;

int main(){
    string s; getline(cin, s);
    int count[26] = {0}; // Tạo mảng độ lớn 26 tương ứng 26 ký tự thường

    for (char ch : s){
        count[ch - 'a']++; // Duyệt từng ký tự trong s và tăng vị trí tương ứng của kí tự đó lên 1 đơn vị
    }
    // Ví dụ kí tự ch = b = 98 thì ch - 'a' tương đương với 98 - 97 = 1 vị trí index = 1
    for (int i = 0; i < 26; i++) {
        if (count[i]) {
            char out = 'a' + i;
            cout << out << ":" << count[i] << endl;
        }
    }
}


