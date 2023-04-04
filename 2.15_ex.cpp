#include <iostream>
using namespace std;
class Account{
protected: // << 상속관계에서 주로 쓰임.

    char accNum[10];
    int balance;

public:
    Account(char *num,int bal){
        strcpy(accNum,num);//계좌번호
        balance = bal;//계좌 잔액
    }
};

class KBAccount : public Account{
    int transLimit;

public:
    KBAccount(char *num,int bal,int limit):Account(num,bal){
        transLimit = limit;
    }

    void ShowData(){
        cout<<"계좌번호 : " << accNum << endl;
        cout<<"계좌 잔액: " << balance << endl;
        cout <<"이체 한도: "<< transLimit << endl;
    }
};


int main(){
    KBAccount KA("1234-5678",5000,100000);
    KA.ShowData();

    return 0;
}