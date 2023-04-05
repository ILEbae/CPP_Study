#include<iostream>
using namespace std;

class Bus{
    char *name;
    int number;

public:
    Bus() { name = NULL;}
    Bus(char *name , int number)
    {
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name , name);

        if(number <= 0) this->number = 0;
        else this -> number = number;
    }
    ~Bus()
    {
        delete []name;
    }

    char *GetName()
    {
        return name;
    }

    void SetName(char *name){
        if(this -> name != NULL) delete []name;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    int  GetNumber(){return number;}

    int SetNumber(int number){
        if(number <= 0) return 0;

        this->number = number;
        return number;
    }
    void ShowData(){
        cout<<"(name,number) = ("<<name<<","<<number<<")"<<endl;
    }

};

int main()
{
    char name[20];
    int number;

    cout<<"Bus name: ";
    cin>>name;
    cout<<"Bus Number: ";
    cin>>number;

    Bus bus1(name,number);
    bus1.ShowData();

    return 0;
}