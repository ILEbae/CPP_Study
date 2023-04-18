#include <iostream>
using namespace std;

class First{
public:
    virtual void MyFun(){
         cout<<"MyFun() from First" << endl;
    }
};

class Second: public First
{
public:
    virtual void MyFun(){
        cout<<"MyFun() from Second" << endl;
    }
};

class Third: public Second
{
public:
    virtual void MyFun(){
        cout<<"MyFun() from Third" << endl;
    }
};


int main()
{
    Third* tptr = new Third();
    Second* sptr = tptr;
    First * fptr = sptr;

    fptr -> MyFun();
    sptr -> MyFun();
    tptr -> MyFun();
}