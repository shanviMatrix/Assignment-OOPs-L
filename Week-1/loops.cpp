#include <iostream>
using namespace std;

int main()
{
    cout << "For loop:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    int i = 0;

    for (; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    i = 0;

    for (; i < 10;)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    cout << "While loop:" << endl;

    i = 0;

    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;

    cout << "While loop without initialization:" << endl;

    i = 0;

    while (i < 10)
    {
        cout << i << " ";
        i++;
    }

    cout << endl << endl;

    cout << "Do-while loop:" << endl;

    i = 0;

    do
    {
        cout << i << " ";
        i++;
    }
    while (i < 10);

    cout << endl;

    return 0;
}