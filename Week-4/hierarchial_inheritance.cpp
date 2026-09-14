#include <iostream>
using namespace std;

class Vehicle
{
protected:
    char brand[50];
    char model[50];
};

class Car:public Vehicle
{
    int doors;

public:
    void accept()
    {
        cout<<"Enter car brand: ";
        cin>>brand;

        cout<<"Enter car model: ";
        cin>>model;

        cout<<"Enter number of doors: ";
        cin>>doors;
    }

    void display()
    {
        cout<<"\nCar Details"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Doors: "<<doors<<endl;
    }
};

class Bike:public Vehicle
{
    int engine;

public:
    void accept()
    {
        cout<<"Enter bike brand: ";
        cin>>brand;

        cout<<"Enter bike model: ";
        cin>>model;

        cout<<"Enter engine capacity: ";
        cin>>engine;
    }

    void display()
    {
        cout<<"\nBike Details"<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Model: "<<model<<endl;
        cout<<"Engine Capacity: "<<engine<<" cc"<<endl;
    }
};

int main()
{
    Car c;
    Bike b;

    c.accept();
    c.display();

    b.accept();
    b.display();

    return 0;
}