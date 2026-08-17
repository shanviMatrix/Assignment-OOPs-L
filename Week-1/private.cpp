#include <iostream>
using namespace std;

class Demo
{
private:
    void privateFunction()
    {
        cout << "Private function called." << endl;
    }

public:
    void publicFunction()
    {
        cout << "Public function called." << endl;
        privateFunction();
    }
};

int main()
{
    Demo obj;

    obj.publicFunction();

    return 0;
}