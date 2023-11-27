#include<iostream>
#include<cmath>

using namespace std;

class exception_class
{
public:
    class anerrorforZero{};
    class anerrorforNegativeSqr {};
    int divide(int a,int b)
    {
        if(b==0)
        {
            throw anerrorforZero();
        }
        else
        {
            return (a/b);
        }
    }
    int sqr(int a)
    {
        if(a<0)
        {
            throw anerrorforNegativeSqr();
        }
        else
        {
            return sqrt(a);
        }
    }

};
int main()
{
    exception_class ec;
    try
    {
        ec.divide(5,0);
    }
    catch(exception_class::anerrorforZero)
    {
        cout<<"error dividing"<<endl;
    }
    try
    {
        ec.sqr(-4);
    }
    catch(exception_class::anerrorforNegativeSqr)
    {
        cout<<"error for negative sqrt";
    } 
}