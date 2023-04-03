#include <iostream>
using namespace std;

class NameCard{
    char *name,*phone,*address,*position;

public:
    NameCard(const char *n,const char*a,const char*p,const char*po){
        name = new char[strlen(n)+1];
        phone = new char[strlen(p)+1];
        address=new char[strlen(a)+1];
        position = new char[strlen(po)+1];

        strcpy(name,n);
        strcpy(phone,p);
        strcpy(address,a);
        strcpy(position,po);

    }

    ~NameCard(){
        delete []name;
        delete []phone;
        delete []address;
        delete []position;
        cout<<"생성자 소멸"<<endl;
    }


    void ShowData()
    {
        cout<<"이름 : "<<name<<endl;
        cout<<"번호 : "<<phone<<endl;
        cout<<"주소 : "<<address<<endl;
        cout<<"직  위: "<<position<<endl;

    }



};


int main(){
    NameCard Lee("Lee ji sun" , "333-3333" , "www.naes.sdsd","missonary");
    Lee.ShowData();
    return 0;
}