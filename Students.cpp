#include "Students.h"

Students::Students() {
    Name = "Unknown";
    Roll_no = "Nill";
    age = 0;
    gpa = 0.0;
}

Students::Students(string n, string r, int a, float g) {
    Name = n;
    Roll_no = r;
    age = a;
    gpa = g;
}

void Students::Set(string nam, string ro, int ag, float g) {
    Name = nam;
    Roll_no = ro;
    age = ag;
    gpa = g;
}

string Students::grading() {
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

void Students::display() {
    cout << "Name:\t" << Name << endl;
    cout << "Roll number:\t" << Roll_no << endl;
    cout << "Age:\t" << age << endl;
    cout << "GPA:\t" << gpa << endl;
    cout << "Grade:\t" << grading() << endl;
}

Students::~Students() {
    cout << "destroyed!" << endl;
}
