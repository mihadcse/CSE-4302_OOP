#include <iostream>
#include <math.h>

using namespace std;

class tds
{
protected:
    int nos;
    int x, y;

    int sides;
    string s = "No Color";

public:
    tds(int a, int b)
    {
        x = a;
        y = b;
        sides = 2;
    }
    virtual double areacalc()
    {
        return 0.0;
    }

    virtual void displayshape()
    {
    }
    void addcolor(string n)
    {
        s = n;
    }
};

class rectangle : public tds
{
private:
    int peri;

public:
    rectangle(int a, int b) : tds(a, b)
    {
        sides = sides + 2;
    }
    double areacalc()
    {

        return x * y;
    }
    int perical()
    {
        return 2 * (x + y);
    }
    void displayshape()
    {
        cout << "Number of sides: " << sides << endl;
        cout << "Type: rectangle" << endl;
        cout << "Area: " << areacalc();

        cout << "perimeter: " << perical() << endl;
        cout << s << endl;
    }
};

class triangle : public tds
{
private:
    int z;
    int area;
    int peri;

public:
    triangle(int a, int b, int c) : tds(a, b)
    {
        z = c;
        sides = sides + 1;
    }
    int pericalc()
    {
        return x + y + z;
    }
    double areacalc()
    {
        int s = pericalc() / 2;

        return sqrt(s * (s - x) * (s - y) * (s - z));
    }
    void displayshape()
    {
        cout << "Number of sides: " << sides << endl;
        cout << "Type: Triangle" << endl;
        cout << "Area: " << areacalc() << endl;

        cout << "perimeter: " << pericalc() << endl;
    }
};

class square : public tds
{
private:
    int area;
    int peri;

public:
    square(int a) : tds(a, 0)
    {
        sides = sides + 2;
    }
    double areacalc()
    {

        return x * x;
    }
    int pericalc()
    {
        return 4 * x;
    }
    void displayshape()
    {
        cout << "Number of sides: " << sides << endl;
        cout << "Type: Square" << endl;
        cout << "Area: " << areacalc() << endl;

        cout << "perimeter: " << pericalc() << endl;
    }
};

class hexagoan : public tds
{

private:
    int area;
    int peri;

public:
    hexagoan(int a) : tds(a, 0)
    {
        sides = sides + 4;
    }
    int pericalc()
    {
        return 6 * x;
    }
    double areacalc()
    {

        return ((3 * sqrt(3)) / 2) * (x * x);
    }
    void displayshape()
    {
        cout << "Number of sides: " << sides << endl;
        cout << "Type: hexa" << endl;
        cout << "Area: " << areacalc() << endl;

        cout << "perimeter: " << pericalc() << endl;
    }
};
void sortarray(tds *y[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - i; j++)
        {
            int w = y[i]->areacalc();
            int u = y[j]->areacalc();
            if (w > u)
            {
                swap(y[i], y[j]);
            }
        }
    }
}
int main()
{
    rectangle r1(5, 2);
    rectangle r2(5, 2);
    triangle t1(5, 5, 3);
    triangle t2(5, 5, 3);
    square s1(5);
    square s2(5);
    hexagoan h1(5);
    hexagoan h2(5);

    tds *arr[8];
    arr[0] = &r1;
    arr[1] = &r2;
    arr[2] = &t1;
    arr[3] = &t2;
    arr[4] = &s1;
    arr[5] = &s2;
    arr[6] = &h1;
    arr[7] = &h2;

    /* arr[0]->displayshape();
     /*arr[2]->displayshape();
     arr[4]->displayshape();
     arr[6]->displayshape();

     arr[0]->addcolor("red");
     arr[0]->displayshape();*/
    sortarray(arr, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i]->areacalc() << endl;
    }
}
