#include <iostream>
using namespace std;

class Person
{
protected:
    char name[50];
    int age;
};

class Student:public Person
{
    int rollNo;
    char course[50];

public:
    void accept()
    {
        cout<<"Enter name: ";
        cin>>name;

        cout<<"Enter age: ";
        cin>>age;

        cout<<"Enter roll number: ";
        cin>>rollNo;

        cout<<"Enter course: ";
        cin>>course;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Course: "<<course<<endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}