#include <iostream>
#include <string>

using namespace std;

class Library_management
{
    private:
        string name;
        string location;
        int hours;
    public:
        Library_management(): name("IUT"), location("Building 2"), hours(15) {}


};

class Book: public Library_management
{
    private:
        string titile;
        string author;
        int isbn;
        string pub_date;
        int edition;



};

class Member: public Library_management
{
    private:

};