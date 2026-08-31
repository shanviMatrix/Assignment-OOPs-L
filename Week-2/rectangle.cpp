#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void display()
    {
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    Rectangle r(10, 5);
    r.display();

    return 0;
}