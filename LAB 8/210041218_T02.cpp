#include <iostream>
#include <string>

using namespace std;

class Animal
{
    private:
        string habitat_area;
        string sound;
        bool canFly;
        bool canSwim;

    public:
        Animal(): habitat_area("Island"), sound("ooo"), canFly(true), canSwim(true) {}

        void set_habitat_area(string area)
        {
            habitat_area = area;
        }
        void set_sound(string sou)
        {
            sound = sou;
        }    
        bool set_canFly(bool fly)
        {
            canFly = fly;
        }
        bool set_canSwim(bool swim)
        {
            canSwim = swim;
        }

        void get_habitat_area()
        {
            cout<< habitat_area <<endl; 
        }
        void vocalize()
        {
            cout<<sound<<endl;
        }    
        bool get_canFly()
        {
            return canFly; 
        }
        bool get_canSwim()
        {
            return canSwim;
        }

        
};

class Cow: public Animal
{
    public:

        Cow()
        {
            set_habitat_area("grassland");
            set_sound("moo");
            set_canFly(false);
            set_canSwim(false);
        }    
};

class Cat: public Animal
{
    public:

        Cat()
        {
            set_habitat_area("land");
            set_sound("meow");
            set_canFly(false);
            set_canSwim(false);
        }    
};

class Chicken: public Animal
{
    public:
        Chicken()
        {
            set_habitat_area("land");
            set_sound("buck buck");
            set_canFly(true);
            set_canSwim(false);
        }    
};

int main()
{
    Cow c;
    cout<<"Cow= "<<endl;
    c.get_habitat_area();
    c.set_habitat_area("land1242");
    c.get_habitat_area();
    c.vocalize();

    cout<<endl;

    Cat ca;
    cout<<"Cat= "<<endl;
    ca.get_habitat_area();
    ca.set_habitat_area("land1234");
    ca.get_habitat_area();
    ca.vocalize();

    cout<<endl;

    Chicken ck;
    cout<<"Chicken= "<<endl;
    ck.get_habitat_area();
    ck.set_habitat_area("land12221");
    ck.get_habitat_area();
    ck.vocalize();



}