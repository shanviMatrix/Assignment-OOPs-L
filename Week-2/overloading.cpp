#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    float cgpa;

public:
    Student()
    {
        name = "Unknown";
        rollNo = 0;
        cgpa = 0;
    }

    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cgpa = 0;
    }

    Student(string n, int r, float c)
    {
        name = n;
        rollNo = r;
        cgpa = c;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Rahul", 102);
    Student s3("Aman", 103, 8.5);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}