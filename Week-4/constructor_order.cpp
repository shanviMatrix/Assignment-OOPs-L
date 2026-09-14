#include <iostream>
using namespace std;

class College
{
protected:
    char collegeName[50];

public:
    College()
    {
        cout<<"Constructor called"<<endl;

        cout<<"Enter your college name: ";
        cin>>collegeName;
    }
};

class Department:public College
{
    char departmentName[50];

public:
    Department()
    {
        cout<<"Department constructor called"<<endl;

        cout<<"Enter department name: ";
        cin>>departmentName;
    }

    void display()
    {
        cout<<"College: "<<collegeName<<endl;
        cout<<"Department: "<<departmentName<<endl;
    }
};

int main()
{
    Department d;

    d.display();

    return 0;
}