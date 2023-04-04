#include<iostream>
using namespace std;

class Person{
protected:
    int age;
    char *name;
public:
    Person(int _age,char * _name){
        age = _age;
        name = new char[strlen(_name)+1];
        strcpy(name,_name);
    }
    Person(const Person &p){
        age = p.age;
        name = new char[strlen(p.name)+1];

    }

    ~Person(){
        delete []name;
    }

    int GetAge(){
       return age;
    }

    const char * Getname () const{
        return name;

    }
};

class Student:public Person{
    char *major;
public:
    Student(int _age,char * _name , char * _major):Person(_age,_name){
        major = new char[strlen(_major) + 1]; // 메모리가 주어지냐 안주어지냐의 차이가 크군...
        strcpy(major,_major);
    }

    Student(const Student &s) :Person(s.age,s.name){
        major = new char[strlen(s.major)+1];
        strcpy(major,s.major);
    }
    ~Student(){
        delete []major;
    }

    const char * GetMajor() const{
        return major;
    }

    void Showdata() const{
        cout <<"이름: "<< name << endl;
        cout <<"나이: "<< age << endl;
        cout <<"전공: "<< major << endl;
    }
};

int main(){
    Student Hong1(20,"홍길동","computer");
    Hong1.Showdata();
    Student Hong2 = Hong1;
    Hong2.Showdata();

    return 0;
}
