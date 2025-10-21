#include <iostream>
using namespace std;

class Students {
public:
    string Name;
    string Roll_no;
    int age;
    float gpa;


    Students() {
        Name = "Unknown";
        Roll_no = "Nill";
        age = 0;
        gpa = 0.0;
    }


    Students(string n, string r, int a, float g) {
        Name = n;
        Roll_no = r;
        age = a;
        gpa = g;
    }


    void Set(string nam, string ro, int ag, float g) {
        Name = nam;
        Roll_no = ro;
        age = ag;
        gpa = g;
    }


    string grading() {
        if (gpa >= 3.0 && gpa <= 4.0)
            return "A";
        else if (gpa >= 2.5 && gpa < 3.0)
            return "B";
        else if (gpa >= 2.0 && gpa < 2.5)
            return "C";
        else if (gpa > 0 && gpa < 2.0)
            return "F";
        else
            return "Invalid GPA";
    }


    void display() {
        cout << "Name:\t" << Name << endl;
        cout << "Roll number:\t" << Roll_no << endl;
        cout << "Age:\t" << age << endl;
        cout << "GPA:\t" << gpa << endl;
        cout << "Grade:\t" << grading() << endl;

    }

   
    ~Students() {
        cout << "destroyed!" << endl;
    }
};

int main() {
    Students s("Kashaf", "33", 20, 3.1);
    Students s1("Ali", "37", 20, 2.5);
    Students s2("Ahmed", "39", 25, 2.0);
    Students s3;

    s.display();
    s1.display();
    s2.display();

    return 0;
}