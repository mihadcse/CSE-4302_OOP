#include <iostream>
#include <cmath>

using namespace std;

template <class Type> 
class MathOperation
{
public:
    Type add(Type object1, Type object2)
    {
        return (object1 + object2);
    }
    Type divide(Type object1, Type object2)
    {
        return (object1 / object2);
    }
    Type sqr(Type object1)
    {
        return sqrt(object1);
    }
};

int main()
{
    int int1,int2;
    double dub1,dub2;

    MathOperation<int>Mi;

    cout<<"Integers - "<<endl;
    cin>>int1>>int2;
    cout<<"add- ";
    cout<<Mi.add(int1,int2)<<endl;
    cout<<"divide- ";
    cout<<Mi.divide(int1,int2)<<endl;
    cout<<"Sqrt- ";
    cout<<Mi.sqr(int1)<<endl;

    MathOperation<double>Md;
    
    cout<<"double - "<<endl;
    cin>>dub1>>dub2;
    cout<<"add- ";
    cout<<Md.add(dub1,dub2)<<endl;
    cout<<"divide- ";
    cout<<Md.divide(dub1,dub2)<<endl;
    cout<<"sqrt- ";
    cout<<Md.sqr(dub1)<<endl;

}

