#include<iostream>
using namespace std;
void input();
int dan,i;

int main(){
  input();
  for(i=1;i<10;i++){
      cout<<dan*i<<endl;
  }
  return 0;
}

void input()
{
    cout<<"구구단을 출력해주는 프로그램"<<endl<<endl;
    cout<<"출력을 원하는 단수를 입력해주세요: ";
    cin>>dan;

    if(dan<=0||dan>=10)
    {
        cout<<"올바른 값이 아닙니다. (1부터 9까지 입력가능)"<<endl<<endl<<endl;
        input();
    }


}
