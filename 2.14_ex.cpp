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

    NameCard(const NameCard &N){
        name = new char[strlen(N.name)+1];
        phone = new char[strlen(N.phone)+1];
        address=new char[strlen(N.address)+1];
        position = new char[strlen(N.position)+1];

        strcpy(name,N.name);
        strcpy(phone,N.phone);
        strcpy(address,N.address);
        strcpy(position,N.position);

        cout<<"복사생성!"<<endl;
    }

    ~NameCard(){
        delete []name;
        delete []phone;
        delete []address;
        delete []position;
        cout<<"소멸 완성"<<endl;
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
    NameCard Lee("Lee ji sun" , "333-3333" , "freelec","manager");
    NameCard Lee2(Lee);
    Lee.ShowData();
    cout<<"Lee Showdata() 출력 완료"<<endl;
    Lee2.ShowData();
    cout<<"Lee2 Showdata() 출력 완료"<<endl;
    return 0;
}
