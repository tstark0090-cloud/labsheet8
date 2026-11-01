#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    float marks;

public:
    void input()
    {
        cin>>name>>rollNo>>marks;
    }

    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Marks: "<<marks;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}