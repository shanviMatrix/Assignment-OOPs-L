#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks;

public:
    Student()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }

    friend void display(Student s);
};

void display(Student s)
{
    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}

int main()
{
    Student s;
    display(s);

    return 0;
}