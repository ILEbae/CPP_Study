
#include <iostream>
using namespace std;
#define LENTH 20
class Printer
{
    char string[LENTH];

public:
    void SetString(const char *a){
        strcpy(string, a);
    }

    void ShowString(){
        cout<<string<<endl;
    }
};

int main(){
    Printer ptr;
    ptr.SetString("Hello World!");
    ptr.ShowString();

    ptr.SetString("I love C++");
    ptr.ShowString();

    return 0;

}
