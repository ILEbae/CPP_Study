#include<iostream>
using namespace std;

class Person{

public:
    void sleep() { cout << " Sleep " <<endl;}

};

class student : public Person
{
public:
    void Study() { cout<<" Study "<<endl;}
};

class PartTimeStudent: public student{
public:
    void Work() { cout << " Work "<<endl;}
};

int main()
{
    PartTimeStudent *p = new PartTimeStudent;
    p->sleep();
    p->Study();
    p->Work();

    student *q = new PartTimeStudent;
    p->sleep();
    p->Study();
    p->Work();


    return 0;
}