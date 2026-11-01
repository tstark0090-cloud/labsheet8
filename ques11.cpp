#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    double price;

    void display()
    {
        cout<<"Brand: "<<brand
            <<", Price: "<<price<<endl;
    }
};

int main()
{
    Car c1, c2;

    c1.brand="Toyota";
    c1.price=1000000;

    c2.brand="Honda";
    c2.price=1200000;

    c1.display();
    c2.display();

    return 0;
}