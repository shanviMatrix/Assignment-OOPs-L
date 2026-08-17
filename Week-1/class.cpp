#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void showPrivate()
    {
        cout << "This is a private function." << endl;
    }

public:
    void addDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> currentCGPA;

        showPrivate();
    }

    void updateDetails()
    {
        cout << "Enter new name: ";
        cin >> name;

        cout << "Enter new degree: ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
    }

    void updateHostel()
    {
        cout << "Enter new hostel: ";
        cin >> hostel;
    }

    void displayDetails()
    {
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << currentCGPA << endl;
    }
};

int main()
{
    Student student;

    student.addDetails();
    student.displayDetails();

    return 0;
}