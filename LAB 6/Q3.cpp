//A university database system tracks TeachingAssistant records. A Teaching Assistant is both a Teacher and a Student, both of which inherit from a common root class Person.
#include <iostream>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;

public:
    void setSubject(string s) {
        subject = s;
    }

    void displayTeacher() {
        cout << "Subject: " << subject << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNo;

public:
    void setRollNo(int r) {
        rollNo = r;
    }

    void displayStudent() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class TeachingAssistant : public Teacher, public Student {
public:
    void displayTA() {
        cout << "\nTeaching Assistant Details:" << endl;
        displayName();
        displayTeacher();
        displayStudent();
    }
};

int main() {
    TeachingAssistant ta;

    ta.setName("Aman");
    ta.setSubject("Data Structures");
    ta.setRollNo(101);

    ta.displayTA();

    return 0;
}