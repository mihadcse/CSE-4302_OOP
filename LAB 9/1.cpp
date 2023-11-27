#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


class TwoDimentionalShape
{
private:
public:
    double area, perimeter;
    string color;

    TwoDimentionalShape() {};
    
    virtual double getArea()
    {
        cout << "Its in Two Dimentional Shape class" << endl;
    }
    virtual void shapeDetails()
    {
        cout << "Its in Two Dimentional Shape class- shapedetails" << endl;
    }
};

class Triangle : public TwoDimentionalShape
{
private:
    double side1, side2, side3;

public:
    Triangle(){};
    Triangle(double _side1, double _side2, double _side3, string _color) : side1(_side1),
                                                                           side2(_side2),
                                                                           side3(_side3)
    {
        color = _color;
        perimeter = side1 + side2 + side3;
        double s = perimeter / 2;
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    };

    double getArea()
    {
        return area;
    }
    void shapeDetails()
    {
        cout << "Number of Sides 3" << endl;
        cout << "Type: Triangle" << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Color: " << color << endl;
    }
};

class Rectangle : public TwoDimentionalShape
{
private:
    double side1, side2;

public:
    Rectangle(){};
    Rectangle(double _side1, double _side2, string _color) : side1(_side1),
                                                             side2(_side2)
    {
        color = _color;
        perimeter = (side1 + side2) * 2;

        area = side1 * side2;
    };

    double getArea()
    {
        return area;
    }
    void shapeDetails()
    {
        cout << "Number of Sides 4" << endl;
        cout << "Type: Rectangle" << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Color: " << color << endl;
    }
};

class Square : public TwoDimentionalShape
{
private:
    double side1;

public:
    Square(){};
    Square(double _side1, string _color) : side1(_side1)

    {
        color = _color;
        perimeter = side1 * 4;

        area = side1 * side1;
    };
    double getArea()
    {
        return area;
    }
    void shapeDetails()
    {
        cout << "Number of Sides 4" << endl;
        cout << "Type: Square" << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Color: " << color << endl;
    }
};

class Hexagon : public TwoDimentionalShape
{
private:
    double side1;

public:
    Hexagon(){};
    Hexagon(double _side1, string _color) : side1(_side1)
    {
        color = _color;
        perimeter = 6 * side1;

        area = 3 * sqrt(3) * side1 * side1 / 2;
    };

    double getArea()
    {
        return area;
    }
    void shapeDetails()
    {
        cout << "Number of Sides 6" << endl;
        cout << "Type: Hexagon" << endl;
        cout << "Area: " << area << endl;
        cout << "Perimeter: " << perimeter << endl;
        cout << "Color: " << color << endl;
    }
};

void sortShapeArea(TwoDimentionalShape **shapes, int n)
{
    sort(shapes, shapes + n, [](TwoDimentionalShape *a, TwoDimentionalShape *b)
         { return a->getArea() > b->getArea(); });
}

int main(void)
{

    TwoDimentionalShape *shapes[8];

    shapes[0] = new Triangle(4, 5, 6, "Red");
    shapes[1] = new Triangle(3, 3, 3, "Blue");
    shapes[2] = new Rectangle(4, 5, "Green");
    shapes[3] = new Rectangle(6, 8, "Yellow");
    shapes[4] = new Square(10, "Light Yellow");
    shapes[5] = new Square(12, "Light Green");
    shapes[6] = new Hexagon(5, "Pink");
    shapes[7] = new Hexagon(8, "Magenta");
    sortShapeArea(shapes, 8);

    for (int i = 0; i < 8; i++)
    {
        shapes[i]->shapeDetails();
    }

    return 0;
}