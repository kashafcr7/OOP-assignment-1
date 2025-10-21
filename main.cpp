#include "Students.h"

int main() {
    Students s("Kashaf", "33", 20, 3.1);
    Students s1("Alyan", "37", 20, 2.5);
    Students s2("Ahmed", "39", 25, 2.0);
    Students s3;

    s.display();
    s1.display();
    s2.display();

    return 0;
}
