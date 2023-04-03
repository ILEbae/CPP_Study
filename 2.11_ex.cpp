#include <iostream>
using namespace std;
#define pi 3.14;
class Rectangle{
    double width;
    double height;

public:
    void init(double w, double h){
        width = w;
        height = h;
    }

    double GetArea(){
        return width*height;
    }

    double GetGirth(){
        return (width+height)*2; // 왜 여기 *2 의 순서가 중요하지?
    }
};

class Circle{
    double radius;
public:
    void init(double r){
        radius = r;
    }
    double GetArea(){
        return radius*radius*pi;
    }

    double GetGirth(){
        return 2*radius*pi;
    }
};

int main(){
    Rectangle rec;
    Circle cir;
    rec.init(3,4);
    cout<<"사각형의 면적(넓이): "<<rec.GetArea()<<endl;
    cout<<"사각형의 둘레: "<<rec.GetGirth()<<endl;

    cir.init(5);
    cout<<"원의 면적(넓이): "<<cir.GetArea()<<endl;
    cout<<"원의 둘레: "<<cir.GetGirth()<<endl;

}