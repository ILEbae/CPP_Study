#include<iostream>
using namespace std;

class Time{
private:
    int hour,min,sec;

public:
    Time(int _hour=0,int _min=0, int _sec=0) // 여기는 왜 앞에 아무것도 붙으면 안되지??
    {
        hour = _hour;
        min = _min;
        sec = _sec;
    }

    void ShowTime(){
        cout<<"["<<hour<<"시 "<<min<<"분 "<<sec<<"초";

    }

    void ShowTimeinSec(){
        cout<<(hour*60*60)+(min*60)+sec<<"초";
    }

};

int main(){
    Time time1(10,20,0);
    time1.ShowTime();
    time1.ShowTimeinSec();

    return 0;
}