#include<iostream>

using namespace std;

class Counter
{
private:
    int count;
    int increment_step;
public:
    void setIncrement_step(int step_val)
    {
        increment_step = step_val;
    }
    int resetCount()
    {
        return count=0;
    }
    void increment()
    {
        count+=increment_step;
    }
    int getCount()
    {
        return count;
    }
    bool isEven()
    {
        if(count%2==0)
            return true;
        else
            return false;
    }

};

int main()
{
    Counter counter1;
    counter1.resetCount();
    counter1.setIncrement_step(5);

    counter1.increment();
    counter1.increment();

    cout<<"Current Count: " <<counter1.getCount()<<endl;

    counter1.resetCount();

    cout<<"After resetting Count: "<<counter1.getCount()<<endl;
    if(counter1.isEven()==1)
    {
        cout<<"EVEN";
    }
    else
        cout<<"ODD";


}
