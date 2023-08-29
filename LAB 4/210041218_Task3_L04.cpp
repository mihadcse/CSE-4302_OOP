#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle(float length=1.0,float width=1.0):length(length),width(width)
    {

    }

    ~Rectangle()
    {

    }
    void calculateArea()
    {
        float area=length*width;
        cout<<area<<endl;
    }
    void calculatePerimeter()
    {
        float perimeter= 2*length*width;
        cout<<perimeter<<endl;
    }
    void calculateDiagonal()
    {
        float diagonal= sqrt(length*length+width*width);
        cout<< diagonal<<endl;
    }
    void calculateAngleWithLength()
    {

    }
    void setDimensions(float newL,float newW)
    {
        if(newL>=1.0 && newL<=20.0)
            length=newL;
        if(newW>=1.0 && newW<=20.0)
            width=newW;
    }
    void getDimensions()
    {
        cout<<"Length = "<<length <<" Width = "<<width<<endl;
    }
};

int main()
{
    Rectangle recT;
    recT.calculateArea();
    recT.calculateDiagonal();
    recT.calculatePerimeter();
    recT.setDimensions(14,15);
    cout<<"New area -- "<<endl;
    recT.calculateArea();
    recT.getDimensions();
}
