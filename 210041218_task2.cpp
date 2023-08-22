#include<iostream>
using namespace std;

class BOOK
{
private:
    string title;
    string author;
    int year;
    string availability;

public:
    void setDetails(string tt , string auth, int y)
    {
        title = tt;
        author= auth;
        year= y;
    }
    void displayStatus()
    {
        cout<<"Title- "<< title <<"  Author- "<<author<<"  Year- "<<year<<endl;
    }
    bool isClassic()
    {
        if(year<1973)
            return true;
        else
            return false;
    }
    void checkIn()
    {
        availability="available";
        cout<<availability;
    }
    void checkOut()
    {
        availability="unavailable";
    }

};



int main()
{

    BOOK book1;

    book1.setDetails("BOOK","John",1980);
    book1.displayStatus();
    if(book1.isClassic()==1)
    {
        cout<<"CLASSIC"<<endl;
    }
    else
    {
        cout<<"NOT CLASSIC"<<endl;
    }

    book1.checkIn();

}
