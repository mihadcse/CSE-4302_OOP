#include<iostream>
#include<string>
using namespace std;

class Flight
{
private:
    int flightNum;
    string destination;
    float distance;
    float maxFuelCapacity;
public:
    Flight(int flightNum = 0,
        string dest = "",
        float dist = 0.0,
        float maxFuel = 0.0): flightNum(flightNum),destination(dest),distance(dist),maxFuelCapacity(maxFuel)
        {

        }

    ~Flight()
    {

       cout<< "Flight Number- "<<flightNum <<endl;
       cout<< "Destination- "<<destination <<endl;
       cout<< "Distance- "<<distance <<endl;
       cout<< "Max Fuel Capacity- "<<maxFuelCapacity <<endl;
    }

    void CalFuel()
    {
        if(distance<=1000)
        {
            maxFuelCapacity = 500;
            //cout<< "Max Fuel Needed - "<< maxFuelCapacity<<" liters"<<endl;
        }
        else if(distance>1000 && distance<=2000)
        {
            maxFuelCapacity = 1100;
            //cout<< "Max Fuel Needed - "<< maxFuelCapacity<<" liters"<<endl;
        }
        else if(distance>2000)
        {
            maxFuelCapacity = 2200;
            //cout<< "Max Fuel Needed - "<< maxFuelCapacity<<" liters"<<endl;
        }
    }

    void ShowInfo()
    {
        cout<<"####Flight Informations####"<<endl;
        cout<<"Flight Number- "<<flightNum<<endl;
        cout<<"Distance- "<<distance<<endl;
        cout<<"Destination- "<<destination<<endl;
        cout<<"maxFuelCapacity- "<<maxFuelCapacity<<endl;
    }

};

int main()
{
    Flight FlightInformation(560,"Saudi Arabia",6500,2200);
    FlightInformation.ShowInfo();
}
