//An academic portal tracks student performance through a three-tier class hierarchy before determining final graduation honors.
#include <iostream>
using namespace std;

class Student {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }
};

class Performance : public Student {
protected:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }
};

class Graduation : public Performance {
public:
    void displayHonors() {
        cout << "Student: " << name << endl;
        cout << "Marks: " << marks << endl;

        if (marks >= 90)
            cout << "Graduation Honors: Distinction" << endl;
        else if (marks >= 75)
            cout << "Graduation Honors: First Class" << endl;
        else
            cout << "Graduation Honors: Pass" << endl;
    }
};

int main() {
    Graduation g;

    g.setName("Rahul");
    g.setMarks(92);
    g.displayHonors();

    return 0;
}