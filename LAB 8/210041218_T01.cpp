#include <iostream>
#include <string>

using namespace std;

class Shape
{
protected:
    float length;
    float width;

public:
    Shape() : length(1.00), width(1.00) {}

    Shape(float l, float w) : length(l), width(w) {}
};

class TwoDimensionalShape : public Shape
{
public:
    float area;
    float perimeter;
    string name;

    TwoDimensionalShape() : Shape() {}

    void WhoamI()
    {
        cout << "I am " << name << "I am a Two dimentional Shape" << endl;
    }
};

class ThreeDimensionalShape : public Shape
{
public:
    float surfacearea;
    float Volume;
    string name;

    ThreeDimensionalShape() : Shape() {}

    void WhoamI()
    {
        cout << "I am " << name << "I am a Three dimentional Shape" << endl;
    }
};

class Square : public TwoDimensionalShape
{
private:
    float length, width;

public:
    //Square() : TwoDimensionalShape(), length(1.00), width(1.00) {}

    Square(float l, float w) : length(l), width(w) {}

    void getAreaAndPerimeter()
    {
        area = length * width;
        perimeter = 4 * length;
        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }

    void WhoamI()
    {
        cout << "I am Square. I am a Two dimentional Shape" << endl;
    }
};

class Circle : public TwoDimensionalShape
{
private:
    float radius;

public:
    Circle() : TwoDimensionalShape(), radius(0.00) {}

    Circle(float r) : radius(r) {}

    void getAreaAndPerimeter()
    {
        area = radius * radius;
        perimeter = 2 * 3.1416 * radius;
        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }

    void WhoamI()
    {
        cout << "I am Circle. I am a Two dimentional Shape" << endl;
    }
};


class Rectangle : public TwoDimensionalShape
{
private:
    float length, width;

public:
    Rectangle() : TwoDimensionalShape(), length(0.00), width(0.00) {}

    Rectangle(float l, float w) : length(l), width(w) {}

    void getAreaAndPerimeter()
    {
        area = length * width;
        perimeter = 2 * (length+width);
        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }    
    
    void WhoamI()
    {
        cout << "I am Rectangle. I am a Two dimentional Shape" << endl;
    }
};

class Cube : public ThreeDimensionalShape
{
private:
    float s_length;
public:
    Cube(): ThreeDimensionalShape(), s_length(0.00) {}

    Cube(float sl): s_length(sl) {}

    void getSurfaceAreaAndVolume()
    {
        surfacearea = 6 * (s_length*s_length);
        Volume = s_length*s_length*s_length;
        cout << "SurfaceArea = " << surfacearea << endl;
        cout << "Volume = " << Volume << endl;
    }     
    
    void WhoamI()
    {
        cout << "I am Cube. I am a Three dimentional Shape" << endl;
    }
};

class Sphere : public ThreeDimensionalShape
{
private:
    float radius;
public:
    Sphere(): ThreeDimensionalShape(), radius(0.00) {}

    Sphere(float r): radius(r) {}

    void getSurfaceAreaAndVolume()
    {
        surfacearea = 4*3.1416*radius*radius;
        Volume = (4/3)*3.1416*radius*radius*radius;
        cout << "SurfaceArea = " << surfacearea << endl;
        cout << "Volume = " << Volume << endl;
    }     
    
    void WhoamI()
    {
        cout << "I am Sphere. I am a Three dimentional Shape" << endl;
    }
};

class Cylinder : public ThreeDimensionalShape
{
private:
    float radius,length;
public:
    Cylinder(): ThreeDimensionalShape(), radius(0.00), length(0.00) {}

    Cylinder(float r,float l): radius(r), length(l) {}

    void getSurfaceAreaAndVolume()
    {
        surfacearea = 2*3.1416*radius*(radius+length);
        Volume = 3.1416*radius*radius*length;
        cout << "SurfaceArea = " << surfacearea << endl;
        cout << "Volume = " << Volume << endl;
    }    
    
    void WhoamI()
    {
        cout << "I am Cylinder. I am a Three dimentional Shape" << endl;
    }
};


int main()
{
    
    Square squ(10,10);
    squ.getAreaAndPerimeter();
    squ.WhoamI();

    cout<<endl;
    cout<<endl;

    Circle c(10);
    c.getAreaAndPerimeter();
    c.WhoamI();

    cout<<endl;
    cout<<endl;

    Rectangle rec(10,20);
    rec.getAreaAndPerimeter();
    rec.WhoamI();

    cout<<endl;
    cout<<endl;

    Cube cu(10);
    cu.getSurfaceAreaAndVolume();
    cu.WhoamI();

    cout<<endl;
    cout<<endl;

    Cylinder cyl(10.50,20.50);
    cyl.getSurfaceAreaAndVolume();
    cyl.WhoamI();

    cout<<endl;
    cout<<endl;

    Sphere sph(10.20);
    sph.getSurfaceAreaAndVolume();
    sph.WhoamI();
    


}