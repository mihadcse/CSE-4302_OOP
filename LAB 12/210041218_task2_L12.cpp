#include<iostream>

using namespace std;

template<class aT>
void arrayMultiplication(aT* array1,aT* array2,int n)
{
    for(int i=0;i<n;i++)
    {
        array1[i]=array1[i]*array2[i];
    }
}

int main()
{
    int n = 4;
    int array1[4] = {1,2,3,4};
    int array2[4] = {2,3,4,5};

    arrayMultiplication(array1,array2,n);
    cout<<"Int multiplication- ";
    for(int i=0;i<n;i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    double array3[4] = {1.20,2.30,3.40,4.50};
    double array4[4] = {2.690,3.94,4.36,5.3737};

    arrayMultiplication(array3,array4,n);
    cout<<"double multiplication- ";
    for(int i=0;i<n;i++)
    {
        cout<<array3[i]<<" ";
    }
}