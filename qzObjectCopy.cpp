#include <iostream>
using namespace std;

class Student{
    int id;
    char  *name;
    char *major;
public:

    Student(int _id, char *_name , char *_major){
        id = _id;
        name = new char[strlen(_name)+1];
        major = new char[strlen(_major)+1];

        strcpy(name,_name);
        strcpy(major,_major);


        cout<<"복사성공"<<endl;
    }

    Student(const Student &s){
        id = s.id;
        name = new char[strlen(s.name)+1]; // 내가 생각하지 못한부분. -> 하는이유
        major = new char[strlen(s.major)+1]; // 내가 생각하지 못한부분. -> 하는 이유

        strcpy(name,s.name);
        strcpy(major,s.major);
    }
    ~Student() // 생각해주지 못함
    {
        delete []name;
        delete []major;
    }
    void showData(){
        cout<<"(" <<id << ","<<name<<","<<major<<")"<<endl;

    }
};

int main(){
    Student s1(1234,"홍길동","Computer Engineering");
    cout<<"원래객체 = "; // 생각하지 못함
    s1.showData();

    Student s2 = s1;
    cout<<"복사객체 ="; // 생각X
    s2.showData();

    return 0;


}
