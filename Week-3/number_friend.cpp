#include <iostream>
using namespace std;

class Number
{
    int a,b;

public:
    Number()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }

    friend void sum(Number n);
};

void sum(Number n)
{
    cout<<"Sum: "<<n.a+n.b;
}

int main()
{
    Number n;
    sum(n);

    return 0;
}