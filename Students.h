#include <iostream>
using namespace std;

class Students {
public:
    string Name;
    string Roll_no;
    int age;
    float gpa;

    Students();
    Students(string n, string r, int a, float g);

    void Set(string nam, string ro, int ag, float g);
    string grading();
    void display();

    ~Students();
};

