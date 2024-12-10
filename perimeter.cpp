#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    string path;
    cin >> path;

    ifstream file(path);
    string line;
    while (getline(file, line)) {
        if (line.find("TYPE: SQUARE") != string::npos) {
            getline(file, line);
            double side = stod(line.substr(line.find("SIDE: ") + 6));
            double perimeter = 4 * side;
            cout << fixed << setprecision(2) << perimeter << endl;
        } else if (line.find("TYPE: RECTANGLE") != string::npos) {
            getline(file, line);
            size_t widthPos = line.find("WIDTH: ") + 7;
            size_t heightPos = line.find("HEIGHT: ") + 8;
            double width = stod(line.substr(widthPos, line.find(" ", widthPos) - widthPos));
            double height = stod(line.substr(heightPos));
            double perimeter = 2 * (width + height);
            cout << fixed << setprecision(2) << perimeter << endl;
        } else if (line.find("TYPE: CIRCLE") != string::npos) {
            getline(file, line);
            double radius = stod(line.substr(line.find("RADIUS: ") + 8));
            double perimeter = 2 * M_PI * radius;
            cout << fixed << setprecision(2) << perimeter << endl;
        }
    }
}
