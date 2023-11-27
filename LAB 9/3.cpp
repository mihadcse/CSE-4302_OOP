#include <iostream>
#include<vector>

using namespace std;

class product
{
private:
    static int totalproduct;

protected:
    int id;

public:
    static void gettotal()
    {
        cout << totalproduct << endl;
    }
    product(int i)
    {
        id = i;
        totalproduct++;
    }

    virtual void displayinfo() const = 0;
    bool operator<(product &o)
    {
        if (id < o.id)
            return true;
        else
            return false;
    }
};

int product ::totalproduct = 0;

class book : public product
{
private:
    // int id;
    string title;
    string author;

public:
    book(int i, string s, string y) : product(i)
    {
        // id =i;
        title = s;
        author = y;
    }
    void displayinfo() const override
    {
        cout << id << endl;
        cout << title << endl;
        cout << author << endl;
    }
    /* bool operator<(book& o)  {
        if(id<o.id)return true;
        else false;

    }*/
};

class dvd : public product
{
private:
    // int id;
    string title;
    string director;

public:
    dvd(int i, string s, string y) : product(i)
    {
        // id =i;
        title = s;
        director = y;
    }
    void displayinfo() const override
    {
        cout << id << endl;
        cout << title << endl;
        cout << director << endl;
    }
    /*bool operator<(dvd& o) {
        if(id<o.id)return true;
        else false;

    }*/
};

void sortarray(vector<product *> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (!(*v[j] < *v[j + 1]))
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main()
{
    /*book b1(1,"x","y");
    product *p= &b1;
    p->displayinfo();
    p->gettotal();
    dvd d1(2,"p","w");
    product *t = &d1;
    t->displayinfo();
    t->gettotal();*/
    vector<product *> inventory;
    inventory.push_back(new book(2, "x", "y"));
    inventory.push_back(new dvd(1, "x", "y"));
    inventory.push_back(new book(3, "x", "y"));
    inventory.push_back(new dvd(4, "x", "y"));
    inventory[0]->gettotal();
    cout << endl;
    sortarray(inventory);
    for (int i = 0; i < inventory.size(); i++)
    {
        inventory[i]->displayinfo();

        cout << endl;
    }
}