#include <iostream>
using namespace std;

class Person
{
protected:
    char name[50];
};

class Employee:public Person
{
protected:
    int employeeID;
};

class Manager:public Employee
{
    char department[50];

public:
    void accept()
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter employee ID: ";
        cin>>employeeID;

        cout<<"Enter department: ";
        cin>>department;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Employee ID: "<<employeeID<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main()
{
    Manager m;

    m.accept();
    m.display();

    return 0;
}