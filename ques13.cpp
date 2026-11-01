#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getPerson()
    {
        cin>>name>>age;
    }
};

class Student : public Person
{
public:
    float marks;

    void getMarks()
    {
        cin>>marks;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks;
    }
};

int main()
{
    Student s;

    s.getPerson();
    s.getMarks();
    s.display();

    return 0;
}