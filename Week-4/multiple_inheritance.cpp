#include <iostream>
using namespace std;

class Academic
{
protected:
    int marks;
};

class Sports
{
protected:
    int sportsScore;
};

class Result:public Academic,public Sports
{
public:
    void accept()
    {
        cout<<"Enter academic marks: ";
        cin>>marks;

        cout<<"Enter sports score: ";
        cin>>sportsScore;
    }

    void display()
    {
        cout<<"Academic marks: "<<marks<<endl;
        cout<<"Sports score: "<<sportsScore<<endl;
        cout<<"Total score: "<<marks+sportsScore<<endl;
    }
};

int main()
{
    Result r;

    r.accept();
    r.display();

    return 0;
}