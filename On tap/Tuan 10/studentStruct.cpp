#include <iomanip>
#include <vector>

using namespace std;

struct Student  {
    string name;
    double gpa;
    
    Student() : name(""), gpa(0.0) {}
    Student(string _name) : name(_name), gpa(0.0) {}
    Student(string _name, double _gpa) : name(_name), gpa(_gpa) {}
    

    string grade() {
        if (gpa >= 3.6){
            return "xuat sac" ;
        }
        else if (gpa >= 3.2 && gpa < 3.6){
            return "gioi";
        }
        else if (gpa >= 2.5 && gpa < 3.2){
            return "kha";
        }
        else{
            return "khong du dieu kien";
        }
    }
    
    void print() {
        cout << name << " " << fixed << setprecision(1) << gpa << " " << grade() << endl;
    }
};

Student get(int n) {
    vector<Student> students;
    for (int i = 0; i < n; i++){
        string name;
        double gpa;
        cin >> name >> gpa;
        students.push_back(Student(name, gpa));
    }
    
    Student topStudent = students[0];
    for (int i = 1; i < n; i++){
        if (students[i].gpa > topStudent.gpa){
            topStudent = students[i];
        }
    }
    return topStudent;
}