#include <iostream>
using namespace std;

class Person{
protected:
    int age;
    char name[20];
public:
    int GetAge(){
        return age;
    }

    char *GetName(){
        return name;
    }
    Person(int _age =1,const char* _name = "noname" ){
        age = _age;
       strcpy(name,_name);
    }
};

class student:public Person{
    char major[20];

public:

    student(int _age , const char* _name , const char * _major): Person(_age,_name){
        strcpy(major , _major);
    }

   const char *GetMajor () const{
        return major;
    }

    student(const student &s):Person(s.age,s.name){
        cout<<"복제 시작"<<endl;
        strcpy(major,s.major);
        cout<<"복제 끝"<<endl;
    }

    void ShowData(){
        cout <<"이름: "<< name << endl;
        cout <<"나이: "<< age << endl;
        cout <<"전공: "<< major << endl;


    }

};

int main(){
    student Hong1(20,"홍길동","computer");
    Hong1.ShowData();
    student Hong2 = Hong1;
    Hong2.ShowData();

}