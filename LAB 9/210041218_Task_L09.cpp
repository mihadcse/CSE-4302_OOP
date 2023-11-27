#include <iostream>
#include<math.h>
#include <string>

using namespace std;

class TwoDimensionalShape
{
public:
    double area;
    double perimeter;
    string color;

    TwoDimensionalShape() {}
    virtual void shapeDetails()
    {
        
    }
    virtual string getcolor() = 0;
};

class Square : public TwoDimensionalShape
{
private:
    double length;

public:

    Square(double l) : length(l) {}

    double getArea()
    {
        area = length * length;
        return area;
    }
    double getPerimeter()
    {
        perimeter = 4 * length;
        return perimeter;
    }

    string getcolor()
    {
        return "Red";
    }

    string setcolor(string& c)
    {
        color = c;
    }

    void shapeDetails() 
    {
        cout << "Number of sides: " << 4 << endl;
        cout << "Type: Square" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
        cout<<"Color: "<<getcolor()<<endl;
    }
};

class Rectangle : public TwoDimensionalShape
{
private:
    double length, width;

public:

    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea()
    {
        area = length * width;
        return area;
    }
    double getPerimeter()
    {
        perimeter = 2 * (length+width);
        return perimeter;
    }

    string getcolor()
    {
        return "Red";
    }

    string setcolor(string& c)
    {
        color = c;
    }

    void shapeDetails()
    {
        cout << "Number of sides: " << 4 << endl;
        cout << "Type: Rectangle"  << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter()<< endl;
        cout<<"Color: "<<getcolor()<<endl;
    }
};

class Hexagon : public TwoDimensionalShape
{
private:
    double length;

public:

    Hexagon(double l) : length(l) {}

    double getArea()
    {
        area = (3*sqrt(3)/2)*length*length;
        return area;
    }
    double getPerimeter()
    {
        perimeter = 6 * length;
        return perimeter;
    }

    string getcolor()
    {
        return "WHITE";
    }

    string setcolor(string& c)
    {
        color = c;
    }

    void shapeDetails()
    {
        cout << "Number of sides: " << 6 << endl;
        cout << "Type: Triangle" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() <<endl;
        cout<<"Color: "<<getcolor()<<endl;
    }

};

class Triangle : public TwoDimensionalShape
{
private:
    float la, lb, lc, s_p;

public:

    Triangle(float a, float b,float c, float sp) : la(a), lb(b), lc(c), s_p(sp) {}

    double getArea()
    {
        area = sqrt(s_p*(s_p-la)*(s_p-lb)*(s_p-lc));
        return area;
    }
    double getPerimeter()
    {
        perimeter = la + lb + lc;
        return perimeter;
    }

    string getcolor()
    {
        return "GREEN";
    }

    string setcolor(string& c)
    {
        color = c;
    }

    void shapeDetails()
    {
        cout << "Number of sides: " << 3 << endl;
        cout << "Type: Triangle" << endl;
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() <<endl;
        cout<<"Color: "<<getcolor()<<endl;
    }
};




int main()
{
    const int shapeCount = 8;
    TwoDimensionalShape* shapes[shapeCount];

    Triangle t1(3, 18, 12, 5);
    Triangle t2(3, 15, 75, 5);
    Rectangle r1(4, 24);
    Rectangle r2(4, 30);
    Square s1(4);
    Square s2(6);
    Hexagon h1(6);
    Hexagon h2(8);

    shapes[0] = &t1;
    shapes[1] = &t2;
    shapes[2] = &r1;
    shapes[3] = &r2;
    shapes[4] = &s1;
    shapes[5] = &s2;
    shapes[6] = &h1;
    shapes[7] = &h2;

    for (int i = 0; i < shapeCount; i++)
    {
        shapes[i]->shapeDetails();
        cout << "---------------" <<endl;
    }

}


