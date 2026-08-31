#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

void test()
{
    Demo b;
    Demo c;
}

int main()
{
    cout << "Inside main" << endl;

    Demo a;

    cout << "Calling function" << endl;
    test();

    cout << "Back to main" << endl;

    return 0;
}